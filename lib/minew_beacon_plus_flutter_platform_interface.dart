import 'package:plugin_platform_interface/plugin_platform_interface.dart';

import 'minew_beacon_plus_flutter_method_channel.dart';
import 'src/models/minew_beacon_device.dart';

abstract class MinewBeaconPlusFlutterPlatform extends PlatformInterface {
  /// Constructs a MinewBeaconPlusFlutterPlatform.
  MinewBeaconPlusFlutterPlatform() : super(token: _token);

  static final Object _token = Object();

  static MinewBeaconPlusFlutterPlatform _instance =
      MethodChannelMinewBeaconPlusFlutter();

  /// The default instance of [MinewBeaconPlusFlutterPlatform] to use.
  ///
  /// Defaults to [MethodChannelMinewBeaconPlusFlutter].
  static MinewBeaconPlusFlutterPlatform get instance => _instance;

  /// Platform-specific implementations should set this with their own
  /// platform-specific class that extends [MinewBeaconPlusFlutterPlatform] when
  /// they register themselves.
  static set instance(MinewBeaconPlusFlutterPlatform instance) {
    PlatformInterface.verifyToken(instance, _token);
    _instance = instance;
  }

  Future<String?> getPlatformVersion() {
    throw UnimplementedError('platformVersion() has not been implemented.');
  }

  Future<bool?> startScan() {
    throw UnimplementedError('startScan() has not been implemented.');
  }

  Future<bool?> stopScan() {
    throw UnimplementedError('stopScan() has not been implemented.');
  }

  Stream<List<MinewBeaconDevice>> getDevicesStream() {
    throw UnimplementedError('getDevicesStream() has not been implemented.');
  }
}
