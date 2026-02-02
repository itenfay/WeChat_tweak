//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveCreateNoticeReporter, MMFinderLiveNoticeListViewModel, MMFinderLiveNoticePromoteListPanel, MMFinderLivePromoteAddPanel, MMFinderLivePromoteDataModel, MMFinderLivePromoteListBasePanel, MMFinderLivePromoteLogic, MMFinderLivePromoteManagePanel, MMFinderLiveTask, MMFinderLiveTaskId, MMPageSheetAdapter, NSString, UIView, WCFinderCreateLiveViewModel, _TtC6WeChat35MMFinderLiveChooseFunctionViewModel;
@protocol MMFinderLivePromoteManagePanelDelegate, MMFinderLivePromoteManageReportDelegate;

@interface MMFinderLivePromoteManageLogic : NSObject
{
    _Bool _enablePushPromote;
    _Bool _isFetching;
    _Bool _needShow;
    _Bool _showNoticeListVCAfterNoticeCreation;
    MMFinderLiveCreateNoticeReporter *_createNoticeReporter;
    UIView *_showView;
    id <MMFinderLivePromoteManagePanelDelegate> _delegate;
    id <MMFinderLivePromoteManageReportDelegate> _reportDelegate;
    MMFinderLiveTaskId *_taskId;
    MMFinderLivePromoteLogic *_promoteDataLogic;
    MMFinderLivePromoteDataModel *_promoteDataModel;
    _TtC6WeChat35MMFinderLiveChooseFunctionViewModel *_functionViewModel;
    MMFinderLiveNoticePromoteListPanel *_noticePromoteListPanel;
    NSString *_descriptionPromptWording;
    WCFinderCreateLiveViewModel *_createLiveVm;
    MMFinderLivePromoteAddPanel *_promoteAddPanel;
    MMFinderLiveTask *_finderLiveTask;
    MMFinderLivePromoteListBasePanel *_promoteListPanel;
    MMPageSheetAdapter *_createNoticePageSheet;
    MMFinderLivePromoteManagePanel *_promoteManagePanel;
    MMFinderLiveNoticeListViewModel *_anchorNoticeListViewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveNoticeListViewModel *anchorNoticeListViewModel; // @synthesize anchorNoticeListViewModel=_anchorNoticeListViewModel;
@property(nonatomic) _Bool showNoticeListVCAfterNoticeCreation; // @synthesize showNoticeListVCAfterNoticeCreation=_showNoticeListVCAfterNoticeCreation;
@property(nonatomic) _Bool needShow; // @synthesize needShow=_needShow;
@property(nonatomic) _Bool isFetching; // @synthesize isFetching=_isFetching;
@property(nonatomic) _Bool enablePushPromote; // @synthesize enablePushPromote=_enablePushPromote;
@property(retain, nonatomic) MMFinderLivePromoteManagePanel *promoteManagePanel; // @synthesize promoteManagePanel=_promoteManagePanel;
@property(retain, nonatomic) MMPageSheetAdapter *createNoticePageSheet; // @synthesize createNoticePageSheet=_createNoticePageSheet;
@property(retain, nonatomic) MMFinderLivePromoteListBasePanel *promoteListPanel; // @synthesize promoteListPanel=_promoteListPanel;
@property(retain, nonatomic) MMFinderLiveTask *finderLiveTask; // @synthesize finderLiveTask=_finderLiveTask;
@property(retain, nonatomic) MMFinderLivePromoteAddPanel *promoteAddPanel; // @synthesize promoteAddPanel=_promoteAddPanel;
@property(retain, nonatomic) WCFinderCreateLiveViewModel *createLiveVm; // @synthesize createLiveVm=_createLiveVm;
@property(retain, nonatomic) NSString *descriptionPromptWording; // @synthesize descriptionPromptWording=_descriptionPromptWording;
@property(nonatomic) __weak MMFinderLiveNoticePromoteListPanel *noticePromoteListPanel; // @synthesize noticePromoteListPanel=_noticePromoteListPanel;
@property(retain, nonatomic) _TtC6WeChat35MMFinderLiveChooseFunctionViewModel *functionViewModel; // @synthesize functionViewModel=_functionViewModel;
@property(retain, nonatomic) MMFinderLivePromoteDataModel *promoteDataModel; // @synthesize promoteDataModel=_promoteDataModel;
@property(retain, nonatomic) MMFinderLivePromoteLogic *promoteDataLogic; // @synthesize promoteDataLogic=_promoteDataLogic;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <MMFinderLivePromoteManageReportDelegate> reportDelegate; // @synthesize reportDelegate=_reportDelegate;
@property(nonatomic) __weak id <MMFinderLivePromoteManagePanelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIView *showView; // @synthesize showView=_showView;
- (void)updateLivePromoteManagePanelReportDelegate:(id)arg1;
- (void)updateLivePromoteManagePanelDelegate:(id)arg1;
- (void)createPromoteManagePanel;
- (void)createPromoteAddPanel;
- (void)resetCreateNoticeReporter;
@property(readonly, nonatomic) MMFinderLiveCreateNoticeReporter *createNoticeReporter; // @synthesize createNoticeReporter=_createNoticeReporter;
- (id)promoteInfoItemsOfType:(unsigned int)arg1;
- (void)onFetchDataWithShowPanel:(_Bool)arg1 compleBlock:(CDUnknownBlockType)arg2;
- (void)deletePromoteItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addPromoteItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onUpdatePromoteManagePanel;
- (void)onUpdateWithType:(long long)arg1;
- (void)showChooseFunctionPushView;
- (void)hidePromoteManagePanel;
- (void)showLivePromoteAddPanel;
- (void)showLivePromoteAddIntroducePanel;
- (void)onFetchDataComplete;
- (void)showPromoteManagePanel;
- (void)onShowPanelWithType:(long long)arg1;
- (void)enterPromoteManagePanel;
- (void)onExitLive;
- (id)initWithTaskId:(id)arg1 delegate:(id)arg2;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (void)stopLoading;
- (void)startLoading;
- (void)addLivePaidCollection:(id)arg1;
- (void)pageSheetDidClose:(_Bool)arg1;
- (void)onChooseFunctionPromoteOperation:(long long)arg1 promoteId:(unsigned long long)arg2 type:(unsigned int)arg3 reportType:(long long)arg4 jumpInfo:(id)arg5;
- (void)addPanelOtherBussinessClick:(id)arg1;
- (void)addPanelMiniProgramBussinessClick:(id)arg1;
- (void)addPanelAppDownLoadBussinessClick:(id)arg1;
- (void)addPanelListenBussinessClick:(id)arg1;
- (void)onLivePromoteListOperation:(long long)arg1 item:(id)arg2;
- (void)addButtonClicked:(unsigned int)arg1;
- (void)onPromoteManageLogicAdd:(id)arg1;
- (void)addPanelAdBussinessClick:(id)arg1;
- (void)onLiveMemberShipZoneButtonClicked:(id)arg1;
- (void)showProgrammaListGuide:(id)arg1;
- (void)showPersonalColumnGuide:(id)arg1;
- (void)refreshRedPacketWhenOperationComplete;
- (void)redPacketAddPromoteWithPanel:(id)arg1 opType:(unsigned int)arg2 jumpinfoId:(id)arg3 redPacketInfo:(id)arg4;
- (_Bool)onRedPacketInfo:(id)arg1 opType:(unsigned int)arg2 fromEditPanel:(id)arg3;
- (void)gotoRedPacketEditPanel:(_Bool)arg1;
- (void)onPushPromoteListPanelWithType:(unsigned int)arg1;
- (void)onPanelRedPacketClick:(id)arg1;
- (void)onFunctionViewPromoteItemDelete:(id)arg1;
- (void)addWeComContact:(id)arg1;
- (_Bool)addArticleInfo:(id)arg1 fromEditPanel:(id)arg2;
- (void)gotoArticleEditPanel;
- (_Bool)checkHasValidLiveNoticeInfo;
- (id)createLiveNoticeButtonLabelOfViewController:(id)arg1;
- (void)viewController:(id)arg1 didFinishCreateLiveNoticeWithInfo:(id)arg2;
- (void)addLiveNoticeInfoToList:(id)arg1 triggerRefresh:(_Bool)arg2;
- (void)onLiveNoticeRevoked:(id)arg1 noticeCleared:(_Bool)arg2 byLiveNoticePromoteListPanel:(id)arg3;
- (void)onAddLiveNoticeToListRequested:(id)arg1 byLiveNoticePromoteListPanel:(id)arg2;
- (void)onCreateLiveNoticeRequestedByLiveNoticePromoteListPanel:(id)arg1;
- (void)presentNoticeListVC;
- (void)preinitNoticeListVMForAnchor;
- (void)navigateToNoticePromoteListPanel;
- (void)createPromotionalLiveNoticeDefaultingToUntimedNotice:(_Bool)arg1 reporter:(id)arg2;
- (void)navigateToLiveNoticeCreationDefaultingToUntimedNotice:(_Bool)arg1 showNoticeListVCAfterSucessfullyCreated:(_Bool)arg2 reporter:(id)arg3;
- (void)addLiveNoticeInfo:(id)arg1;
- (void)reportCreateNoticeAction:(unsigned long long)arg1 actionDict:(id)arg2;
- (void)directShowLiveNotice;
- (void)liveChooseFunctionDetailDidSelectWithIndexPath:(id)arg1 item:(id)arg2;
- (void)liveChooseFunctionCellDidSelectWithIndexPath:(id)arg1 item:(id)arg2 isActionButton:(_Bool)arg3;
- (id)getChooseFunctionNavigationController;
- (void)hideChooseFunctionPushView;
- (double)getWebPanelHeight;
- (double)contentHeight;
- (id)getChooseFunctionPushView;
- (void)reportPromoteDataModelClick:(unsigned int)arg1;
- (void)reportPromoteDataModelExpose;
- (void)showChooseFunctionPushView;
- (id)getAvailableItem:(int)arg1;
- (id)getAnchorContact;
- (void)onManagePanelFetchData:(CDUnknownBlockType)arg1;
- (void)onPromoteManagePanelContentAction:(id)arg1 dismissAction:(CDUnknownBlockType)arg2;
- (void)actionSheetDeleteHandle;
- (void)actionSheetPromoteItemDelete:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onManagePanelPromoteItemDelete:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

