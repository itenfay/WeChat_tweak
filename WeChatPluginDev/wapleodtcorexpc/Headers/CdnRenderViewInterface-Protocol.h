//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CdnRenderContextWrapper, CdnRenderFrame, MMWeEffectManager, UIGestureRecognizer;

@protocol CdnRenderViewInterface <NSObject>
+ (_Bool)checkInitParamValidWithRenderMode:(long long)arg1 renderScene:(long long)arg2;
- (CdnRenderContextWrapper *)getCdnRenderContext;
- (void)updateNeedProcessByWeffect:(_Bool)arg1;
- (void)configCdnWeEffectManager:(MMWeEffectManager *)arg1;
- (void)resumeMonitor;
- (void)pauseMonitor;
- (void)setMaxMinHalfFOVVer:(float)arg1 MaxVal:(float)arg2;
- (void)setMaxMinHalfFOVHor:(float)arg1 MaxVal:(float)arg2;
- (void)resetPitchAndYaw;
- (void)setEnhanceParam:(int)arg1;
- (void)setSensorControlFlag:(_Bool)arg1 keepLastSensor:(_Bool)arg2;
- (void)setTouchControlFlag:(_Bool)arg1;
- (void)handleGesturesOperation:(UIGestureRecognizer *)arg1;
- (void)setCustomrenderMode:(long long)arg1;
- (void)resetStats;
- (void)renderFrame:(CdnRenderFrame *)arg1 completionBlock:(void (^)(void))arg2;
- (void)renderFrame:(CdnRenderFrame *)arg1;
- (id)initRemoteViewWithFrame:(struct CGRect)arg1 renderMode:(long long)arg2 renderScene:(long long)arg3;
@end

