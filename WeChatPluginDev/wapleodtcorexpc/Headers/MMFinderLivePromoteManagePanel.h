//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLivePromoteLogic, MMFinderLivePromoteTableViewModel, MMFinderLiveTask, MMFinderLiveTaskId, MMTableView, MMUIActivityIndicatorView, MMUILabel, NSString, UIView, WCFinderCreateLiveViewModel;
@protocol MMFinderLivePromoteManagePanelDelegate, MMFinderLivePromoteManageReportDelegate;

@interface MMFinderLivePromoteManagePanel
{
    _Bool _loading;
    id <MMFinderLivePromoteManagePanelDelegate> _delegate;
    id <MMFinderLivePromoteManageReportDelegate> _reportDelegate;
    CDUnknownBlockType _showLivePromoteAddPanelBlock;
    MMFinderLiveTaskId *_taskId;
    long long _currentState;
    UIView *_contentView;
    MMUIActivityIndicatorView *_activityIndicatorView;
    MMUILabel *_addPromoteDescriptionLabel;
    MMTableView *_promoteTableView;
    MMFinderLivePromoteTableViewModel *_promoteTableViewModel;
    MMFinderLivePromoteLogic *_promoteDataLogic;
    NSString *_descriptionPromptWording;
    WCFinderCreateLiveViewModel *_createLiveVm;
    CDUnknownBlockType _closeCompletion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType closeCompletion; // @synthesize closeCompletion=_closeCompletion;
@property(retain, nonatomic) WCFinderCreateLiveViewModel *createLiveVm; // @synthesize createLiveVm=_createLiveVm;
@property(retain, nonatomic) NSString *descriptionPromptWording; // @synthesize descriptionPromptWording=_descriptionPromptWording;
@property(retain, nonatomic) MMFinderLivePromoteLogic *promoteDataLogic; // @synthesize promoteDataLogic=_promoteDataLogic;
@property(retain, nonatomic) MMFinderLivePromoteTableViewModel *promoteTableViewModel; // @synthesize promoteTableViewModel=_promoteTableViewModel;
@property(retain, nonatomic) MMTableView *promoteTableView; // @synthesize promoteTableView=_promoteTableView;
@property(retain, nonatomic) MMUILabel *addPromoteDescriptionLabel; // @synthesize addPromoteDescriptionLabel=_addPromoteDescriptionLabel;
@property(retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(copy, nonatomic) CDUnknownBlockType showLivePromoteAddPanelBlock; // @synthesize showLivePromoteAddPanelBlock=_showLivePromoteAddPanelBlock;
@property(nonatomic) __weak id <MMFinderLivePromoteManageReportDelegate> reportDelegate; // @synthesize reportDelegate=_reportDelegate;
@property(nonatomic) __weak id <MMFinderLivePromoteManagePanelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reportForPromoteItem:(id)arg1 isSent:(_Bool)arg2;
- (void)onPromoteItemClickReport:(id)arg1;
- (void)onPromoteItemExposeReport:(id)arg1;
- (void)onLivePromoteOperatonReportWithItem:(id)arg1 actionResult:(long long)arg2;
- (void)onLiveStaterPromoteOperatonReportWithItem:(id)arg1 actionResult:(long long)arg2;
- (_Bool)isPromoting;
- (void)setEnablePushPromote:(_Bool)arg1;
- (void)cancelPromoteItem:(id)arg1;
- (void)sendPromoteItem:(id)arg1 onConfirm:(CDUnknownBlockType)arg2;
- (void)updateFetchDataWithErrorCode:(long long)arg1 promoteInfoList:(id)arg2 promoteAvailableItemList:(id)arg3;
- (void)onPromoteItemContentAction:(id)arg1;
- (void)onPromoteItemContentDisplay:(id)arg1;
- (void)onPromoteItemCancel:(id)arg1;
- (void)onPromoteItemSend:(id)arg1 onConfirm:(CDUnknownBlockType)arg2;
- (void)onPromoteItemDelete:(id)arg1;
@property(readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
- (void)leftButtonAction;
- (void)layoutPromoteTableView;
- (void)layoutUIForHasDataState;
- (void)layoutAddPromoteDescriptionLabel;
- (void)layoutUIForNoDataState;
- (double)contentHeight;
- (double)contentWidth;
- (void)layoutContentView;
- (void)layoutUI;
- (void)showLivePromoteAddPanel;
- (id)getCurrentRightButton;
- (id)getCurrentLeftButton;
- (void)updateNavBarUI;
- (void)layoutSubviews;
- (void)pageSheetDidClose:(_Bool)arg1;
- (void)dismissWithAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)showWithAnimated:(_Bool)arg1;
- (void)layoutActivityIndicatorView;
- (void)stopLoading;
- (void)startLoading;
- (void)setupPageSheetConfig;
- (void)unResgisterExtension;
- (void)registerExtension;
- (void)dealloc;
- (void)innerInit;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

