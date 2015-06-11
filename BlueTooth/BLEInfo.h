//
//  BLEInfo.h
//  BlueTooth
//
//  Created by JackXu on 15/6/10.
//  Copyright © 2015年 BFMobile. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>
@interface BLEInfo : NSObject

@property (nonatomic, strong) CBPeripheral *discoveredPeripheral;
@property (nonatomic, strong) NSNumber *rssi;

@end
