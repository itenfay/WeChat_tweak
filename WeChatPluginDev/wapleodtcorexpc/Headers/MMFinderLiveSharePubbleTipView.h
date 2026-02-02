//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAShapeLayer, MMTimer, MMUIButton, MMUIImageView, MMUILabel, NSString, UIFont, UITapGestureRecognizer, UIView;

@interface MMFinderLiveSharePubbleTipView
{
    CDUnknownBlockType _clickCloseBlock;
    CDUnknownBlockType _clickPubbleBlock;
    UIView *_contentView;
    long long _type;
    NSString *_title;
    UIFont *_titleFont;
    double _customCornerRadius;
    unsigned long long _numbersOfLines;
    long long _titleTextAlignment;
    MMUILabel *_titleLabel;
    MMUIImageView *_imageView;
    MMUIButton *_closeButton;
    CAShapeLayer *_shapeLayer;
    UITapGestureRecognizer *_tapGesture;
    MMTimer *_dismissTimer;
    CDUnknownBlockType _dismissTimerCallback;
}

+ (double)caculatePubbleTipViewWidthWithType:(long long)arg1 titleText:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType dismissTimerCallback; // @synthesize dismissTimerCallback=_dismissTimerCallback;
@property(retain, nonatomic) MMTimer *dismissTimer; // @synthesize dismissTimer=_dismissTimer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) MMUIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) long long titleTextAlignment; // @synthesize titleTextAlignment=_titleTextAlignment;
@property(nonatomic) unsigned long long numbersOfLines; // @synthesize numbersOfLines=_numbersOfLines;
@property(nonatomic) double customCornerRadius; // @synthesize customCornerRadius=_customCornerRadius;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)callDismissTimerCallback;
- (void)setDismissTimeS:(unsigned int)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)setClickPubbleBlock:(CDUnknownBlockType)arg1;
- (void)setClickCloseBlock:(CDUnknownBlockType)arg1;
- (void)onBackViewDidTaped:(id)arg1;
- (void)clickCloseButton:(id)arg1;
- (double)contentHeight;
- (double)triangeArrowHeight;
- (double)triangeArrowWidth;
- (void)layoutCloseButton;
- (void)layoutTitleLabel;
- (void)layoutImageView;
- (void)layoutContentView;
- (void)updateCustomCornerRadius:(double)arg1;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 orientation:(long long)arg2;

@end

