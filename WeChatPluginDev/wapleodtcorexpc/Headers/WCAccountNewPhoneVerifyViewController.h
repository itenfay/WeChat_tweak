//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, NSString, UIButton, WCAccountNewPhoneVerifyPageView, WCRedesignButtonItem;
@protocol WCAccountNewPhoneVerifyViewControllerDelegate;

@interface WCAccountNewPhoneVerifyViewController
{
    long long _iCount;
    id <WCAccountNewPhoneVerifyViewControllerDelegate> _delegate;
    unsigned long long _page;
    MMUILabel *_titleLabel;
    WCRedesignButtonItem *_phoneNumberButtonItem;
    WCAccountNewPhoneVerifyPageView *_pageView;
    MMUIButton *_changePageButton;
    UIButton *_nextButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) MMUIButton *changePageButton; // @synthesize changePageButton=_changePageButton;
@property(retain, nonatomic) WCAccountNewPhoneVerifyPageView *pageView; // @synthesize pageView=_pageView;
@property(retain, nonatomic) WCRedesignButtonItem *phoneNumberButtonItem; // @synthesize phoneNumberButtonItem=_phoneNumberButtonItem;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) unsigned long long page; // @synthesize page=_page;
@property(nonatomic) __weak id <WCAccountNewPhoneVerifyViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long iCount; // @synthesize iCount=_iCount;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)onResendClicked;
- (void)startTimer;
- (id)checkNext;
- (void)userDidClickMore;
- (void)userDidClickBack;
- (void)switchToVerifyLogin;
- (void)switchToPwdLogin;
- (void)onSwitch;
- (void)onNext;
- (id)titleForChangePageButton;
- (void)initView;
- (void)initNavigationBar;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setupWithData:(id)arg1;
- (_Bool)useRedesignStyle;
- (_Bool)useSheetView;
- (_Bool)autoHandleKeyboardEvent;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

