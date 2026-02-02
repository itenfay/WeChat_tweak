//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SpatiotemporalDenosingPreProcess : NSObject
{
    BOOL blockSize;
    int frameCnt;
    int frameStaticInterval;
    int motionFrameBufferCnt;
    float noiseLevel;
    float preNoiseLevel;
    _Bool isBackCamera;
    int stDenosingWidth;
    int stDenosingHeight;
    _Bool updateNoiseEstimateFlag;
    int noiseStaticCounter;
    char *blockBuffer;
    char *diffBuffer;
    NSMutableArray *motionLevelBank;
    NSMutableArray *frameVarianceSmoothness;
    int minSmoothness;
    unsigned long long coordinatesBlocksCurFrame[10];
    unsigned long long coordinatesBlocksPreFrame[10];
}

- (void).cxx_destruct;
- (void)dealloc;
- (float)getNoiseLevel;
- (float)getMotionRatioThreshod:(float)arg1 PixelMean:(float)arg2;
- (void)reset;
- (BOOL)quickMotionCheck:(char *)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3;
- (BOOL)quickMotionCheck:(struct __CVBuffer *)arg1;
- (struct blockMotionPrams)checkBlockMotion:(char *)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 colStartCur:(unsigned long long)arg4 rowStartCur:(unsigned long long)arg5 colStartNext:(unsigned long long)arg6 rowStartNext:(unsigned long long)arg7 blockIndex:(unsigned long long *)arg8 blockNum:(unsigned long long)arg9;
- (void)generateRandomCoordinates:(int)arg1 height:(int)arg2;
- (id)sortFrameVarianceSmoothness;
- (float)calculateNoiseLevel:(id)arg1;
- (void)spatialNoiseEstimate:(char *)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 colStart:(unsigned long long)arg4 rowStart:(unsigned long long)arg5 blockIndex:(unsigned long long)arg6;
- (id)formateDicWithName:(id)arg1 smoothValue:(id)arg2 varianceValue:(id)arg3;
- (int)calcutlateSmoothness:(char *)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 centralIndex:(unsigned long long)arg4;
- (void)updateNoiseLevel:(float)arg1;
- (id)init:(_Bool)arg1;

@end

