//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol WCCardPkgBatchGetMgrDelegate <NSObject>

@optional
- (void)onBatchGetCardList:(NSArray *)arg1 ErrCode:(int)arg2;
@end

