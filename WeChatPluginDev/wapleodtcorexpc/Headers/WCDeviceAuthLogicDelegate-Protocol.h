//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, WCDeviceTask;

@protocol WCDeviceAuthLogicDelegate <NSObject>
- (void)onWCDeviceAuthEnd:(int)arg1 DID:(long long)arg2 RespTask:(WCDeviceTask *)arg3 SessionKey:(NSData *)arg4;
@end

