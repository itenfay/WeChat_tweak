//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVSampleBufferDisplayLayer, NSRecursiveLock, UIView;

@interface WCVideoSampleBufferRender
{
    struct __CVBuffer *_localImageBuffer;
    _Bool _isMirror;
    UIView *_renderView;
    AVSampleBufferDisplayLayer *_renderLayer;
    NSRecursiveLock *_localBufferLock;
}

- (void).cxx_destruct;
@property _Bool isMirror; // @synthesize isMirror=_isMirror;
@property(retain, nonatomic) NSRecursiveLock *localBufferLock; // @synthesize localBufferLock=_localBufferLock;
@property(readonly, nonatomic) AVSampleBufferDisplayLayer *renderLayer; // @synthesize renderLayer=_renderLayer;
@property(readonly, nonatomic) UIView *renderView; // @synthesize renderView=_renderView;
- (void)renderImage:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3 FitView:(_Bool)arg4;
- (void)setMirror:(_Bool)arg1;
- (void)changeFrame:(struct CGRect)arg1;
- (id)getRenderView;
- (id)initWithFrame:(struct CGRect)arg1 isMirror:(_Bool)arg2;

@end

