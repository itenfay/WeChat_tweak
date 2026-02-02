//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString, TenpayEditableBankNum, UIImage, UIImageView;
@protocol WCPayFillCardNumberViewControllerDelegate;

@interface WCPayCardNumberConfirmViewController
{
    _Bool _didRenderViews;
    NSString *_origin3DESText;
    id <WCPayFillCardNumberViewControllerDelegate> _delegate;
    NSString *_encryptedCardNumStr;
    UIImage *_cardImage;
    MMUILabel *_label;
    TenpayEditableBankNum *_editBankNumView;
    UIImageView *_cardImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *cardImageView; // @synthesize cardImageView=_cardImageView;
@property(retain, nonatomic) TenpayEditableBankNum *editBankNumView; // @synthesize editBankNumView=_editBankNumView;
@property(retain, nonatomic) MMUILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImage *cardImage; // @synthesize cardImage=_cardImage;
@property(copy, nonatomic) NSString *encryptedCardNumStr; // @synthesize encryptedCardNumStr=_encryptedCardNumStr;
@property(nonatomic) __weak id <WCPayFillCardNumberViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)nextAction:(id)arg1;
- (void)OnGetTenpaySecureCtrlSalt:(id)arg1 Date:(id)arg2 Error:(id)arg3;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (id)getContainerView;
- (void)setupViewsIfNeed;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

