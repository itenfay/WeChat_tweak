//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSString, RichTextView, UIButton, UIImageView, UIView;
@protocol WCFinderCommonEduTipsActionSheetDelegate;

@interface WCFinderCommonEduTipsActionSheet
{
    id <WCFinderCommonEduTipsActionSheetDelegate> _businessDelegate;
    MMUIButton *_acceptBtn;
    UIView *_tipsView;
    UIButton *_closeBtn;
    UIImageView *_iconView;
    RichTextView *_titleTextView;
    RichTextView *_descTextView;
    MMUIButton *_agreementCheckbox;
    RichTextView *_ruleTextView;
    MMUIButton *_cancelBtn;
    MMUIButton *_trailBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *trailBtn; // @synthesize trailBtn=_trailBtn;
@property(retain, nonatomic) MMUIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) RichTextView *ruleTextView; // @synthesize ruleTextView=_ruleTextView;
@property(retain, nonatomic) MMUIButton *agreementCheckbox; // @synthesize agreementCheckbox=_agreementCheckbox;
@property(retain, nonatomic) RichTextView *descTextView; // @synthesize descTextView=_descTextView;
@property(retain, nonatomic) RichTextView *titleTextView; // @synthesize titleTextView=_titleTextView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) MMUIButton *acceptBtn; // @synthesize acceptBtn=_acceptBtn;
@property(nonatomic) __weak id <WCFinderCommonEduTipsActionSheetDelegate> businessDelegate; // @synthesize businessDelegate=_businessDelegate;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onClickTrailBtn;
- (void)onClickCloseBtn;
- (void)onClickAcceptBtn;
- (void)onClickCancelBtn;
- (void)bindCancelButton:(id)arg1;
- (void)bindContainerView:(id)arg1;
- (void)bindAcceptButton:(id)arg1;
- (id)getEduTipsActionSheetConfig;
- (void)onCheckBoxClicked:(id)arg1;
- (id)getTipsActionSheetView;
- (double)getCustomView:(double)arg1;
- (double)heightOfWholeSheet;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

