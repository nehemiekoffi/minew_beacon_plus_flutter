import 'minew_beacon_plus_flutter_platform_interface.dart';

class MinewBeaconPlus {
  Future<String?> getPlatformVersion() {
    return MinewBeaconPlusFlutterPlatform.instance.getPlatformVersion();
  }
}
