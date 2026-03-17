//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CALayer;

@interface SightCameraPreviewView : NSObject
{
    CALayer *_previewLayer;
    struct CGSize _videoSize;
}

@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(retain, nonatomic) CALayer *previewLayer; // @synthesize previewLayer=_previewLayer;
- (void)layoutSubviews;
- (void)updatePreviewLayer:(id)arg1;
- (void)setVideoOuputSize:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

