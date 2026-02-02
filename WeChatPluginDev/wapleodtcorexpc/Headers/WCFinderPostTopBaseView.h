//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSString, RichTextView, UIImageView;

@interface WCFinderPostTopBaseView
{
    NSString *_reportEId;
    UIImageView *_iconImageView;
    RichTextView *_richTextView;
    MMUIButton *_sureBtn;
    MMUIButton *_closeBtn;
    CDUnknownBlockType _sureBlock;
    CDUnknownBlockType _closeBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(copy, nonatomic) CDUnknownBlockType sureBlock; // @synthesize sureBlock=_sureBlock;
@property(retain, nonatomic) MMUIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) MMUIButton *sureBtn; // @synthesize sureBtn=_sureBtn;
@property(retain, nonatomic) RichTextView *richTextView; // @synthesize richTextView=_richTextView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(copy, nonatomic) NSString *reportEId; // @synthesize reportEId=_reportEId;
- (void)_layoutUIViews;
- (void)setUpUIComponent:(id)arg1 content:(id)arg2;
- (void)onClickCloseBtn;
- (void)onClickSureBtn;
- (id)initWithFrame:(struct CGRect)arg1 iconImage:(id)arg2 content:(id)arg3 sureBlock:(CDUnknownBlockType)arg4 closeBlock:(CDUnknownBlockType)arg5;

@end

