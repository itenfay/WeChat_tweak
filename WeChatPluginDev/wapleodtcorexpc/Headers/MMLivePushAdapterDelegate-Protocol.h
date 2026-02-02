//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLivePushAdapter, NSDictionary;

@protocol MMLivePushAdapterDelegate <NSObject>

@optional
- (void)livePushAdapterRemoteUsersVideoSettingChanged:(MMLivePushAdapter *)arg1;
- (void)livePushAdapterRemoteUsersChanged:(MMLivePushAdapter *)arg1;
- (void)livePushAdapter:(MMLivePushAdapter *)arg1 didPushNetStatus:(NSDictionary *)arg2;
- (void)livePushAdapterDidStopLocalVideo:(MMLivePushAdapter *)arg1;
- (void)livePushAdapterDidStartLocalVideo:(MMLivePushAdapter *)arg1;
- (void)livePushAdapterDidStopLocalAudio:(MMLivePushAdapter *)arg1;
- (void)livePushAdapterWillStartLocalAudio:(MMLivePushAdapter *)arg1;
@end

