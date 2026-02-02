//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class SingleEmoticonView;

@interface EmotionStoreDesignerEmojiCell : UICollectionViewCell
{
    SingleEmoticonView *_emoticonView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SingleEmoticonView *emoticonView; // @synthesize emoticonView=_emoticonView;
- (_Bool)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

