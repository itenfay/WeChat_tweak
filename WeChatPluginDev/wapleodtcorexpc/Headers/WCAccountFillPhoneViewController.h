//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, WCFullPhoneNumInputHelper;
@protocol WCAccountFillPhoneViewControllerDelegate;

@interface WCAccountFillPhoneViewController
{
    NSString *_restrictiveISOContryCode;
    id <WCAccountFillPhoneViewControllerDelegate> _delegate;
    NSString *_headerTip;
    WCFullPhoneNumInputHelper *_fullPhoneNumInputHelper;
    UIButton *_nextButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) WCFullPhoneNumInputHelper *fullPhoneNumInputHelper; // @synthesize fullPhoneNumInputHelper=_fullPhoneNumInputHelper;
@property(retain, nonatomic) NSString *headerTip; // @synthesize headerTip=_headerTip;
@property(nonatomic) __weak id <WCAccountFillPhoneViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *restrictiveISOContryCode; // @synthesize restrictiveISOContryCode=_restrictiveISOContryCode;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)onNext;
- (void)onFillPhoneBack;
- (void)checkNextBtnEnable;
- (void)initView;
- (_Bool)autoHandleKeyboardEvent;
- (_Bool)useRedesignStyle;
- (_Bool)useSheetView;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)isForbidPageSheet;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

