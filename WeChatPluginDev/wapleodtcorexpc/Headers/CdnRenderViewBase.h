//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CdnRenderStats, MMWeEffectManager, NSString, RotationControl, ScaleControl, VRProjectionModel;
@protocol CdnNotifyDelegate;

@interface CdnRenderViewBase : UIView
{
    long long _customrenderMode;
    long long _renderScene;
    _Bool _mirror;
    _Bool _renderable;
    int _streamType;
    struct CGSize _bufSize;
    float _currentScale;
    long long _rotation;
    _Bool _maskTexCoordInYReverse;
    _Bool _maskTextureFilter;
    _Bool _needProcessByWeffect;
    id <CdnNotifyDelegate> _notifyDelegate;
    CDUnknownBlockType _layoutSubviewCallBack;
    CdnRenderStats *_renderStats;
    VRProjectionModel *_mVRProjectionModel;
    RotationControl *_mRotationControl;
    ScaleControl *_mScaleControl;
    MMWeEffectManager *_weeffectManager;
}

+ (_Bool)checkInitParamValidWithRenderMode:(long long)arg1 renderScene:(long long)arg2;
- (void).cxx_destruct;
@property _Bool needProcessByWeffect; // @synthesize needProcessByWeffect=_needProcessByWeffect;
@property __weak MMWeEffectManager *weeffectManager; // @synthesize weeffectManager=_weeffectManager;
@property(retain, nonatomic) ScaleControl *mScaleControl; // @synthesize mScaleControl=_mScaleControl;
@property(retain, nonatomic) RotationControl *mRotationControl; // @synthesize mRotationControl=_mRotationControl;
@property(retain, nonatomic) VRProjectionModel *mVRProjectionModel; // @synthesize mVRProjectionModel=_mVRProjectionModel;
@property(nonatomic) _Bool maskTextureFilter; // @synthesize maskTextureFilter=_maskTextureFilter;
@property(nonatomic) _Bool maskTexCoordInYReverse; // @synthesize maskTexCoordInYReverse=_maskTexCoordInYReverse;
@property(retain, nonatomic) CdnRenderStats *renderStats; // @synthesize renderStats=_renderStats;
@property(copy, nonatomic) CDUnknownBlockType layoutSubviewCallBack; // @synthesize layoutSubviewCallBack=_layoutSubviewCallBack;
@property(nonatomic) __weak id <CdnNotifyDelegate> notifyDelegate; // @synthesize notifyDelegate=_notifyDelegate;
- (void)switchPrintRenderFps:(_Bool)arg1;
- (double)getWeVisMgrCreateTime;
- (void)updateNeedProcessByWeffect:(_Bool)arg1;
- (void)configCdnWeEffectManager:(id)arg1;
- (id)getCdnRenderContext;
- (void)encodeWithCoder:(id)arg1;
- (void)setTouchControlFlag:(_Bool)arg1;
- (void)setSensorControlFlag:(_Bool)arg1 keepLastSensor:(_Bool)arg2;
- (void)setMaxMinHalfFOVVer:(float)arg1 MaxVal:(float)arg2;
- (void)setMaxMinHalfFOVHor:(float)arg1 MaxVal:(float)arg2;
- (void)setEnhanceParam:(int)arg1;
- (void)setCustomrenderMode:(long long)arg1;
- (void)resumeMonitor;
- (void)resetStats;
- (void)resetPitchAndYaw;
- (void)pauseMonitor;
- (id)initRemoteViewWithFrame:(struct CGRect)arg1 renderMode:(long long)arg2 renderScene:(long long)arg3;
- (void)handleGesturesOperation:(id)arg1;
- (void)renderFrame:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)renderFrame:(id)arg1;
- (long long)currentRotation;
- (float)currentScale;
- (void)setRotation:(long long)arg1;
- (long long)fps;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

