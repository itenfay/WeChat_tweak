//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMBadgeView, NSString, NSURL, UIColor, UIImage, UIImageView, UILabel, WCFinderAnimationLoadingView, WCFinderRedDotTipsShowInfo;
@protocol WCFinderTLTabButtonDelegate;

@interface WCFinderTLTabButton
{
    _Bool _shouldShowLeftIcon;
    id <WCFinderTLTabButtonDelegate> _delegate;
    unsigned long long _category;
    NSString *_iconUrl;
    NSURL *_leftIconUrl;
    WCFinderRedDotTipsShowInfo *_redDotInfo;
    double _selectedValue;
    double _bottomLineExpectExtWidth;
    long long _refreshStyle;
    MMBadgeView *_redDotView;
    UILabel *_redDotTextField;
    UIImageView *_liveIconView;
    long long _imageStyle;
    UILabel *_rightLabel;
    UIImageView *_avatarView;
    UIImage *_avatarImage;
    NSString *_leftIconText;
    UIColor *_normalColor;
    UIColor *_highlightColor;
    WCFinderAnimationLoadingView *_loadingView;
    struct CGSize _iconSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(retain, nonatomic) UIColor *normalColor; // @synthesize normalColor=_normalColor;
@property(retain, nonatomic) NSString *leftIconText; // @synthesize leftIconText=_leftIconText;
@property(retain, nonatomic) UIImage *avatarImage; // @synthesize avatarImage=_avatarImage;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(nonatomic) long long imageStyle; // @synthesize imageStyle=_imageStyle;
@property(retain, nonatomic) UIImageView *liveIconView; // @synthesize liveIconView=_liveIconView;
@property(retain, nonatomic) UILabel *redDotTextField; // @synthesize redDotTextField=_redDotTextField;
@property(retain, nonatomic) MMBadgeView *redDotView; // @synthesize redDotView=_redDotView;
@property(nonatomic) long long refreshStyle; // @synthesize refreshStyle=_refreshStyle;
@property(nonatomic) _Bool shouldShowLeftIcon; // @synthesize shouldShowLeftIcon=_shouldShowLeftIcon;
@property(nonatomic) double bottomLineExpectExtWidth; // @synthesize bottomLineExpectExtWidth=_bottomLineExpectExtWidth;
@property(nonatomic) double selectedValue; // @synthesize selectedValue=_selectedValue;
@property(retain, nonatomic) WCFinderRedDotTipsShowInfo *redDotInfo; // @synthesize redDotInfo=_redDotInfo;
@property(retain, nonatomic) NSURL *leftIconUrl; // @synthesize leftIconUrl=_leftIconUrl;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(nonatomic) unsigned long long category; // @synthesize category=_category;
@property(nonatomic) __weak id <WCFinderTLTabButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutAddedImageView:(id)arg1 addedImageSize:(struct CGSize)arg2 imageTitlePadding:(double)arg3;
- (void)doLayout;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)sizeToFit;
- (void)onButtonDidChangedSelectedFinish;
@property(nonatomic) double fontSize;
- (void)setSelected:(_Bool)arg1;
- (void)setIconWithImageStyle:(long long)arg1 selectedIcon:(id)arg2 normalIcon:(id)arg3;
- (void)cleanRefreshState;
- (void)setRefreshWithImageStyle:(long long)arg1 refreshStyle:(long long)arg2;
- (void)cleanLeftAvatarImage;
- (void)setButtonNormalColor:(id)arg1 highlightColor:(id)arg2;
- (void)setLeftIcon:(id)arg1 withText:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

