//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIImageView;

@interface MMImageCropPopTransitionContext : NSObject
{
    UIImageView *_imageView;
    struct CGRect _imageOriginFrameInWindow;
    struct CGRect _imageFinalFrameInWindow;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect imageFinalFrameInWindow; // @synthesize imageFinalFrameInWindow=_imageFinalFrameInWindow;
@property(nonatomic) struct CGRect imageOriginFrameInWindow; // @synthesize imageOriginFrameInWindow=_imageOriginFrameInWindow;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;

@end

