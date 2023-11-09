import 'package:flutter/foundation.dart';
import 'package:flutter/services.dart';

import 'minew_beacon_plus_flutter_platform_interface.dart';

/// An implementation of [MinewBeaconPlusFlutterPlatform] that uses method channels.
class MethodChannelMinewBeaconPlusFlutter
    extends MinewBeaconPlusFlutterPlatform {
  /// The method channel used to interact with the native platform.
  @visibleForTesting
  final methodChannel = const MethodChannel('minew_beacon_plus_flutter');

  @override
  Future<String?> getPlatformVersion() async {
    final version =
        await methodChannel.invokeMethod<String>('getPlatformVersion');
    return version;
  }

  @override
  Future<bool?> startScan() async {
    final result = await methodChannel.invokeMethod<bool>('startScan');
    return result;
  }

  @override
  Future<bool?> stopScan() async {
    final result = await methodChannel.invokeMethod<bool>('stopScan');
    return result;
  }
}
