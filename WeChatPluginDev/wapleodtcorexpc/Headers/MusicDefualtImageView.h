//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIImageView.h>

@class MMMusicFadeOutLayer, MVImageLoader, NSObject, UIImage;
@protocol OS_dispatch_queue;

@interface MusicDefualtImageView : UIImageView
{
    _Bool _inInUpdateImageProcess;
    UIImage *_currentImage;
    NSObject<OS_dispatch_queue> *_workerQueue;
    MVImageLoader *_imageLoader;
    MMMusicFadeOutLayer *_maskLayer;
    UIImageView *_foregroundImageView;
    struct CGRect _displayBounds;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *foregroundImageView; // @synthesize foregroundImageView=_foregroundImageView;
@property(retain, nonatomic) MMMusicFadeOutLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(nonatomic) _Bool inInUpdateImageProcess; // @synthesize inInUpdateImageProcess=_inInUpdateImageProcess;
@property(retain, nonatomic) MVImageLoader *imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue; // @synthesize workerQueue=_workerQueue;
@property(nonatomic) struct CGRect displayBounds; // @synthesize displayBounds=_displayBounds;
@property(retain, nonatomic) UIImage *currentImage; // @synthesize currentImage=_currentImage;
- (id)generateEffectRenderWithTargetRect:(struct CGRect)arg1;
- (id)imageFromPixelBuffer:(struct __CVBuffer *)arg1;
- (void)updateDefaultImageURLString:(id)arg1;
- (void)updateDefaultImage:(id)arg1;
- (void)reloadImage;
- (void)updateDisplayImageIfNeeded;
- (void)setupMaskLayerWithSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

