//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView;

@interface WCBrandAudioPlayView
{
    UIImageView *_bgImageView;
    UIImageView *_fgImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *fgImageView; // @synthesize fgImageView=_fgImageView;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
- (void)onMusicPlayStatusChanged;
- (void)setSelected:(_Bool)arg1;
- (void)stopAnimating;
- (void)startAnimating;
- (void)setFgImageHighlightedImage:(struct CGSize)arg1;
- (void)setBgImageAnimationImages:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)init;

@end

