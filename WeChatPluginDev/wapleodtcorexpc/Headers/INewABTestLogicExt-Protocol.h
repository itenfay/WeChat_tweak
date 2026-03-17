//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSMutableArray;

@protocol INewABTestLogicExt <NSObject>
- (void)getABTestItemsForRequest:(NSMutableArray *)arg1;

@optional
- (void)onGetABTestExpKeyItems:(NSArray *)arg1 expiredExpids:(NSArray *)arg2 isAutoGet:(_Bool)arg3;
- (void)onGetABTestItems:(NSArray *)arg1 expiredExpids:(NSArray *)arg2 isAutoGet:(_Bool)arg3;
@end

