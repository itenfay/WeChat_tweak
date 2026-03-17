//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCAppAuthOpLogicDelegate <NSObject>
- (void)deletionDidFail:(NSString *)arg1 errCode:(int)arg2 errMsg:(NSString *)arg3;
- (void)deletionDidSucceedForAppId:(NSString *)arg1;
- (void)modificationDidFailWithErrCode:(int)arg1 errMsg:(NSString *)arg2;
- (void)modificationDidSucceed:(int)arg1;
@end

