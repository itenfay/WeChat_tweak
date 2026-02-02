//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NSTimer, YtVideoSetting;
@protocol YTAGReflectDeviceDelegate;

@interface YTFaceHandle : NSObject
{
    _Bool LooseMode;
    struct Mat BestImg;
    double _timerInterval;
    float eps;
    _Bool FirstISOFrame;
    NSTimer *countTimer;
    long long triggerTimes;
    NSMutableArray *landmarksVec;
    NSString *mRgbConfig;
    NSString *mAppId;
    CDUnknownBlockType _onDalayCalc;
    CDUnknownBlockType _onFinish;
    _Bool isReflecting;
    double initLight;
    struct YTFaceReflect m_reflectHandle;
    YtVideoSetting *_setting;
    NSString *_dir_path;
    id <YTAGReflectDeviceDelegate> _device;
    NSMutableArray *_BestImgPts;
    CDUnknownBlockType _reflectCallback;
}

+ (id)checksum:(id)arg1 withData:(id)arg2;
+ (void)registerSDKLogger:(int)arg1 withListener:(CDUnknownBlockType)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType reflectCallback; // @synthesize reflectCallback=_reflectCallback;
@property(retain, nonatomic) NSMutableArray *BestImgPts; // @synthesize BestImgPts=_BestImgPts;
@property(nonatomic) __weak id <YTAGReflectDeviceDelegate> device; // @synthesize device=_device;
@property(retain, nonatomic) NSString *dir_path; // @synthesize dir_path=_dir_path;
@property(retain, nonatomic) YtVideoSetting *setting; // @synthesize setting=_setting;
- (id)UIImageFromCVMat:(struct Mat)arg1;
- (void)PushImgSequence:(void *)arg1 faceAlign:(id)arg2 timeStamp:(unsigned long long)arg3;
- (void)getFaces;
- (int)processImgSequence;
- (float)precheckCloseEye:(id)arg1;
- (long long)GenDataPack;
- (double)getTimeIntercal;
- (id)getDirPath;
- (double)Get_ISObackup;
- (id)getBestImg:(struct Mat *)arg1;
- (void *)getFullPack;
- (int)getSafety;
- (void)setSafety:(int)arg1;
- (int)getAGLabelShowing;
- (id)AutoGenRgb:(int)arg1 mode:(id)arg2;
- (void)clearAG;
- (long long)initAG:(id)arg1 device:(id)arg2 shapeView:(id)arg3 onDalayCalc:(CDUnknownBlockType)arg4 onFinish:(CDUnknownBlockType)arg5 outputDurationMS:(long long *)arg6;
- (void)handleFinish;
- (void)handleDelayFinish;
- (void)setARGB:(unsigned int)arg1 screenLight:(double)arg2;
- (id)colorWithHex:(unsigned int)arg1;
- (void)stopCountTimer;
- (id)getVersion;
- (void)setReflectEvent:(CDUnknownBlockType)arg1;
- (id)initWithAppId:(id)arg1 withExtraData:(id)arg2;

@end

