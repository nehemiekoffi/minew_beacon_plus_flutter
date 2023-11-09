//
//  MTPublicHeader.h
//  MTBeaconPlus
//
//  Created by SACRELEE on 9/21/17.
//  Copyright © 2017 MinewTech. All rights reserved.
//

@import Foundation;

typedef NS_ENUM(NSInteger, FrameType) {
    FrameNone = -3,
    FrameConnectable = -2,
    FrameUnknown = -1,
    FrameTLM = 0,
    FrameHTSensor,
    FrameAccSensor,
    FrameLightSensor,
    FrameQlock,
    FrameDFU,
    FrameRoambee,
    FrameForceSensor,
    FramePIRSensor,
    FrameTVOCSensor,
    FrameTempSensor,
    FrameLineBeacon,
    FrameSixAxisSensor,
    FrameMagnetometerSensor,
    FrameAtmosphericPressureSensor,
    FrameVibrationSensor,
    FramePhotosensitiveSensor,
    FrameTamper,
    FrameWaterImmersionSensor,
    FrameGinfo,

    //staticFrame
    FrameUID = 100,
    FrameiBeacon,
    FrameURL,
    FrameDeviceInfo,
    FrameMBeaconInfo,
    FrameAltBeacon,
};


static NSString *FrameTypeString(FrameType type) {
    switch (type) {
        case FrameNone:
            return @"FrameNone";
        case FrameConnectable:
            return @"FrameConnectable";
        case FrameUnknown:
            return @"FrameUnknown";
        case FrameTLM:
            return @"FrameTLM";
        case FrameHTSensor:
            return @"FrameHTSensor";
        case FrameAccSensor:
            return @"FrameAccSensor";
        case FrameLightSensor:
            return @"FrameLightSensor";
        case FrameQlock:
            return @"FrameQlock";
        case FrameDFU:
            return @"FrameDFU";
        case FrameRoambee:
            return @"FrameRoambee";
        case FrameForceSensor:
            return @"FrameForceSensor";
        case FramePIRSensor:
            return @"FramePIRSensor";
        case FrameTVOCSensor:
            return @"FrameTVOCSensor";
        case FrameTempSensor:
            return @"FrameTempSensor";
        case FrameLineBeacon:
            return @"FrameLineBeacon";
        case FrameUID:
            return @"FrameUID";
        case FrameiBeacon:
            return @"FrameiBeacon";
        case FrameURL:
            return @"FrameURL";
        case FrameDeviceInfo:
            return @"FrameDeviceInfo";
        case FramePhotosensitiveSensor:
            return @"FramePhotosensitiveSensor";
        case FrameTamper:
            return @"FrameTamper";
        case FrameMBeaconInfo:
            return @"FrameMBeaconInfo";
        case FrameAltBeacon:
            return @"FrameAltBeacon";
        case FrameWaterImmersionSensor:
            return @"FrameWaterImmersionSensor";
        default:
            return @"";
    }
}


#define MTNAValue 10000000000.0
