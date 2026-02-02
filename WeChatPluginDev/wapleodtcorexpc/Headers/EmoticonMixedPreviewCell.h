//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMWebImageView, UIImageView, UILabel, UIView;

@interface EmoticonMixedPreviewCell : UICollectionViewCell
{
    MMWebImageView *_webImageView;
    UIView *_packHintView;
    UILabel *_packHintLabel;
    UIView *_moreView;
    UIImageView *_moreImg;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *moreImg; // @synthesize moreImg=_moreImg;
@property(retain, nonatomic) UIView *moreView; // @synthesize moreView=_moreView;
@property(retain, nonatomic) UILabel *packHintLabel; // @synthesize packHintLabel=_packHintLabel;
@property(retain, nonatomic) UIView *packHintView; // @synthesize packHintView=_packHintView;
@property(retain, nonatomic) MMWebImageView *webImageView; // @synthesize webImageView=_webImageView;
- (_Bool)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (void)updateForMore;
- (void)updateWithEmojiSummary:(id)arg1;
- (void)updateWithEmojiInfo:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

