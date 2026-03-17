//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IUdrResourceCallback <NSObject>
- (void)onCallBackFail:(NSString *)arg1 name:(NSString *)arg2 version:(int)arg3 errNo:(int)arg4 errCode:(int)arg5 scene:(long long)arg6;
- (void)onCallBackSuccess:(NSString *)arg1 name:(NSString *)arg2 version:(int)arg3 scene:(long long)arg4;
- (void)onCallBackCheckSuccess:(NSString *)arg1 name:(NSString *)arg2 version:(int)arg3 scene:(long long)arg4;
- (void)onCallBackStartPeriod:(NSString *)arg1;
@end

