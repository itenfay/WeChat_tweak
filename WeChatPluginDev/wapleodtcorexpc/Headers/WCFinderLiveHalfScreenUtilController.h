//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, NSString, RichTextView, UIButton, UIView;
@protocol WCFinderLiveHalfScreenUtilControllerDelegate;

@interface WCFinderLiveHalfScreenUtilController
{
    _Bool _isShown;
    _Bool _isAgreementChecked;
    _Bool _isPolicy;
    id <WCFinderLiveHalfScreenUtilControllerDelegate> _verifyDelegate;
    MMUIButton *_arrowButton;
    MMUILabel *_infoTitle;
    RichTextView *_infoDesc;
    UIView *_checkBoxView;
    MMUIButton *_agreementCheckbox;
    RichTextView *_agreementText;
    UIButton *_confirmButton;
    long long _entryScene;
    NSString *_cliMsgId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPolicy; // @synthesize isPolicy=_isPolicy;
@property(nonatomic) _Bool isAgreementChecked; // @synthesize isAgreementChecked=_isAgreementChecked;
@property(retain, nonatomic) NSString *cliMsgId; // @synthesize cliMsgId=_cliMsgId;
@property(nonatomic) long long entryScene; // @synthesize entryScene=_entryScene;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) RichTextView *agreementText; // @synthesize agreementText=_agreementText;
@property(retain, nonatomic) MMUIButton *agreementCheckbox; // @synthesize agreementCheckbox=_agreementCheckbox;
@property(retain, nonatomic) UIView *checkBoxView; // @synthesize checkBoxView=_checkBoxView;
@property(retain, nonatomic) RichTextView *infoDesc; // @synthesize infoDesc=_infoDesc;
@property(retain, nonatomic) MMUILabel *infoTitle; // @synthesize infoTitle=_infoTitle;
@property(retain, nonatomic) MMUIButton *arrowButton; // @synthesize arrowButton=_arrowButton;
@property(nonatomic) _Bool isShown; // @synthesize isShown=_isShown;
@property(nonatomic) __weak id <WCFinderLiveHalfScreenUtilControllerDelegate> verifyDelegate; // @synthesize verifyDelegate=_verifyDelegate;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (_Bool)shouldAgreementCheckBoxShown;
- (void)notifySelfPopedOrDismissed;
- (void)popOrDismissSelfWithCompletion:(CDUnknownBlockType)arg1;
- (void)popOrDismissSelf;
- (void)onArrowButtonClicked;
- (void)onConfirmButtonClicked;
- (void)onCheckBoxClicked;
- (void)updateAccessbility;
- (void)addShakeOnCheckBoxView;
- (void)layoutCheckBoxView;
- (void)layoutUI;
- (void)setupUI;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithEntryScene:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

