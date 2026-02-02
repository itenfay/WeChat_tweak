//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCTableViewManager, WCTableViewSectionManager;

@interface WCFinderWXMentionSwitchViewController
{
    WCTableViewManager *_tableViewManager;
    WCTableViewSectionManager *_msgSwitchSection;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTableViewSectionManager *msgSwitchSection; // @synthesize msgSwitchSection=_msgSwitchSection;
@property(retain, nonatomic) WCTableViewManager *tableViewManager; // @synthesize tableViewManager=_tableViewManager;
- (void)showCommentMentionSwitchChanged:(id)arg1;
- (void)showLikeMentionSwitchChanged:(id)arg1;
- (void)reloadTableView;
- (id)makeSectionSeparator;
- (void)configureTableView;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;

@end

