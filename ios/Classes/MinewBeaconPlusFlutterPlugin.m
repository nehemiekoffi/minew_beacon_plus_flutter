#import "MinewBeaconPlusFlutterPlugin.h"
#import <MTCentralManager.h>

@implementation MinewBeaconPlusFlutterPlugin
+ (void)registerWithRegistrar:(NSObject<FlutterPluginRegistrar>*)registrar {
  FlutterMethodChannel* channel = [FlutterMethodChannel
      methodChannelWithName:@"minew_beacon_plus_flutter"
            binaryMessenger:[registrar messenger]];
  MinewBeaconPlusFlutterPlugin* instance = [[MinewBeaconPlusFlutterPlugin alloc] init];
  [registrar addMethodCallDelegate:instance channel:channel];
    
    MTCentralManager *manager = [MTCentralManager sharedInstance];

}

- (void)handleMethodCall:(FlutterMethodCall*)call result:(FlutterResult)result {
  if ([@"getPlatformVersion" isEqualToString:call.method]) {
    result([@"iOS " stringByAppendingString:[[UIDevice currentDevice] systemVersion]]);
  }
  if ([@"startScan" isEqualToString:call.method]) {
    startScan (call, result)
      
  }
  else {
    result(FlutterMethodNotImplemented);
  }
}

- (void) startScan: (FlutterMethodCall*)call result:(FlutterResult)result {
    result(TRUE);
}

@end
