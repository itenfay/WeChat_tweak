//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLivePartialVisivilitySettingInfo, MMFinderLivePartialVisivilityShareSettingView, MMFinderLivePaymentVisivilitySettingInfo, MMFinderLivePaymentVisivilityShareSettingView, MMFinderLiveShareSettingInitParams, MMFinderLiveTestLivePartialVisivilitySettingInfo, MMFinderLiveTestLivePartialVisivilityShareSettingView, MMTableViewInfo, NSArray, NSMutableArray, NSString;
@protocol MMFinderLiveNewShareSettingViewControllerDelegate;

@interface MMFinderLiveNewShareSettingViewController
{
    _Bool _forceDarkMode;
    _Bool _isVisibilityDoneButtonEnable;
    _Bool _bindNotice;
    int _currentLiveMode;
    id <MMFinderLiveNewShareSettingViewControllerDelegate> _actionDelegate;
    MMTableViewInfo *_tableViewInfo;
    MMFinderLiveShareSettingInitParams *_shareSettingParams;
    unsigned long long _currentSelectMode;
    long long _currentVisibilityMode;
    unsigned long long _liveStartMode;
    MMFinderLivePaymentVisivilitySettingInfo *_paymentSettingInfo;
    MMFinderLivePaymentVisivilityShareSettingView *_paymentVisivilitySettingView;
    MMFinderLivePartialVisivilitySettingInfo *_partialSettingInfo;
    MMFinderLivePartialVisivilityShareSettingView *_partialVisivilitySettingView;
    MMFinderLiveTestLivePartialVisivilitySettingInfo *_testLiveSettingInfo;
    MMFinderLiveTestLivePartialVisivilityShareSettingView *_testLiveVisivilitySettingView;
    NSMutableArray *_selectedVisibleFileLists;
    unsigned long long _entrySource;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long entrySource; // @synthesize entrySource=_entrySource;
@property(retain, nonatomic) NSMutableArray *selectedVisibleFileLists; // @synthesize selectedVisibleFileLists=_selectedVisibleFileLists;
@property(retain, nonatomic) MMFinderLiveTestLivePartialVisivilityShareSettingView *testLiveVisivilitySettingView; // @synthesize testLiveVisivilitySettingView=_testLiveVisivilitySettingView;
@property(retain, nonatomic) MMFinderLiveTestLivePartialVisivilitySettingInfo *testLiveSettingInfo; // @synthesize testLiveSettingInfo=_testLiveSettingInfo;
@property(retain, nonatomic) MMFinderLivePartialVisivilityShareSettingView *partialVisivilitySettingView; // @synthesize partialVisivilitySettingView=_partialVisivilitySettingView;
@property(retain, nonatomic) MMFinderLivePartialVisivilitySettingInfo *partialSettingInfo; // @synthesize partialSettingInfo=_partialSettingInfo;
@property(retain, nonatomic) MMFinderLivePaymentVisivilityShareSettingView *paymentVisivilitySettingView; // @synthesize paymentVisivilitySettingView=_paymentVisivilitySettingView;
@property(retain, nonatomic) MMFinderLivePaymentVisivilitySettingInfo *paymentSettingInfo; // @synthesize paymentSettingInfo=_paymentSettingInfo;
@property(nonatomic) unsigned long long liveStartMode; // @synthesize liveStartMode=_liveStartMode;
@property(nonatomic) int currentLiveMode; // @synthesize currentLiveMode=_currentLiveMode;
@property(nonatomic) long long currentVisibilityMode; // @synthesize currentVisibilityMode=_currentVisibilityMode;
@property(nonatomic) unsigned long long currentSelectMode; // @synthesize currentSelectMode=_currentSelectMode;
@property(nonatomic) _Bool bindNotice; // @synthesize bindNotice=_bindNotice;
@property(readonly, nonatomic) _Bool isVisibilityDoneButtonEnable; // @synthesize isVisibilityDoneButtonEnable=_isVisibilityDoneButtonEnable;
@property(retain, nonatomic) MMFinderLiveShareSettingInitParams *shareSettingParams; // @synthesize shareSettingParams=_shareSettingParams;
@property(retain, nonatomic) MMTableViewInfo *tableViewInfo; // @synthesize tableViewInfo=_tableViewInfo;
@property(nonatomic) _Bool forceDarkMode; // @synthesize forceDarkMode=_forceDarkMode;
@property(nonatomic) __weak id <MMFinderLiveNewShareSettingViewControllerDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)recoverTestLiveSetting;
- (void)recoverPartialLiveSetting;
- (void)recoverPaidLiveSetting;
- (_Bool)isSuperfanEnabled;
- (_Bool)isMemberLiveEnabled;
- (_Bool)shouldDisplayMemberAndSuperfanVisibility;
- (_Bool)shouldEnablePaidLive;
- (void)updateCurrentSelectMode:(unsigned long long)arg1;
- (void)onMMFinderLivePaymentPolicyIntroViewConfirmButtonClicked:(id)arg1;
- (void)onShareSettingViewCanceled:(id)arg1;
- (void)onShareSettingViewConfirmed:(id)arg1;
- (void)clearLastVisivilitySettingIfNeeded;
- (void)showTestLiveVisiviltyShareSettingView;
- (void)showPartialVisiviltyShareSettingView;
- (void)showPaymentVisiviltyShareSettingView;
- (void)onTestLiveVisibilityModeCellSelect;
- (void)onPaidVisibilityModeCellSelect;
- (void)onLiveMemberVisibilityModeCellSelect;
- (void)onPartialVisibilityModeCellSelect;
- (void)onPublicVisibilityModeCellSelect;
- (void)onTapDone;
- (void)onTapCancel;
- (id)getRightViewByCurrentLiveVisibilityMode;
- (struct CGSize)getDescriptionCellDescSize:(id)arg1;
- (double)getDescriptionCellHeightWithTitle:(id)arg1 desc:(id)arg2;
- (double)getTwoLineLayoutCellHeight;
- (double)getSingleLineLayoutCellHeight;
- (void)makeDescriptionCell:(id)arg1 cellInfo:(id)arg2 title:(id)arg3 desc:(id)arg4 descColor:(id)arg5;
- (void)makeTestLiveVisibilityDescriptionCell:(id)arg1 cellInfo:(id)arg2;
- (void)makePaidVisibilityDescriptionCell:(id)arg1 cellInfo:(id)arg2;
- (void)makePartialVisibilityDescriptionCell:(id)arg1 cellInfo:(id)arg2;
- (void)updateCellInfoSeperateLine:(id)arg1 needDisplay:(_Bool)arg2 leftInset:(double)arg3;
- (void)makeVisibilityCell:(id)arg1 cellInfo:(id)arg2 title:(id)arg3 desc:(id)arg4 select:(_Bool)arg5;
- (void)makeVisibilityCell:(id)arg1 cellInfo:(id)arg2 title:(id)arg3 select:(_Bool)arg4;
- (void)makeTestLiveVisibilityCell:(id)arg1 cellInfo:(id)arg2;
- (void)makePaidVisibilityCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeLiveMemberVisibilityCell:(id)arg1 cellInfo:(id)arg2;
- (void)makePartialVisibilityCell:(id)arg1 cellInfo:(id)arg2;
- (void)makePublicVisibilityCell:(id)arg1 cellInfo:(id)arg2;
- (void)reloadTableData;
- (void)updateAllVisibilityFileList:(id)arg1;
- (void)updateVisibleFileLists;
@property(readonly, nonatomic) NSMutableArray *chooseContactUsernameList;
@property(readonly, nonatomic) NSMutableArray *chooseContactChatroomList;
@property(readonly, nonatomic) NSArray *originalChoosedContactList;
- (id)getColorProxy;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)overrideUserInterfaceStyle;
- (long long)preferredStatusBarStyle;
- (_Bool)navigationBarBlurEffect;
- (id)navigationBarBackgroundColor;
- (id)initWithShareSettingParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

