//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSMutableArray, NSString;

@protocol WCAppAuthFetchLogicDelegate <NSObject>
- (void)fetchDidFinish;
- (void)fetchDidFailWithErrCode:(int)arg1 errMsg:(NSString *)arg2;
- (void)fetchDidSucceedWithApps:(NSMutableArray *)arg1;
@end

