//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIViewController, NSString, UIScreenEdgePanGestureRecognizer, WAMenuPopInteractiveTransition, WAPlateAuthorizePageSheet, WAPlateAuthorizeSheetInfo, WAPlateManageViewController, WAReportPlateManageActionItem;

@interface WAJSContextPlugin_PlateManager
{
    _Bool _pageSheetDidShow;
    _Bool _managerVCDidShow;
    NSString *_appid;
    MMUIViewController *_rootVC;
    CDUnknownBlockType _completion;
    WAPlateAuthorizePageSheet *_platePageSheet;
    WAPlateManageViewController *_plateManageVC;
    WAReportPlateManageActionItem *_reportAction;
    unsigned long long _selectedIdx;
    WAPlateAuthorizeSheetInfo *_sheetInfo;
    WAMenuPopInteractiveTransition *_interactiveTransition;
    UIScreenEdgePanGestureRecognizer *_popBackGesture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *popBackGesture; // @synthesize popBackGesture=_popBackGesture;
@property(retain, nonatomic) WAMenuPopInteractiveTransition *interactiveTransition; // @synthesize interactiveTransition=_interactiveTransition;
@property(nonatomic) _Bool managerVCDidShow; // @synthesize managerVCDidShow=_managerVCDidShow;
@property(nonatomic) _Bool pageSheetDidShow; // @synthesize pageSheetDidShow=_pageSheetDidShow;
@property(retain, nonatomic) WAPlateAuthorizeSheetInfo *sheetInfo; // @synthesize sheetInfo=_sheetInfo;
@property(nonatomic) unsigned long long selectedIdx; // @synthesize selectedIdx=_selectedIdx;
@property(retain, nonatomic) WAReportPlateManageActionItem *reportAction; // @synthesize reportAction=_reportAction;
@property(retain, nonatomic) WAPlateManageViewController *plateManageVC; // @synthesize plateManageVC=_plateManageVC;
@property(retain, nonatomic) WAPlateAuthorizePageSheet *platePageSheet; // @synthesize platePageSheet=_platePageSheet;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) __weak MMUIViewController *rootVC; // @synthesize rootVC=_rootVC;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
- (id)parseErrCode:(int)arg1 ErrMsg:(id)arg2;
- (void)showToastWithText:(id)arg1;
- (void)removeInteractivePop;
- (void)recoverInteractivePop;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)_pushNewPageViewController:(id)arg1;
- (void)authorizeManagePlate:(id)arg1;
- (void)pageSheet:(id)arg1 needToPushViewController:(id)arg2;
- (void)authorizeReject:(id)arg1;
- (void)authorizeAccept:(id)arg1;
- (void)onWAPlateManageViewControllerGetErrCode:(int)arg1 errorMsg:(id)arg2;
- (void)onWAPlateManageViewControllerDismiss:(id)arg1;
- (void)showManageVC;
- (void)endWithErrorCode:(int)arg1 msg:(id)arg2;
- (void)endWithSuccessResult:(id)arg1;
- (void)showPageSheet;
- (void)handleReportUserPlateInfo:(id)arg1;
- (void)handleGetUserPlateInfo:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)issueReportRequest;
- (void)issueGetPlateRequestWithScene:(int)arg1;
- (_Bool)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (void)getPlateWithCompelteion:(CDUnknownBlockType)arg1;
- (void)destroyPlateManageVC;
- (void)destroyPlatePageSheet;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

