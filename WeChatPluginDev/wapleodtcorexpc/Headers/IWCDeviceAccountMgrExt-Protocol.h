//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCDevice;

@protocol IWCDeviceAccountMgrExt <NSObject>

@optional
- (void)onWCDeviceAccountUnbind:(WCDevice *)arg1;
- (void)onWCDeviceAccountBound:(WCDevice *)arg1;
@end

