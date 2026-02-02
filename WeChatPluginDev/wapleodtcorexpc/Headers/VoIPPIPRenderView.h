//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class AVSampleBufferDisplayLayer;

@interface VoIPPIPRenderView : UIView
{
    struct __CVBuffer *_localImageBuffer;
    AVSampleBufferDisplayLayer *_customRenderLayer;
}

+ (id)viewWithFrame:(struct CGRect)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) AVSampleBufferDisplayLayer *customRenderLayer; // @synthesize customRenderLayer=_customRenderLayer;
- (void)drawPixelBufferRef:(struct __CVBuffer *)arg1;
- (void)clear;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 avSampleBufferDisplayerLayer:(id)arg2;

@end

