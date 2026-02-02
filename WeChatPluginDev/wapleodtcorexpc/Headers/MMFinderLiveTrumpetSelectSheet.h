//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveTaskId, MMUIButton, MMUILabel, NSNumber, NSString, WCTableViewManager;
@protocol MMFinderLiveTrumpetSelectSheetDelegate;

@interface MMFinderLiveTrumpetSelectSheet
{
    CDUnknownBlockType _trumpetSelectDidDoneBlock;
    MMFinderLiveTaskId *_taskId;
    id <MMFinderLiveTrumpetSelectSheetDelegate> _delegate;
    MMUILabel *_accountsHeaderLabel;
    WCTableViewManager *_accountsTableViewManager;
    MMUILabel *_privacySettingHeaderLabel;
    MMUIButton *_sectionTipsBtn;
    WCTableViewManager *_privacySettingTableViewManager;
    long long _currentPrivacyType;
    NSNumber *_selectedAccountType;
    NSNumber *_selectedPrivacyType;
    NSNumber *_isPrivateMsgVisiableInfoSwitchOn;
}

+ (id)showWithTaskId:(id)arg1 delegate:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *isPrivateMsgVisiableInfoSwitchOn; // @synthesize isPrivateMsgVisiableInfoSwitchOn=_isPrivateMsgVisiableInfoSwitchOn;
@property(retain, nonatomic) NSNumber *selectedPrivacyType; // @synthesize selectedPrivacyType=_selectedPrivacyType;
@property(retain, nonatomic) NSNumber *selectedAccountType; // @synthesize selectedAccountType=_selectedAccountType;
@property(nonatomic) long long currentPrivacyType; // @synthesize currentPrivacyType=_currentPrivacyType;
@property(retain, nonatomic) WCTableViewManager *privacySettingTableViewManager; // @synthesize privacySettingTableViewManager=_privacySettingTableViewManager;
@property(retain, nonatomic) MMUIButton *sectionTipsBtn; // @synthesize sectionTipsBtn=_sectionTipsBtn;
@property(retain, nonatomic) MMUILabel *privacySettingHeaderLabel; // @synthesize privacySettingHeaderLabel=_privacySettingHeaderLabel;
@property(retain, nonatomic) WCTableViewManager *accountsTableViewManager; // @synthesize accountsTableViewManager=_accountsTableViewManager;
@property(retain, nonatomic) MMUILabel *accountsHeaderLabel; // @synthesize accountsHeaderLabel=_accountsHeaderLabel;
@property(nonatomic) __weak id <MMFinderLiveTrumpetSelectSheetDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(copy, nonatomic) CDUnknownBlockType trumpetSelectDidDoneBlock; // @synthesize trumpetSelectDidDoneBlock=_trumpetSelectDidDoneBlock;
- (void)pageSheetDidClose:(_Bool)arg1;
- (void)pageSheetDidAppear;
- (void)createTrumpetAccount;
- (void)onClickIdentityPrivacyH5;
- (void)onClickPrivateMsgVisiableInfoSwitchCell:(id)arg1;
- (void)onClickMMFinderLiveTrumpetSelectCellContent:(id)arg1;
- (double)tableWidth;
- (double)privacyTableCellHeight;
- (double)tableCellHeight;
- (id)liveTask;
- (id)joinliveVisibleInfo;
- (void)refresh;
- (id)makeHeaderViewWith:(id)arg1 topPading:(double)arg2;
- (long long)reloadPrivacySection;
- (void)configurePrivacyTableView;
- (long long)reloadAccountsSection;
- (void)configureAccountsTableView;
- (void)layoutUI;
- (double)fixedHeight;
- (void)layoutSubviews;
- (void)setupSubviews;
- (void)onDoneButtonClicked;
- (void)onLeftButtonAction;
- (id)getCurrentRightButton;
- (id)getCurrentLeftButton;
- (void)setupPageSheetConfig;
- (id)initWithTaskId:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

