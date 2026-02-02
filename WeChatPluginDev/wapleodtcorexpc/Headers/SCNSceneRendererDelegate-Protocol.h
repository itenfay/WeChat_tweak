//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class SCNScene;
@protocol SCNSceneRenderer;

@protocol SCNSceneRendererDelegate <NSObject>

@optional
- (void)renderer:(id <SCNSceneRenderer>)arg1 didRenderScene:(SCNScene *)arg2 atTime:(double)arg3;
- (void)renderer:(id <SCNSceneRenderer>)arg1 willRenderScene:(SCNScene *)arg2 atTime:(double)arg3;
- (void)renderer:(id <SCNSceneRenderer>)arg1 didApplyConstraintsAtTime:(double)arg2;
- (void)renderer:(id <SCNSceneRenderer>)arg1 didSimulatePhysicsAtTime:(double)arg2;
- (void)renderer:(id <SCNSceneRenderer>)arg1 didApplyAnimationsAtTime:(double)arg2;
- (void)renderer:(id <SCNSceneRenderer>)arg1 updateAtTime:(double)arg2;
@end

