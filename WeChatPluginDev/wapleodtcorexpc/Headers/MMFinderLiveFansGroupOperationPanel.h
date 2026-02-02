//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveFansGroupCreateContentView, MMFinderLiveFansGroupManageContentView, MMFinderLiveTaskId, NSString, UIView;
@protocol MMFinderLiveFansGroupOperationReportDelegate;

@interface MMFinderLiveFansGroupOperationPanel
{
    _Bool _isKeyBoardShow;
    _Bool _isPageWillClose;
    id <MMFinderLiveFansGroupOperationReportDelegate> _reportDelegate;
    MMFinderLiveTaskId *_taskId;
    long long _currentOperateState;
    UIView *_panelView;
    MMFinderLiveFansGroupCreateContentView *_createContentView;
    MMFinderLiveFansGroupManageContentView *_manageContentView;
    double _keyBoardHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double keyBoardHeight; // @synthesize keyBoardHeight=_keyBoardHeight;
@property(nonatomic) _Bool isPageWillClose; // @synthesize isPageWillClose=_isPageWillClose;
@property(nonatomic) _Bool isKeyBoardShow; // @synthesize isKeyBoardShow=_isKeyBoardShow;
@property(retain, nonatomic) MMFinderLiveFansGroupManageContentView *manageContentView; // @synthesize manageContentView=_manageContentView;
@property(retain, nonatomic) MMFinderLiveFansGroupCreateContentView *createContentView; // @synthesize createContentView=_createContentView;
@property(retain, nonatomic) UIView *panelView; // @synthesize panelView=_panelView;
@property(nonatomic) long long currentOperateState; // @synthesize currentOperateState=_currentOperateState;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <MMFinderLiveFansGroupOperationReportDelegate> reportDelegate; // @synthesize reportDelegate=_reportDelegate;
- (void)navigateToEditPanelWithViewModel:(id)arg1;
- (void)onFansGroupNameChangedTo:(id)arg1 byEditPanel:(id)arg2;
- (void)updatePageSheetCloseRecognizer;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)showWithAnimated:(_Bool)arg1;
- (void)refreshUIForCurrentOperateState;
- (void)updateCurrentOperateState:(long long)arg1;
- (void)updateDetailViewFrame;
- (double)contentHeight;
- (double)contentWidth;
- (void)layoutManageContentView;
- (void)layoutCreateContentView;
- (void)layoutPanelView;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)liveTask;
- (void)pageSheetWillClose:(_Bool)arg1;
- (void)pageSheetWillAppear;
- (void)setupPageSheetConfig;
- (void)unResgisterExtension;
- (void)registerExtension;
- (void)initNotifications;
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

