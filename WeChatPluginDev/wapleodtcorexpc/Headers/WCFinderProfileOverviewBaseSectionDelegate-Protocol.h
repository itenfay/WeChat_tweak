//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, UICollectionViewCell, WCFinderFeedContentVM, WCFinderProfileOverviewBaseSectionCtrl, WCFinderProfileOverviewPage;

@protocol WCFinderProfileOverviewBaseSectionDelegate <NSObject>
- (void)sectionCtrl:(WCFinderProfileOverviewBaseSectionCtrl *)arg1 onClickFeed:(WCFinderFeedContentVM *)arg2;
- (void)sectionCtrl:(WCFinderProfileOverviewBaseSectionCtrl *)arg1 requestScrollToSection:(NSString *)arg2 item:(NSString *)arg3;
- (void)sectionCtrl:(WCFinderProfileOverviewBaseSectionCtrl *)arg1 requestReloadItems:(NSArray *)arg2;
- (void)sectionCtrl:(WCFinderProfileOverviewBaseSectionCtrl *)arg1 requestReloadSection:(NSString *)arg2;
- (void)sectionCtrlRequestRelayout:(WCFinderProfileOverviewBaseSectionCtrl *)arg1;
- (void)sectionCtrlRequestReloadSelf:(WCFinderProfileOverviewBaseSectionCtrl *)arg1;
- (void)sectionCtrlRequestReloadData:(WCFinderProfileOverviewBaseSectionCtrl *)arg1;
- (void)sectionCtrlPreloadVisibleVideo:(WCFinderProfileOverviewBaseSectionCtrl *)arg1;
- (void)sectionCtrlReloadStatusView:(WCFinderProfileOverviewBaseSectionCtrl *)arg1;
- (WCFinderProfileOverviewPage *)overPageForSectonCtrl:(WCFinderProfileOverviewBaseSectionCtrl *)arg1;
- (void)sectionCtrl:(WCFinderProfileOverviewBaseSectionCtrl *)arg1 requestJumpToTab:(int)arg2 completion:(void (^)(WCFinderStreamProfileViewPage *))arg3;
- (UICollectionViewCell *)sectionCtrl:(WCFinderProfileOverviewBaseSectionCtrl *)arg1 requestCellForSection:(NSString *)arg2 identifier:(NSString *)arg3;
- (NSArray *)sectionCtrlFetchVisiableIndexPaths:(WCFinderProfileOverviewBaseSectionCtrl *)arg1;
@end

