//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface MagicBrushCanvasInfo : NSObject
{
    _Bool _onscreen;
    int _canvasId;
    int _contextId;
    NSMutableSet *_renderTargets;
    NSMutableSet *_touchIdSet;
    struct NativeRenderCanvasHost *_nativeRenderCanvasHost;
}

- (void).cxx_destruct;
@property(nonatomic) struct NativeRenderCanvasHost *nativeRenderCanvasHost; // @synthesize nativeRenderCanvasHost=_nativeRenderCanvasHost;
@property(nonatomic) _Bool onscreen; // @synthesize onscreen=_onscreen;
@property(nonatomic) int contextId; // @synthesize contextId=_contextId;
@property(nonatomic) int canvasId; // @synthesize canvasId=_canvasId;
@property(retain, nonatomic) NSMutableSet *touchIdSet; // @synthesize touchIdSet=_touchIdSet;
@property(retain, nonatomic) NSMutableSet *renderTargets; // @synthesize renderTargets=_renderTargets;

@end

