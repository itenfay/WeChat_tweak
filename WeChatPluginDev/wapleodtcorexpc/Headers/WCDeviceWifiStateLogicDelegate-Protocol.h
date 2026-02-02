//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCDevice;

@protocol WCDeviceWifiStateLogicDelegate <NSObject>
- (void)onhandleWifiStateUpdateMsgEnd:(WCDevice *)arg1 Status:(unsigned int)arg2;

@optional
- (void)onWCDevideWifiStateSubscribeEnd:(WCDevice *)arg1 ForError:(int)arg2;
@end

