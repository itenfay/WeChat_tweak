//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <CoreBluetooth/CBCentralManager.h>

@interface WCCentralManager : CBCentralManager
{
}

+ (_Bool)canSilientInitCentralManager;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3;

@end

