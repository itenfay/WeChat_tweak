//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIAccessibilityElement, UIColor, UIImage, UIImageView, UILabel;
@protocol WCPayF2FTransferFavorItemViewDelegate;

@interface WCPayF2FTransferFavorItemView : UIView
{
    _Bool _showInfoButton;
    _Bool _showSeparator;
    _Bool _enabled;
    _Bool _checkState;
    UIImage *_iconImage;
    NSString *_title;
    NSString *_subTitle;
    unsigned long long _accessoryType;
    UIColor *_titleColor;
    UIColor *_subTitleColor;
    id <WCPayF2FTransferFavorItemViewDelegate> _delegate;
    UIView *_contentView;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UIImageView *_infoButton;
    UILabel *_subTitleLabel;
    UIImageView *_accessoryView;
    UIView *_separator;
    UIAccessibilityElement *_selfAccssbilityElement;
    UIAccessibilityElement *_infoButtonAccssbilityElement;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIAccessibilityElement *infoButtonAccssbilityElement; // @synthesize infoButtonAccssbilityElement=_infoButtonAccssbilityElement;
@property(retain, nonatomic) UIAccessibilityElement *selfAccssbilityElement; // @synthesize selfAccssbilityElement=_selfAccssbilityElement;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UIImageView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UIImageView *infoButton; // @synthesize infoButton=_infoButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <WCPayF2FTransferFavorItemViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool checkState; // @synthesize checkState=_checkState;
@property(retain, nonatomic) UIColor *subTitleColor; // @synthesize subTitleColor=_subTitleColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool showSeparator; // @synthesize showSeparator=_showSeparator;
@property(nonatomic) unsigned long long accessoryType; // @synthesize accessoryType=_accessoryType;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(nonatomic) _Bool showInfoButton; // @synthesize showInfoButton=_showInfoButton;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (_Bool)isAccessibilityElement;
- (id)disabledCheckboxImage;
- (id)unselectedCheckboxImage;
- (id)selectedCheckboxImage;
- (_Bool)considerLocationInInfoButton:(struct CGPoint)arg1;
- (void)dismissHighlight;
- (void)handleHighlightWithTouchLocation:(struct CGPoint)arg1;
- (void)handleTap:(id)arg1;
- (id)currentAccessoryImage;
- (struct CGSize)currentAccessorySize;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)configureLayout;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

