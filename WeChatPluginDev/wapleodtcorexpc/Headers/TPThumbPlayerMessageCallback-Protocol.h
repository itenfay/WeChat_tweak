//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TPThumbPlayerWrapper;

@protocol TPThumbPlayerMessageCallback <NSObject>
- (void)onPlayer:(TPThumbPlayerWrapper *)arg1 detailInfo:(const struct TPDetailInfo *)arg2;
- (void)onError:(TPThumbPlayerWrapper *)arg1 errorType:(int)arg2 errorCode:(int)arg3;
- (void)onInfoObject:(TPThumbPlayerWrapper *)arg1 infoType:(int)arg2 objectParam:(void *)arg3;
- (void)onInfoLong:(TPThumbPlayerWrapper *)arg1 infoType:(int)arg2 lParam1:(long long)arg3 lParam2:(long long)arg4;
- (void)onASyncCallResult:(TPThumbPlayerWrapper *)arg1 callType:(int)arg2 opaque:(long long)arg3 errorType:(int)arg4 errorCode:(int)arg5;
@end

