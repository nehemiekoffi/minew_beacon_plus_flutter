// ignore_for_file: public_member_api_docs, sort_constructors_first

import 'dart:convert';

import 'package:flutter/foundation.dart';
import 'package:minew_beacon_plus_flutter/src/models/minew_beacon_device_frame.dart';

class MinewBeaconDevice {
  final String? name;
  final String? mac;
  final int? battery;
  final String? rssi;
  final List<MinewBeaconDeviceFrame>? advFrames;

  MinewBeaconDevice({
    this.name,
    this.mac,
    this.battery,
    this.rssi,
    this.advFrames,
  });

  MinewBeaconDevice copyWith({
    String? name,
    String? mac,
    int? battery,
    String? rssi,
    List<MinewBeaconDeviceFrame>? advFrames,
  }) {
    return MinewBeaconDevice(
      name: name ?? this.name,
      mac: mac ?? this.mac,
      battery: battery ?? this.battery,
      rssi: rssi ?? this.rssi,
      advFrames: advFrames ?? this.advFrames,
    );
  }

  Map<String, dynamic> toMap() {
    return <String, dynamic>{
      'name': name,
      'mac': mac,
      'battery': battery,
      'rssi': rssi,
      'advFrames': advFrames?.map((x) => x.toMap()).toList(),
    };
  }

  factory MinewBeaconDevice.fromMap(dynamic map) {
    return MinewBeaconDevice(
      name: map['name'] != null ? map['name'] as String : null,
      mac: map['mac'] != null ? map['mac'] as String : null,
      battery: map['battery'] != null ? int.tryParse(map['battery']) : 0,
      rssi: map['rssi'] != null ? map['rssi'] as String : null,
      advFrames: map['advFrames'] != null
          ? List<MinewBeaconDeviceFrame>.from(
              (map['advFrames'] as List<Object?>).map<MinewBeaconDeviceFrame?>(
                (x) => MinewBeaconDeviceFrame.fromMap(x),
              ),
            )
          : null,
    );
  }

  String toJson() => json.encode(toMap());

  factory MinewBeaconDevice.fromJson(String source) =>
      MinewBeaconDevice.fromMap(json.decode(source) as Map<String, dynamic>);

  @override
  String toString() {
    return 'BeaconDevice(name: $name, mac: $mac, battery: $battery, rssi: $rssi, advFrames: $advFrames)';
  }

  @override
  bool operator ==(covariant MinewBeaconDevice other) {
    if (identical(this, other)) return true;

    return other.name == name &&
        other.mac == mac &&
        other.battery == battery &&
        other.rssi == rssi &&
        listEquals(other.advFrames, advFrames);
  }

  @override
  int get hashCode {
    return name.hashCode ^
        mac.hashCode ^
        battery.hashCode ^
        rssi.hashCode ^
        advFrames.hashCode;
  }
}
