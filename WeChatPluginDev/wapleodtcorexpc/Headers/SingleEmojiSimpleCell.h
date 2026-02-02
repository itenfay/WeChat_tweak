//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class EmojiInfoObj, MMWebImageView;

@interface SingleEmojiSimpleCell : UICollectionViewCell
{
    EmojiInfoObj *_emojiInfo;
    MMWebImageView *_imageView;
    struct UIEdgeInsets _edgeInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMWebImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) EmojiInfoObj *emojiInfo; // @synthesize emojiInfo=_emojiInfo;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
- (void)layoutSubviews;
- (void)initEmoticonView;
- (void)updateWithEmojiInfo:(id)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

