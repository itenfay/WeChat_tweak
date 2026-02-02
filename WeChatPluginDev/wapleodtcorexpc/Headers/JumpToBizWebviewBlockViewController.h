//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JumpToBizWebviewData, JumpToBizWebviewLogicHelper, MMLoadingView, NSString;
@protocol JumpToBizWebviewBlockViewControllerDelegate;

@interface JumpToBizWebviewBlockViewController
{
    JumpToBizWebviewData *_infoData;
    JumpToBizWebviewLogicHelper *_logicHelper;
    MMLoadingView *_loadingView;
    id <JumpToBizWebviewBlockViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <JumpToBizWebviewBlockViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onJumpToBizWebview:(int)arg1 WithErrMsg:(id)arg2 WithUrl:(id)arg3;
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

