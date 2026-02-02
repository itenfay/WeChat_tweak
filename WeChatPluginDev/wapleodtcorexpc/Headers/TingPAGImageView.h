//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class PAGPlayer, UIImage, UIImageView;

@interface TingPAGImageView : UIView
{
    _Bool _bResignActive;
    PAGPlayer *_pagCore;
    UIImageView *_coverView;
    UIImage *_renderImage;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bResignActive; // @synthesize bResignActive=_bResignActive;
@property(nonatomic) __weak UIImage *renderImage; // @synthesize renderImage=_renderImage;
@property(retain, nonatomic) UIImageView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) PAGPlayer *pagCore; // @synthesize pagCore=_pagCore;
- (void)applyRenderResultImg:(id)arg1;
- (void)applyFile:(id)arg1;
- (void)prepareForReuse;
- (id)imageFromPixelBuffer:(struct __CVBuffer *)arg1;
- (void)flush;
- (void)freeCache;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)initPagView;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

