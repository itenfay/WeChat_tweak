//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class DepthFrameData, NSMutableArray;

@interface YTConvertDepthHelper : NSObject
{
    int depthFrameCount;
    float angleBufferThr;
    long long depthIntervalTime;
    long long currnetTime;
    float depthOffset;
    int selectCount;
    DepthFrameData *depthFrameData;
    NSMutableArray *_depthFrameDatas;
}

+ (void)clearInstance;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *depthFrameDatas; // @synthesize depthFrameDatas=_depthFrameDatas;
- (void)deinit;
- (void)setNetFetchControlConfig:(int)arg1 withIntervalTime:(long long)arg2 withOffset:(float)arg3;
- (id)convertPixelBuffer:(struct __CVBuffer *)arg1 rect:(struct CGRect)arg2;
- (id)makeDepthFrameData:(int)arg1 withPitch:(float)arg2 withYaw:(float)arg3 withRoll:(float)arg4 withFaceRect:(struct CGRect)arg5 withFivePoints:(id)arg6;
- (void)checkDepth:(int)arg1 withPitch:(float)arg2 withYaw:(float)arg3 withRoll:(float)arg4 withFaceRect:(struct CGRect)arg5 withFivePoints:(id)arg6;
- (void)updateFrame:(struct Mat)arg1 andDepthBuffer:(id)arg2 andCaptureTime:(long long)arg3;
- (id)getDepthDatas;
- (void)setChecksums:(id)arg1;
- (id)stopCollectDepthImg;
- (void)startCollectDepthImg;

@end

