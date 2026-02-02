//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIActivityIndicatorView, MMUILabel, NSMutableAttributedString, NSString, SightIconView, UIImage, UIImageView;
@protocol MultiLineTextView;

@interface MMToastView : UIView
{
    float _progress;
    unsigned long long _style;
    NSString *_svgIconName;
    UIImage *_iconImage;
    NSString *_text;
    NSMutableAttributedString *_attributedString;
    UIView<MultiLineTextView> *_customView;
    UIView *_backgroundView;
    UIImageView *_iconView;
    MMUIActivityIndicatorView *_activityIndicatorView;
    SightIconView *_sightIconView;
    MMUILabel *_textLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) SightIconView *sightIconView; // @synthesize sightIconView=_sightIconView;
@property(retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(retain, nonatomic) UIView<MultiLineTextView> *customView; // @synthesize customView=_customView;
@property(retain, nonatomic) NSMutableAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) NSString *svgIconName; // @synthesize svgIconName=_svgIconName;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (struct CGSize)iconSize;
- (double)iconTextPadding;
- (struct UIEdgeInsets)insets;
- (double)maxWidth;
- (id)contentColor;
- (void)updateIcon;
- (void)updateLayout;
- (void)updateFrame;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

