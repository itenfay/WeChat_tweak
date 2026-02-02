//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MAVMetalContext, NSArray, NSString;

@interface MAVBaseMultiVideoCompositionEffect : NSObject
{
    MAVMetalContext *_context;
    CDUnknownBlockType _renderCallback;
    NSArray *_lastTrackList;
    long long _lastRenderPts;
    struct CGSize _assetSize;
}

- (void).cxx_destruct;
@property(nonatomic) long long lastRenderPts; // @synthesize lastRenderPts=_lastRenderPts;
@property(retain, nonatomic) NSArray *lastTrackList; // @synthesize lastTrackList=_lastTrackList;
@property(nonatomic) struct CGSize assetSize; // @synthesize assetSize=_assetSize;
@property(copy, nonatomic) CDUnknownBlockType renderCallback; // @synthesize renderCallback=_renderCallback;
@property(retain, nonatomic) MAVMetalContext *context; // @synthesize context=_context;
- (id)createInputTrackListFromPixelBuffer:(id)arg1 pts:(long long)arg2;
- (void)renderTracks:(long long)arg1 trackList:(id)arg2 renderInfo:(id)arg3 toPixelBuffer:(struct __CVBuffer *)arg4;
- (void)applyEffectToPixelBufferCollection:(id)arg1 renderInfo:(id)arg2 toDestPixelBuffer:(struct __CVBuffer *)arg3;
- (_Bool)enableRenderPixelBufDirected;
- (id)applyEffectToImageCollection:(id)arg1 renderInfo:(id)arg2;
- (void)destroyTextureCache;
- (void)destroyCacheFrame;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

