//
//  MinewGinfo.h
//  MTBeaconPlus
//
//  Created by minew on 2023/5/4.
//  Copyright © 2023 MinewTech. All rights reserved.
//

#import <MTBeaconPlus/MTBeaconPlus.h>

NS_ASSUME_NONNULL_BEGIN

@interface MinewGinfo : MinewFrame

// mac
@property (nonatomic, strong) NSString *mac;

// battery
@property (nonatomic, assign, readonly) NSInteger battery;

// uuid
@property (nonatomic, strong) NSString *uuid;

@end

NS_ASSUME_NONNULL_END
