//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSString, RichTextView, UIView;
@protocol WCFinderTitleDescButtonActionSheetDelegate;

@interface WCFinderTitleDescButtonActionSheet
{
    id <WCFinderTitleDescButtonActionSheetDelegate> _businessDelegate;
    UIView *_tipsView;
    RichTextView *_titleTextView;
    RichTextView *_ruleTextView;
    MMUIButton *_acceptBtn;
    MMUIButton *_cancelBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) MMUIButton *acceptBtn; // @synthesize acceptBtn=_acceptBtn;
@property(retain, nonatomic) RichTextView *ruleTextView; // @synthesize ruleTextView=_ruleTextView;
@property(retain, nonatomic) RichTextView *titleTextView; // @synthesize titleTextView=_titleTextView;
@property(retain, nonatomic) UIView *tipsView; // @synthesize tipsView=_tipsView;
@property(nonatomic) __weak id <WCFinderTitleDescButtonActionSheetDelegate> businessDelegate; // @synthesize businessDelegate=_businessDelegate;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onClickCancelBtn;
- (void)onClickAcceptBtn;
- (id)getTipsActionSheetView;
- (id)getTitleDescButtonActionSheetConfig;
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

