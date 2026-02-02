//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIButton, UIImageView, UILabel, UIView;

@interface MMFinderLiveShopShelfMainTableHeaderItemMultiView
{
    CDUnknownBlockType _onClicked;
    UIButton *_button;
    UIView *_line;
    UILabel *_subtitleLabel;
    UIImageView *_tailIcon;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *tailIcon; // @synthesize tailIcon=_tailIcon;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(copy, nonatomic) CDUnknownBlockType onClicked; // @synthesize onClicked=_onClicked;
- (_Bool)accessibilityPerformMagicTap;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (id)accessibilityLabel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)tailIconSize;
- (void)doOnClicked;
- (id)addSubtitleLabel;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

