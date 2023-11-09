
import 'minew_beacon_plus_flutter_platform_interface.dart';

class MinewBeaconPlusFlutter {
  Future<String?> getPlatformVersion() {
    return MinewBeaconPlusFlutterPlatform.instance.getPlatformVersion();
  }
}
