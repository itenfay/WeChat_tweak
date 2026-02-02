//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSValue, TXCDispatchQueue, TXCVideoFrameCoords;

@interface TXCRoiRegionTransformFilter
{
    _Bool _shouldSkipRoiRegionTransform;
    TXCVideoFrameCoords *_frameCoords;
    NSValue *_inputSize;
    NSValue *_outputSize;
    TXCDispatchQueue *_queue;
    NSArray *_roiConfigArray;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *roiConfigArray; // @synthesize roiConfigArray=_roiConfigArray;
@property(retain, nonatomic) TXCDispatchQueue *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool shouldSkipRoiRegionTransform; // @synthesize shouldSkipRoiRegionTransform=_shouldSkipRoiRegionTransform;
@property(retain, nonatomic) NSValue *outputSize; // @synthesize outputSize=_outputSize;
@property(retain, nonatomic) NSValue *inputSize; // @synthesize inputSize=_inputSize;
@property(retain, nonatomic) TXCVideoFrameCoords *frameCoords; // @synthesize frameCoords=_frameCoords;
- (void)processVideoFrame:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (id)transformRoiConfigArray;
- (id)calculateRoiRegion:(id)arg1;
- (void)setRoiConfig:(id)arg1;
- (id)initWithQueue:(id)arg1;

@end

