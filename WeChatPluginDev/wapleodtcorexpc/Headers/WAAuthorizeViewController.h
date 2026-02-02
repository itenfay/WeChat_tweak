//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WAAuthPageSheetViewModel, WAAuthorizeResultInfo, WAAuthorizeSheetInfo;
@protocol WAAuthorizeViewControllerDelegate;

@interface WAAuthorizeViewController
{
    id <WAAuthorizeViewControllerDelegate> _authDelegate;
    WAAuthorizeSheetInfo *_info;
    WAAuthorizeResultInfo *_resultInfo;
    CDUnknownBlockType _acceptAction;
    CDUnknownBlockType _rejectAction;
    CDUnknownBlockType _cancelAction;
    long long _spaceCellTagOffset;
    WAAuthPageSheetViewModel *_psViewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAAuthPageSheetViewModel *psViewModel; // @synthesize psViewModel=_psViewModel;
@property(nonatomic) long long spaceCellTagOffset; // @synthesize spaceCellTagOffset=_spaceCellTagOffset;
@property(copy, nonatomic) CDUnknownBlockType cancelAction; // @synthesize cancelAction=_cancelAction;
@property(copy, nonatomic) CDUnknownBlockType rejectAction; // @synthesize rejectAction=_rejectAction;
@property(copy, nonatomic) CDUnknownBlockType acceptAction; // @synthesize acceptAction=_acceptAction;
@property(readonly, nonatomic) WAAuthorizeResultInfo *resultInfo; // @synthesize resultInfo=_resultInfo;
@property(retain, nonatomic) WAAuthorizeSheetInfo *info; // @synthesize info=_info;
@property(nonatomic) __weak id <WAAuthorizeViewControllerDelegate> authDelegate; // @synthesize authDelegate=_authDelegate;
- (void)pushVC:(id)arg1;
- (void)openUrl:(id)arg1;
- (double)operateButtonBottomInset;
- (void)_onRejectButtonClick;
- (void)onRejectButtonClick;
- (void)onAcceptButtonClick;
- (void)onInfoButtonClick;
- (void)onCancelButtonClicked;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (id)subViewModel;
- (id)customSubviewClassList;
- (id)subviewClassList;
- (double)contentHeight;
- (void)reloadData;
- (id)navigationBarBackgroundColor;
- (_Bool)shouldInteractivePop;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;
- (id)initWithInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

