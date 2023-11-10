//
//  MinewPhotosensitiveSensor.h
//  MTBeaconPlus
//
//  Created by minew on 2021/5/17.
//  Copyright © 2021 MinewTech. All rights reserved.
//

#import <MTBeaconPlus/MTBeaconPlus.h>


@interface MinewPhotosensitiveSensor : MinewFrame


// lumens, maybe nil in connection stage.
@property (nonatomic, assign, readonly) double lumens;

// battery left
@property (nonatomic, assign, readonly) NSInteger battery;

// mac address
@property (nonatomic, strong, readonly) NSString *mac;

@end
