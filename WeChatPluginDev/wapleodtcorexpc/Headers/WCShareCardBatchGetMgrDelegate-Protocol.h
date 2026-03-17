//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol WCShareCardBatchGetMgrDelegate <NSObject>

@optional
- (void)onBatchGetEnd:(unsigned int)arg1;
- (void)onBatchGetShareCardList:(NSArray *)arg1 ErrCode:(int)arg2;
@end

