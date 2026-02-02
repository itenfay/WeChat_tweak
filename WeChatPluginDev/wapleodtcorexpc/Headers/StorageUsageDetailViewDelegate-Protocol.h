//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class StorageUsageDetailView;

@protocol StorageUsageDetailViewDelegate <NSObject>
- (void)onDeepCleanButtonClicked:(StorageUsageDetailView *)arg1;
- (void)onClearCacheButtonClicked:(StorageUsageDetailView *)arg1;
- (void)onManageChatLogButtonClicked:(StorageUsageDetailView *)arg1;
@end

