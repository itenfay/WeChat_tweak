//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CEmoticonWrap, UIImageView;

@interface MMEmoticonView : UIView
{
    double m_imageScale;
    UIImageView *m_animatedImageView;
    _Bool _forceAdjustViewSize;
    _Bool _asyncLoadFirstFrame;
    _Bool _shouldCheckWxamValid;
    CEmoticonWrap *m_emoticonWrap;
    double _maxSize;
    double _minSize;
    double _imageScale;
    struct CGSize _noImageSize;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldCheckWxamValid; // @synthesize shouldCheckWxamValid=_shouldCheckWxamValid;
@property(nonatomic) _Bool asyncLoadFirstFrame; // @synthesize asyncLoadFirstFrame=_asyncLoadFirstFrame;
@property(nonatomic) _Bool forceAdjustViewSize; // @synthesize forceAdjustViewSize=_forceAdjustViewSize;
@property(nonatomic) struct CGSize noImageSize; // @synthesize noImageSize=_noImageSize;
@property(nonatomic) double imageScale; // @synthesize imageScale=_imageScale;
@property(nonatomic) double minSize; // @synthesize minSize=_minSize;
@property(nonatomic) double maxSize; // @synthesize maxSize=_maxSize;
@property(readonly, nonatomic) CEmoticonWrap *emoticonWrap; // @synthesize emoticonWrap=m_emoticonWrap;
- (_Bool)canBecomeFirstResponder;
- (_Bool)setEmoticonWrap:(id)arg1 PlayGif:(_Bool)arg2;
- (void)setImageHidden:(_Bool)arg1;
- (_Bool)checkWxamValidWithDecoder:(id)arg1;
- (_Bool)formGifView:(_Bool)arg1;
- (_Bool)formImageView:(id)arg1 newSize:(struct CGSize)arg2;
- (_Bool)formImageView:(id)arg1;
- (id)getFirstFrameImage;
- (struct CGSize)contentImageSizeForOriginSize:(struct CGSize)arg1 emoticonWrap:(id)arg2;
- (struct CGSize)contentImageSizeForOriginSize:(struct CGSize)arg1 scale:(double)arg2;
- (struct CGSize)calSizeForSize:(struct CGSize)arg1;
- (void)adjustSettingForFitWidth:(double)arg1;
- (void)adjustSettingForFinderComment;
- (void)adjustSettingForMessage;
- (void)adjustSettingForPreview;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

