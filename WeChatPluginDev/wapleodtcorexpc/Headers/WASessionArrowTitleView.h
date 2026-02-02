//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString, UIButton, UIImageView, UIView;
@protocol WASessionArrowTitleViewDelegate;

@interface WASessionArrowTitleView
{
    _Bool _isFromBusiness;
    id <WASessionArrowTitleViewDelegate> _delegate;
    NSString *_title;
    NSString *_subTitle;
    MMUILabel *_titleLabel;
    MMUILabel *_subTitleLabel;
    UIView *_rightView;
    UIImageView *_arrowView;
    double _maxWidth;
    UIButton *_profileButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *profileButton; // @synthesize profileButton=_profileButton;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UIView *rightView; // @synthesize rightView=_rightView;
@property(retain, nonatomic) MMUILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool isFromBusiness; // @synthesize isFromBusiness=_isFromBusiness;
@property(nonatomic) __weak id <WASessionArrowTitleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickTitle;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithTitleTypeIsFromBusiness:(_Bool)arg1 maxWidth:(double)arg2;

@end

