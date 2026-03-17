//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveNoticeListViewModel, NSIndexSet;

@protocol MMFinderLiveNoticeListViewModelDelegate <NSObject>
- (void)reloadTopStatusInNoticeListViewModel:(MMFinderLiveNoticeListViewModel *)arg1;
- (void)reloadReserveStatusInNoticeListViewModel:(MMFinderLiveNoticeListViewModel *)arg1;
- (void)batchUpdateDataWithRemovedIndexes:(NSIndexSet *)arg1 insertedIndexes:(NSIndexSet *)arg2 updatedIndexes:(NSIndexSet *)arg3 inNoticeListViewModel:(MMFinderLiveNoticeListViewModel *)arg4;
- (void)reloadDataInNoticeListViewModel:(MMFinderLiveNoticeListViewModel *)arg1;
@end

