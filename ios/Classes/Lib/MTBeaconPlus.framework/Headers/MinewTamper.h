//
//  MinewTamper.h
//  MTBeaconPlus
//
//  Created by minew on 2022/1/21.
//  Copyright © 2022 MinewTech. All rights reserved.
//

#import <MTBeaconPlus/MTBeaconPlus.h>

NS_ASSUME_NONNULL_BEGIN

@interface MinewTamper : MinewFrame

// tamper statu, 0: normal, 1: demolished.
@property (nonatomic, assign, readonly) BOOL isNormal;

// battery left
@property (nonatomic, assign, readonly) NSInteger battery;

// mac address
@property (nonatomic, strong, readonly) NSString *mac;

@end

NS_ASSUME_NONNULL_END
