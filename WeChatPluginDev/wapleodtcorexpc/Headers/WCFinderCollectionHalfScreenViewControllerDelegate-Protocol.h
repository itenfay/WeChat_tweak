//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderCollectionInfo, FinderPaidCollectionInfo, NSString, UIView, WCFinderCollectionFeedListViewModel, WCFinderCollectionHalfScreenViewController, WCFinderFeedContentVM;

@protocol WCFinderCollectionHalfScreenViewControllerDelegate <NSObject>

@optional
- (_Bool)collectionHalfListNeedShowBackgroupMask;
- (UIView *)collectionHalfListCustomRightView:(int)arg1;
- (void)collectionHalfListWillAppear:(WCFinderCollectionHalfScreenViewController *)arg1;
- (_Bool)collectionHalfListForbidAutoClose;
- (_Bool)collectionHalfList:(WCFinderCollectionHalfScreenViewController *)arg1 handleConsumeSuccessWithTargetTid:(NSString *)arg2;
- (_Bool)collectionHalfList:(WCFinderCollectionHalfScreenViewController *)arg1 handleClickContentVM:(WCFinderFeedContentVM *)arg2;
- (WCFinderCollectionFeedListViewModel *)fetchCollectionHalfListSheetWithContentVM:(WCFinderFeedContentVM *)arg1 paidCollection:(FinderPaidCollectionInfo *)arg2;
- (WCFinderCollectionFeedListViewModel *)fetchCollectionHalfListSheetWithContentVM:(WCFinderFeedContentVM *)arg1 collectionInfo:(FinderCollectionInfo *)arg2;
@end

