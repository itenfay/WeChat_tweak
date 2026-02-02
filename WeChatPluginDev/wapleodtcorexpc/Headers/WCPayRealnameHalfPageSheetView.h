//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, RealnameHalfPageDialog, RichTextView, UIImageView, UILabel, UIView;

@interface WCPayRealnameHalfPageSheetView
{
    CDUnknownBlockType _cancelCallback;
    CDUnknownBlockType _confirmCallback;
    UIView *_contentView;
    UIImageView *_logoView;
    UILabel *_titleView;
    RichTextView *_descView;
    RealnameHalfPageDialog *_data;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RealnameHalfPageDialog *data; // @synthesize data=_data;
@property(retain, nonatomic) RichTextView *descView; // @synthesize descView=_descView;
@property(retain, nonatomic) UILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIImageView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) CDUnknownBlockType confirmCallback; // @synthesize confirmCallback=_confirmCallback;
@property(copy, nonatomic) CDUnknownBlockType cancelCallback; // @synthesize cancelCallback=_cancelCallback;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (double)bottomViewBottomMargin;
- (double)bottomViewTopMargin;
- (id)titleForPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (void)setupSubviews;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

