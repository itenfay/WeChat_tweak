//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderContact, WCFinderPrivacySettingHelper, WCTableViewManager, WCTableViewSectionManager;

@interface WCFinderMentionSwitchViewController
{
    WCFinderContact *_contact;
    WCTableViewManager *_tableViewManager;
    WCTableViewSectionManager *_msgSwitchSection;
    WCFinderPrivacySettingHelper *_helper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderPrivacySettingHelper *helper; // @synthesize helper=_helper;
@property(retain, nonatomic) WCTableViewSectionManager *msgSwitchSection; // @synthesize msgSwitchSection=_msgSwitchSection;
@property(retain, nonatomic) WCTableViewManager *tableViewManager; // @synthesize tableViewManager=_tableViewManager;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
- (void)requestReloadTableView;
- (void)showFollowMentionSwitchChanged:(id)arg1;
- (void)showCommentMentionSwitchChanged:(id)arg1;
- (void)showLikeMentionSwitchChanged:(id)arg1;
- (void)reloadTableView;
- (id)makeSectionSeparator;
- (void)configureTableView;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

