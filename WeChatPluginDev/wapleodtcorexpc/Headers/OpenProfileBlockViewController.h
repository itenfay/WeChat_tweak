//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GetA8KeyLogic, MMLoadingView, NSString, OpenProfileData, OpenProfileLogicHelper;
@protocol OpenProfileBlockViewControllerDelegate;

@interface OpenProfileBlockViewController
{
    OpenProfileData *_infoData;
    OpenProfileLogicHelper *_logicHelper;
    MMLoadingView *_loadingView;
    id <OpenProfileBlockViewControllerDelegate> _delegate;
    GetA8KeyLogic *_a8KeyLogic;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <OpenProfileBlockViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onOpenProfile:(int)arg1 WithErrMsg:(id)arg2 WithContact:(id)arg3 Ticket:(id)arg4;
- (void)onReturn;
- (void)showFailViewWithErrMsg:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithInfoData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

