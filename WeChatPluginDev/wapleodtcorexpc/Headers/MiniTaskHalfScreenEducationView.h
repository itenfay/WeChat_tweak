//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString, UIView;

@interface MiniTaskHalfScreenEducationView
{
    UIView *_contentView;
    MMUILabel *_textLabel;
    MMUILabel *_descContentLable;
    CDUnknownBlockType _confirmBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType confirmBlock; // @synthesize confirmBlock=_confirmBlock;
@property(retain, nonatomic) MMUILabel *descContentLable; // @synthesize descContentLable=_descContentLable;
@property(retain, nonatomic) MMUILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (double)bottomViewBottomMargin;
- (double)pageSheetContentWidth;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (void)layoutSubviews;
- (void)initDescContentView;
- (void)initTextLabel;
- (void)initSubviews;
- (id)initWithConfirmBlcok:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

