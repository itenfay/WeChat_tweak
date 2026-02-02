//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView, UIView;

@interface TBCalloutMaskedBackgroundView
{
    UIView *_containerView;
    UIView *_containerBorderView;
    UIView *_arrowView;
    UIImageView *_arrowImageView;
    UIImageView *_arrowHighlightedImageView;
    UIImageView *_arrowBorderView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowBorderView; // @synthesize arrowBorderView=_arrowBorderView;
@property(retain, nonatomic) UIImageView *arrowHighlightedImageView; // @synthesize arrowHighlightedImageView=_arrowHighlightedImageView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UIView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UIView *containerBorderView; // @synthesize containerBorderView=_containerBorderView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (id)contentMask;
- (void)layoutSubviews;
- (id)image:(id)arg1 withColor:(id)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)setArrowPoint:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

