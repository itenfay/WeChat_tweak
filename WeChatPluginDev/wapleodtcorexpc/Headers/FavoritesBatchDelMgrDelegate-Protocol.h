//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol FavoritesBatchDelMgrDelegate <NSObject>

@optional
- (void)onBatchDelItemBySourceIdFailedWith:(NSArray *)arg1;
- (void)onBatchDelItemBySourceIdSuccessfully;
- (void)onBatchDelItemSuccess;
@end

