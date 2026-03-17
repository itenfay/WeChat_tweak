//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CustomRoamDiskManagerCallback;

@protocol CustomRoamDiskManagerBase <NSObject>

@optional
- (void)scanDevices;
- (void)setCallback:(CustomRoamDiskManagerCallback *)arg1;
@end

