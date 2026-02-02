//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class RichTextView, UIButton, UIImageView, UIView;

@interface WCFinderShadowOptionBubbleView
{
    UIButton *_actionBtn;
    UIButton *_closeBtn;
    UIView *_containerView;
    UIImageView *_leftImageView;
    RichTextView *_leftContenTextView;
    CDUnknownBlockType _closeBlock;
}

+ (unsigned long long)getLeftTextAreaMaxLengthCountByTotalWidth:(double)arg1 rightTips:(id)arg2;
+ (double)leftTextAreaMaxWidthByTotalWidth:(double)arg1 rightTips:(id)arg2;
+ (double)bubbleViewHeightByTotalWidth:(double)arg1 leftContent:(id)arg2 rightTips:(id)arg3;
+ (id)genCloseBtnTarget:(id)arg1 action:(SEL)arg2;
+ (id)genRighTextViewByWidth:(double)arg1;
+ (id)genActionBtnBy:(id)arg1 bkColor:(id)arg2 fontColor:(id)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(retain, nonatomic) RichTextView *leftContenTextView; // @synthesize leftContenTextView=_leftContenTextView;
@property(retain, nonatomic) UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIButton *actionBtn; // @synthesize actionBtn=_actionBtn;
- (void)onClickCloseBtn;
- (void)removeViewAction:(_Bool)arg1;
- (void)willRemoveView;
- (void)layoutAllSubviews;
- (void)setUpUIByLeftContent:(id)arg1 rightTips:(id)arg2 actionClickBlock:(CDUnknownBlockType)arg3 closeClickBlock:(CDUnknownBlockType)arg4;
- (id)initWithFrame:(struct CGRect)arg1 uiConfig:(id)arg2 actionClickBlock:(CDUnknownBlockType)arg3 closeClickBlock:(CDUnknownBlockType)arg4;

@end

