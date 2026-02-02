//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, NSString, UIColor, UIImage, UIImageView;
@protocol MMDropableTitleViewDelegate;

@interface MMDropableTitleView
{
    UIColor *_buttonBackgroundColor;
    double _arrowImageViewAngle;
    UIImage *_arrowImage;
    UIColor *_arrowImageViewBackgroundColor;
    UIColor *_titleLabelTextColor;
    id <MMDropableTitleViewDelegate> _titleViewDelegate;
    MMUIButton *_button;
    MMUILabel *_titleLabel;
    UIImageView *_arrowImageView;
    NSString *_title;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *button; // @synthesize button=_button;
@property(nonatomic) __weak id <MMDropableTitleViewDelegate> titleViewDelegate; // @synthesize titleViewDelegate=_titleViewDelegate;
- (unsigned long long)accessibilityTraits;
- (void)onClick:(id)arg1;
- (void)laytoutTitleViews;
- (void)rotateArrowWithAnimated:(_Bool)arg1;
- (void)setIsEnable:(_Bool)arg1;
- (void)updateTitle:(id)arg1 animated:(_Bool)arg2;
- (void)initViews;
- (void)layoutSubviews;
- (id)initWithTitle:(id)arg1 buttonBackgroundColor:(id)arg2 arrowImageViewAngle:(double)arg3 arrowImage:(id)arg4 arrowImageViewBackgroundColor:(id)arg5 titleLabelTextColor:(id)arg6;
- (id)initWithTitle:(id)arg1 buttonBackgroundColor:(id)arg2 arrowImageViewAngle:(double)arg3;
- (id)initWithTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

