//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIControl.h>

@class EmojiInfoObj, MMUILabel, MMWebImageView, UIView;

@interface SingleEmoticonView : UIControl
{
    EmojiInfoObj *_emojiInfoObj;
    MMWebImageView *_thumbView;
    MMUILabel *_descLabel;
    UIView *_maskView;
}

+ (struct CGSize)sizeWithSideLength:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMWebImageView *thumbView; // @synthesize thumbView=_thumbView;
@property(retain, nonatomic) EmojiInfoObj *emojiInfoObj; // @synthesize emojiInfoObj=_emojiInfoObj;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

