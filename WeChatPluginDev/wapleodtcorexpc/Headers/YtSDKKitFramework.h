//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray, NSString, UIImage, UIView;

@interface YtSDKKitFramework : NSObject
{
    NSMutableArray *eventQueue;
    NSLock *queueLock;
    int _compareImageType;
    int _networkTimeoutMs;
    UIImage *_compareImage;
    UIView *_shapeView;
    NSString *_modelRootPath;
    struct CGRect _previewRect;
    struct CGRect _detectRect;
}

+ (void)YTRequestWithUrl:(id)arg1 withContent:(id)arg2 withHeader:(id)arg3 withResponseBlock:(CDUnknownBlockType)arg4;
+ (void)clearInstance;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) int networkTimeoutMs; // @synthesize networkTimeoutMs=_networkTimeoutMs;
@property(retain, nonatomic) NSString *modelRootPath; // @synthesize modelRootPath=_modelRootPath;
@property(nonatomic) struct CGRect detectRect; // @synthesize detectRect=_detectRect;
@property(nonatomic) struct CGRect previewRect; // @synthesize previewRect=_previewRect;
@property(retain, nonatomic) UIView *shapeView; // @synthesize shapeView=_shapeView;
@property(nonatomic) int compareImageType; // @synthesize compareImageType=_compareImageType;
@property(retain, nonatomic) UIImage *compareImage; // @synthesize compareImage=_compareImage;
- (void)update:(struct Mat *)arg1 andDepthBuffer:(id)arg2;
- (id)createStateByName:(id)arg1 withSDKConfigData:(id)arg2;
- (struct Mat)getCvRgbFromCGImageRef:(struct CGImage *)arg1;
- (struct Mat)getCvBgra:(struct opaqueCMSampleBuffer *)arg1;
- (struct Mat)getCvRgb:(struct opaqueCMSampleBuffer *)arg1;
- (void)fireEvent:(unsigned long long)arg1 withContent:(id)arg2;
- (id)getShapeView;
- (void)doResume;
- (void)doPause;
- (int)updateWithFrameData:(void *)arg1 depthPixelBuffer:(id)arg2 withDataType:(unsigned long long)arg3;
- (void)reset;
- (void)updateSDKSetting:(id)arg1;
- (int)deInit;
- (int)initWithSDKSetting:(id)arg1 withPipelineWorkMode:(long long)arg2 withPipelineStateNameArray:(id)arg3 withCamera:(id)arg4 withEventHandleBlock:(CDUnknownBlockType)arg5 withNetworkRequestBlock:(CDUnknownBlockType)arg6;
- (id)getVersion;

@end

