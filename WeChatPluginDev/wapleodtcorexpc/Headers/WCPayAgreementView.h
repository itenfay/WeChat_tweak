//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, RichTextView, UIButton;

@interface WCPayAgreementView : UIView
{
    RichTextView *_textView;
    CDUnknownBlockType _onLinckClickedBlock;
    UIButton *_checkbox;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *checkbox; // @synthesize checkbox=_checkbox;
@property(copy, nonatomic) CDUnknownBlockType onLinckClickedBlock; // @synthesize onLinckClickedBlock=_onLinckClickedBlock;
@property(retain, nonatomic) RichTextView *textView; // @synthesize textView=_textView;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)shake;
@property(nonatomic) _Bool checked;
- (void)onClickCheckbox;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setTextMaxWidth:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithCheckboxSize:(double)arg1 checkedColor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

