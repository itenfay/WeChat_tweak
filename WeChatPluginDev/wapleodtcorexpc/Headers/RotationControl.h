//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMMotionManager;

@interface RotationControl : NSObject
{
    float mDeltaX;
    float mDeltaY;
    _Bool mTouchControlEnable;
    _Bool mSensorControlEnable;
    _Bool mKeepLastSensor;
    _Bool mIsEnableScale;
    union _GLKMatrix4 mModelMatrix;
    union _GLKMatrix4 mViewMatrix;
    union _GLKMatrix4 mPerspectiveMatrix;
    union _GLKMatrix4 mMVPMatrix;
    union _GLKMatrix4 mMVMatrix;
    float mHalfFOVHor;
    float mHalfFOVVer;
    float mMaxHalfFOVHor;
    float mMinHalfFOVHor;
    float mMaxHalfFOVVer;
    float mMinHalfFOVVer;
    struct CGPoint mPrevPoint;
    float sDensity;
    float sDamping;
    float mGlobalScale;
    float mTouchSensitivity;
    float mScaleVal;
    float mSensitivity;
    int mViewWidth;
    int mViewHeight;
    _Bool mRegistered;
    _Bool mInitSensorInfo;
    float mPitch;
    float mYaw;
    float mSensorDensity;
    CMMotionManager *_mMotionManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CMMotionManager *mMotionManager; // @synthesize mMotionManager=_mMotionManager;
- (void)setMaxMinHalfFOVVer:(float)arg1 MaxVal:(float)arg2;
- (void)setMaxMinHalfFOVHor:(float)arg1 MaxVal:(float)arg2;
- (void)resetPitchAndYaw;
- (void)setScalePerspectiveMatrix;
- (void)handleGesturesOperation:(id)arg1;
- (float)scaled:(float)arg1;
- (void)setSmallHalfFOVVer:(float)arg1 viewWidth:(int)arg2 viewHeight:(int)arg3;
- (void)setHalfFOVVer:(float)arg1 viewWidth:(int)arg2 viewHeight:(int)arg3;
- (void)setHalfFOVHor:(float)arg1 viewWidth:(int)arg2 viewHeight:(int)arg3;
- (int)unregisterSensor;
- (int)registerSensor;
- (float *)getRotation;
- (void)updataViewMatrix;
- (void)setPerspectiveMatrix:(float)arg1 Right:(float)arg2 Bottom:(float)arg3 Top:(float)arg4 Near:(float)arg5 Far:(float)arg6;
- (float)getDeltaX;
- (float)getDeltaY;
- (void)setDeltaXAndY:(float)arg1 DeltaY:(float)arg2;
- (void)setSensorControlFlag:(_Bool)arg1 keepLastSensor:(_Bool)arg2;
- (void)setTouchControlFlag:(_Bool)arg1;
- (void)reset;
- (id)init;

@end

