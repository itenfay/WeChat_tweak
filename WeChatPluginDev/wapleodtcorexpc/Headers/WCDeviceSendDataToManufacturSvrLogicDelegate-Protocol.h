//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCDeviceTask;

@protocol WCDeviceSendDataToManufacturSvrLogicDelegate <NSObject>
- (void)onHandleMsgEnd:(WCDeviceTask *)arg1 ErrCode:(int)arg2;
@end

