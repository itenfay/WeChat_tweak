//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, RichTextView, UILabel;

@interface MainFrameHideSessionGuideView
{
    UILabel *_titleLabel;
    RichTextView *_descTextView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *descTextView; // @synthesize descTextView=_descTextView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (double)bottomViewBottomMargin;
- (double)bottomViewTopMargin;
- (void)onClickPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

