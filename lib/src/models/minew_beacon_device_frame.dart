// ignore_for_file: public_member_api_docs, sort_constructors_first
import 'dart:convert';

class MinewBeaconDeviceFrame {
  final String type;
  final int slot;

  MinewBeaconDeviceFrame({
    required this.type,
    required this.slot,
  });

  MinewBeaconDeviceFrame copyWith({
    String? type,
    int? slot,
  }) {
    return MinewBeaconDeviceFrame(
      type: type ?? this.type,
      slot: slot ?? this.slot,
    );
  }

  Map<String, dynamic> toMap() {
    return <String, dynamic>{
      'type': type,
      'slot': slot,
    };
  }

  factory MinewBeaconDeviceFrame.fromMap(dynamic map) {
    return MinewBeaconDeviceFrame(
      type: map['type'] as String,
      slot: map['slot'] ?? 0,
    );
  }

  String toJson() => json.encode(toMap());

  factory MinewBeaconDeviceFrame.fromJson(String source) =>
      MinewBeaconDeviceFrame.fromMap(
          json.decode(source) as Map<String, dynamic>);

  @override
  String toString() => 'BeaconPeriphericalFrame(type: $type, slot: $slot)';

  @override
  bool operator ==(covariant MinewBeaconDeviceFrame other) {
    if (identical(this, other)) return true;

    return other.type == type && other.slot == slot;
  }

  @override
  int get hashCode => type.hashCode ^ slot.hashCode;

  // Getters
  bool get isURLFrame => type == "FrameURL";

  bool get isiBeaconFrame => type == "FrameiBeacon";

  String get simpleTypeName => type.replaceAll("Frame", "");
}
