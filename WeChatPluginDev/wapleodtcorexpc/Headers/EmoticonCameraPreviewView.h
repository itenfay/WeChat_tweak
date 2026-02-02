//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAEAGLLayer;

@interface EmoticonCameraPreviewView
{
    CAEAGLLayer *_previewLayer;
    struct CGSize _videoSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(retain, nonatomic) CAEAGLLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
- (void)updateWithXEffectManager:(id)arg1;
- (void)setVideoOuputSize:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

