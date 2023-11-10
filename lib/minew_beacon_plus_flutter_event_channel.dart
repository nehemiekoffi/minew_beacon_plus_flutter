import 'package:flutter/foundation.dart';
import 'package:flutter/services.dart';

import 'minew_beacon_plus_flutter_platform_interface.dart';
import 'src/models/minew_beacon_device.dart';

class EventChannelMinewBeaconPlusFlutter
    extends MinewBeaconPlusFlutterPlatform {
  @visibleForTesting
  final scanDevicesEventChannel =
      const EventChannel('minew_beacon_devices_scan');

  @override
  Stream<List<MinewBeaconDevice>> getDevicesStream() {
    return scanDevicesEventChannel.receiveBroadcastStream().map((event) {
      try {
        final data = (event as List<Object?>)
            .map((e) => MinewBeaconDevice.fromMap(e))
            .toList();
        return data;
      } catch (e) {
        if (kDebugMode) {
          print(e);
        }
        return [];
      }
    });
  }
}
