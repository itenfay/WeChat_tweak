//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSMutableArray;

@protocol FavoritesBatchGetMgrDelegate <NSObject>
- (void)onBatchGetBySourceIdSuccessfullyWithReqFilterArr:(NSArray *)arg1 existFilterArr:(NSArray *)arg2 unExistFilterArr:(NSArray *)arg3 existItemArr:(NSArray *)arg4;
- (void)onBatchGetNewItem:(NSMutableArray *)arg1 UpdateItemList:(NSMutableArray *)arg2 ErrCode:(int)arg3;
- (NSArray *)GetNextBatchGetList;

@optional
- (void)onBatchGetBySourceIdFailedWith:(NSArray *)arg1;
@end

