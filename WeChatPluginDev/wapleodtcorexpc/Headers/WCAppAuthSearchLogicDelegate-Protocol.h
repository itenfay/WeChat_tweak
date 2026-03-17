//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSMutableArray, NSString;

@protocol WCAppAuthSearchLogicDelegate <NSObject>
- (void)searchDidFinish;
- (void)searchDidFailWithErrCode:(int)arg1 errMsg:(NSString *)arg2;
- (void)searchDidSucceedWithApps:(NSMutableArray *)arg1;
- (void)searchWillBeginNewTextSearch;
@end

