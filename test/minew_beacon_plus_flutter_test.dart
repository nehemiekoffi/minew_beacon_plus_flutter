import 'package:flutter_test/flutter_test.dart';
import 'package:minew_beacon_plus_flutter/minew_beacon_plus_flutter.dart';
import 'package:minew_beacon_plus_flutter/minew_beacon_plus_flutter_platform_interface.dart';
import 'package:minew_beacon_plus_flutter/minew_beacon_plus_flutter_method_channel.dart';
import 'package:minew_beacon_plus_flutter/src/models/minew_beacon_device.dart';
import 'package:plugin_platform_interface/plugin_platform_interface.dart';

class MockMinewBeaconPlusFlutterPlatform
    with MockPlatformInterfaceMixin
    implements MinewBeaconPlusFlutterPlatform {
  @override
  Future<String?> getPlatformVersion() => Future.value('42');

  @override
  Future<bool?> startScan() {
    return Future.value(true);
  }

  @override
  Future<bool?> stopScan() {
    return Future.value(true);
  }

  @override
  Stream<List<MinewBeaconDevice>> getDevicesStream() {
    // TODO: implement getDevicesStream
    throw UnimplementedError();
  }
}

void main() {
  final MinewBeaconPlusFlutterPlatform initialPlatform =
      MinewBeaconPlusFlutterPlatform.instance;

  test('$MethodChannelMinewBeaconPlusFlutter is the default instance', () {
    expect(
        initialPlatform, isInstanceOf<MethodChannelMinewBeaconPlusFlutter>());
  });

  test('getPlatformVersion', () async {
    MinewBeaconPlus minewBeaconPlusFlutterPlugin = MinewBeaconPlus();
    MockMinewBeaconPlusFlutterPlatform fakePlatform =
        MockMinewBeaconPlusFlutterPlatform();
    MinewBeaconPlusFlutterPlatform.instance = fakePlatform;

    expect(await minewBeaconPlusFlutterPlugin.getPlatformVersion(), '42');
  });

  test('startScan', () async {
    MinewBeaconPlus minewBeaconPlusFlutterPlugin = MinewBeaconPlus();
    MockMinewBeaconPlusFlutterPlatform fakePlatform =
        MockMinewBeaconPlusFlutterPlatform();
    MinewBeaconPlusFlutterPlatform.instance = fakePlatform;

    expect(await minewBeaconPlusFlutterPlugin.startScan(), true);
  });

  test('stopScan', () async {
    MinewBeaconPlus minewBeaconPlusFlutterPlugin = MinewBeaconPlus();
    MockMinewBeaconPlusFlutterPlatform fakePlatform =
        MockMinewBeaconPlusFlutterPlatform();
    MinewBeaconPlusFlutterPlatform.instance = fakePlatform;

    expect(await minewBeaconPlusFlutterPlugin.stopScan(), true);
  });
}
