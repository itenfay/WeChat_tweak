//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSMutableData;

@protocol VoIPConfSDKServiceExtension <NSObject>

@optional
- (void)voIPConfSDKServiceWillInterrputVoIPByCall:(_Bool)arg1;
- (void)voIPConfSDKServiceOnReceiveMainCallEndEvent;
- (void)voIPConfSDKServiceOnReceiveEvent:(int)arg1 errCode:(int)arg2 data:(NSData *)arg3 ret:(NSMutableData *)arg4;
@end

