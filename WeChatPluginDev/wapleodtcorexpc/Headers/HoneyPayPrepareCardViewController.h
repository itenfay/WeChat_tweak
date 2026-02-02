//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class HoneyPayPrepareCardView, NSString, RichTextView, UIButton, UITextField, WCPayNavigationBarBottomBanner, WCPayNoticeItemView;
@protocol HoneyPayPrepareCardViewControllerDelegate;

@interface HoneyPayPrepareCardViewController
{
    id <HoneyPayPrepareCardViewControllerDelegate> _delegate;
    UIButton *_confirmButton;
    NSString *_amount;
    RichTextView *_inputWishing;
    WCPayNavigationBarBottomBanner *_alertBanner;
    HoneyPayPrepareCardView *_prepareCardView;
    UITextField *_textFiled;
    WCPayNoticeItemView *_noticeItemView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayNoticeItemView *noticeItemView; // @synthesize noticeItemView=_noticeItemView;
@property(retain, nonatomic) UITextField *textFiled; // @synthesize textFiled=_textFiled;
@property(retain, nonatomic) HoneyPayPrepareCardView *prepareCardView; // @synthesize prepareCardView=_prepareCardView;
@property(retain, nonatomic) WCPayNavigationBarBottomBanner *alertBanner; // @synthesize alertBanner=_alertBanner;
@property(retain, nonatomic) RichTextView *inputWishing; // @synthesize inputWishing=_inputWishing;
@property(copy, nonatomic) NSString *amount; // @synthesize amount=_amount;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(nonatomic) __weak id <HoneyPayPrepareCardViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)navigationBarBackgroundColor;
- (double)max;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)honeyPayPrepareCardView:(id)arg1 didchangeAmount:(id)arg2;
- (void)honeyPaykeyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)done;
- (void)checkAmount;
- (id)createStatusHeaderView;
- (void)relaodTableView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

