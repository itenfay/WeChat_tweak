//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class ICFlowModel, NSArray, NSError, NSIndexSet;

@protocol ICFlowModelObserver <NSObject>

@optional
- (void)flowModel:(ICFlowModel *)arg1 deleteDataSectionsAt:(NSIndexSet *)arg2;
- (void)flowModel:(ICFlowModel *)arg1 insertDataSectionsAt:(NSIndexSet *)arg2;
- (void)flowModel:(ICFlowModel *)arg1 deleteDataItemsAt:(NSArray *)arg2;
- (void)flowModel:(ICFlowModel *)arg1 insertDataItemsAt:(NSArray *)arg2;
- (void)flowModelReloadDataItems:(ICFlowModel *)arg1;
- (void)flowModel:(ICFlowModel *)arg1 didCancelLoadMore:(id)arg2;
- (void)flowModel:(ICFlowModel *)arg1 didFinishLoadMore:(NSArray *)arg2 error:(NSError *)arg3;
- (void)flowModelWillLoadMore:(ICFlowModel *)arg1;
- (void)flowModel:(ICFlowModel *)arg1 didFinishLoadNew:(NSArray *)arg2 error:(NSError *)arg3;
- (void)flowModelWillLoadNew:(ICFlowModel *)arg1;
@end

