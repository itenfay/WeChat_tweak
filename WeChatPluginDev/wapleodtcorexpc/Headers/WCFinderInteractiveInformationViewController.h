//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCTableViewManager;

@interface WCFinderInteractiveInformationViewController
{
    WCTableViewManager *_tableViewManager;
}

@property(retain, nonatomic) WCTableViewManager *tableViewManager; // @synthesize tableViewManager=_tableViewManager;
- (void)registerYReportSdk;
- (void)onClickPrivateMsgList;
- (void)onClickNotificationList;
- (void)onClickFavList;
- (void)onClickLikeList;
- (void)onClickFollowList;
- (void)reloadTableView;
- (void)setup;
- (void)viewDidLoad;

@end

