import 'minew_beacon_plus_flutter_platform_interface.dart';
import 'src/models/minew_beacon_device.dart';

class MinewBeaconPlus {
  Future<String?> getPlatformVersion() {
    return MinewBeaconPlusFlutterPlatform.instance.getPlatformVersion();
  }

  Future<bool?> startScan() {
    return MinewBeaconPlusFlutterPlatform.instance.startScan();
  }

  Future<bool?> stopScan() {
    return MinewBeaconPlusFlutterPlatform.instance.stopScan();
  }

  Stream<List<MinewBeaconDevice>> getDevicesStream() {
    return MinewBeaconPlusFlutterPlatform.eventChannelInstance
        .getDevicesStream();
  }
}
