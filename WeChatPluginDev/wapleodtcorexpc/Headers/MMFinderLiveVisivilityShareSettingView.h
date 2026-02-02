//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveNewShareSettingSessionSelectController, MMFinderLiveShareSettingInitParams, MMFinderLiveVisivilitySettingInfo, MMTableViewInfo, MMUIButton, MMUILabel, NSString, UIButton, UIView, UIViewController;
@protocol MMFinderLiveVisivilityShareSettingDelegate;

@interface MMFinderLiveVisivilityShareSettingView
{
    _Bool _isShown;
    _Bool _forceDarkMode;
    unsigned int _openContactSelectViewScene;
    MMFinderLiveShareSettingInitParams *_settingInitParam;
    MMFinderLiveVisivilitySettingInfo *_settingInfo;
    UIViewController *_rootVC;
    MMFinderLiveNewShareSettingSessionSelectController *_shareSettingSessionSelectVC;
    id <MMFinderLiveVisivilityShareSettingDelegate> _settingDelegate;
    CDUnknownBlockType _dismissCompletion;
    long long _closeAction;
    UIView *_contentView;
    MMUILabel *_titleLabel;
    MMUIButton *_closeButton;
    UIButton *_confirmButton;
    MMTableViewInfo *_tableViewInfo;
}

+ (id)lowerCellDigestWithAudienceLists:(id)arg1 selectedLists:(id)arg2;
+ (id)lowerCellDigestWithContactUsernames:(id)arg1 chatroomUsernames:(id)arg2 fileLists:(id)arg3;
+ (void)updateCellInfoSeperateLine:(id)arg1 needDisplay:(_Bool)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MMTableViewInfo *tableViewInfo; // @synthesize tableViewInfo=_tableViewInfo;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) long long closeAction; // @synthesize closeAction=_closeAction;
@property(copy, nonatomic) CDUnknownBlockType dismissCompletion; // @synthesize dismissCompletion=_dismissCompletion;
@property(nonatomic) __weak id <MMFinderLiveVisivilityShareSettingDelegate> settingDelegate; // @synthesize settingDelegate=_settingDelegate;
@property(nonatomic) __weak MMFinderLiveNewShareSettingSessionSelectController *shareSettingSessionSelectVC; // @synthesize shareSettingSessionSelectVC=_shareSettingSessionSelectVC;
@property(nonatomic) unsigned int openContactSelectViewScene; // @synthesize openContactSelectViewScene=_openContactSelectViewScene;
@property(nonatomic) __weak UIViewController *rootVC; // @synthesize rootVC=_rootVC;
@property(nonatomic) _Bool forceDarkMode; // @synthesize forceDarkMode=_forceDarkMode;
@property(nonatomic) _Bool isShown; // @synthesize isShown=_isShown;
@property(retain, nonatomic) MMFinderLiveVisivilitySettingInfo *settingInfo; // @synthesize settingInfo=_settingInfo;
@property(retain, nonatomic) MMFinderLiveShareSettingInitParams *settingInitParam; // @synthesize settingInitParam=_settingInitParam;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onWCFinderLiveRosterSelectFinishWithVisibilityIdList:(id)arg1 visibilityMode:(long long)arg2 liveMode:(long long)arg3;
- (void)onWCFinderLiveRosterSelectCancel;
- (double)heightForSessionSelectControllerChildPageSheet:(id)arg1 defaultHeight:(double)arg2;
- (void)onSessionSelectController:(id)arg1 prepareMultiSelectContactsViewController:(id)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSessions:(id)arg1 SessionSelectController:(id)arg2;
- (void)showRosterSelectViewController:(id)arg1;
- (void)dismissShareSettingSessionSelectVCAnimated:(_Bool)arg1;
- (void)selectContactsFromRecentSessions:(unsigned int)arg1 selectedContacts:(id)arg2;
- (void)dismissWithAnimated:(_Bool)arg1 action:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateSettingInfo:(id)arg1;
- (void)onCloseAction;
- (void)onConfirm;
- (void)pageSheetDidCloseWithType:(long long)arg1;
- (void)pageSheetDidAppear;
- (id)navTitle;
- (void)updateConfirmButtonEnabled;
- (double)getSettingTableHeight;
- (double)getContentHeight;
- (double)getNavHeaderHeight;
- (double)contentViewHeight;
- (void)reloadTableData;
- (void)layoutConfirmButton;
- (void)layoutSettingTableView;
- (void)layoutCloseButton;
- (void)layoutTitleLabel;
- (void)layoutContentView;
- (void)layoutUI;
- (void)initUI;
- (void)layoutSubviews;
- (void)initPageSheetConfig;
- (void)initSettingInfo:(id)arg1;
- (id)initWithSettingInfo:(id)arg1 initParam:(id)arg2 forceDarkMode:(_Bool)arg3 rootVC:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

