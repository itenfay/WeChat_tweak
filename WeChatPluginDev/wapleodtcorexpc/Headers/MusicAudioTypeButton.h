//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIControl.h>

@class MusicSourceViewInfo, NSString, UIImageView, UILabel, UIView;

@interface MusicAudioTypeButton : UIControl
{
    MusicSourceViewInfo *_info;
    NSString *_hintLabelText;
    UILabel *_titleLabel;
    UIImageView *_imageView;
    UIView *_verticalSeparator;
    double _verticalSeparatorPadding;
    double _contentSpacing;
    UILabel *_descriptionLabel;
    struct CGSize _verticalSeparatorSize;
    struct UIEdgeInsets _contentEdgeInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(nonatomic) double contentSpacing; // @synthesize contentSpacing=_contentSpacing;
@property(nonatomic) double verticalSeparatorPadding; // @synthesize verticalSeparatorPadding=_verticalSeparatorPadding;
@property(nonatomic) struct CGSize verticalSeparatorSize; // @synthesize verticalSeparatorSize=_verticalSeparatorSize;
@property(retain, nonatomic) UIView *verticalSeparator; // @synthesize verticalSeparator=_verticalSeparator;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *hintLabelText; // @synthesize hintLabelText=_hintLabelText;
@property(retain, nonatomic) MusicSourceViewInfo *info; // @synthesize info=_info;
@property(readonly, nonatomic) NSString *currentTitle;
- (id)accessibilityLabel;
- (_Bool)showHintLabel;
- (void)decorateLabel:(id)arg1;
- (void)sizeToFit;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)imageViewSize;
- (void)setAudioType:(int)arg1;
- (_Bool)canShowHintLabelTextWithInfo:(id)arg1;
- (void)showArrowViewOnHintLabelExpanded:(_Bool)arg1;
- (void)setupDescriptionLabelAlpha;
- (void)layoutSubviews;
- (void)setupSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

