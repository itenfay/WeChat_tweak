//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, MMWebImageView, TextStateIcon;

@interface TextStatePublishEntryButton
{
    TextStateIcon *_exposeIcon;
    MMWebImageView *_iconImageView;
    MMUILabel *_descriptionLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) TextStateIcon *exposeIcon; // @synthesize exposeIcon=_exposeIcon;
- (double)buttonHeight;
- (struct CGSize)iconSize;
- (id)mainColor;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)changeForIconStyle;
- (void)changeForStandardStyle;
- (void)initCommonStyles;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

