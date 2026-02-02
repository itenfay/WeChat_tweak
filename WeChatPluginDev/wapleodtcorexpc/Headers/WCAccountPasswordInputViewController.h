//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, WCRedesignTextItem;
@protocol WCAccountPasswordInputViewControllerDelegate;

@interface WCAccountPasswordInputViewController
{
    id <WCAccountPasswordInputViewControllerDelegate> _delegate;
    WCRedesignTextItem *_passwordTextItem;
    UIButton *_nextButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) WCRedesignTextItem *passwordTextItem; // @synthesize passwordTextItem=_passwordTextItem;
@property(nonatomic) __weak id <WCAccountPasswordInputViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)onLogin;
- (void)checkNextBtnEnable;
- (void)initView;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)useRedesignStyle;
- (_Bool)useSheetView;
- (_Bool)autoHandleKeyboardEvent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

