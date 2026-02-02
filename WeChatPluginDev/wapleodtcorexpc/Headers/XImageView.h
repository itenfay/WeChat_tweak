//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class XImageMetalView, XImageViewRenderer, XSampleBufferDisplayView;

@interface XImageView : UIView
{
    struct atomic<bool> _isMetalLayerActive;
    _Bool _disableOpaqueRender;
    XImageViewRenderer *_renderer;
    XSampleBufferDisplayView *_sampleBufferDisplayView;
    XImageMetalView *_metalView;
    unsigned long long _videoContentMode;
    struct CGSize _realSize;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool disableOpaqueRender; // @synthesize disableOpaqueRender=_disableOpaqueRender;
@property(nonatomic) unsigned long long videoContentMode; // @synthesize videoContentMode=_videoContentMode;
@property(retain, nonatomic) XImageMetalView *metalView; // @synthesize metalView=_metalView;
@property(retain, nonatomic) XSampleBufferDisplayView *sampleBufferDisplayView; // @synthesize sampleBufferDisplayView=_sampleBufferDisplayView;
@property __weak XImageViewRenderer *renderer; // @synthesize renderer=_renderer;
@property(nonatomic) struct CGSize realSize; // @synthesize realSize=_realSize;
- (id)metalLayer;
- (void)activeMetalLayer;
- (void)activeSampleBufferDisplayLayer;
- (_Bool)isSampleBufferDisplayViewAlive;
- (void)layoutSubviews;
- (void)setUpViews:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

