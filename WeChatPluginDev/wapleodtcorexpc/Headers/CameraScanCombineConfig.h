//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface CameraScanCombineConfig
{
    _Bool _bEnableMemoryProtection;
    _Bool _bEnableSvrDetector;
    _Bool _bEnableMotionDetector;
    long long _frameCountPerCombineGoodDetect;
    unsigned long long _eUploadImageEncodeType;
    double _fUploadCropRatio;
    double _fMotionDetectorThreshold;
    long long _preloadPopQueueTaskCount;
}

@property(nonatomic) long long preloadPopQueueTaskCount; // @synthesize preloadPopQueueTaskCount=_preloadPopQueueTaskCount;
@property(nonatomic) double fMotionDetectorThreshold; // @synthesize fMotionDetectorThreshold=_fMotionDetectorThreshold;
@property(nonatomic) _Bool bEnableMotionDetector; // @synthesize bEnableMotionDetector=_bEnableMotionDetector;
@property(nonatomic) _Bool bEnableSvrDetector; // @synthesize bEnableSvrDetector=_bEnableSvrDetector;
@property(nonatomic) double fUploadCropRatio; // @synthesize fUploadCropRatio=_fUploadCropRatio;
@property(nonatomic) unsigned long long eUploadImageEncodeType; // @synthesize eUploadImageEncodeType=_eUploadImageEncodeType;
@property(nonatomic) _Bool bEnableMemoryProtection; // @synthesize bEnableMemoryProtection=_bEnableMemoryProtection;
@property(nonatomic) long long frameCountPerCombineGoodDetect; // @synthesize frameCountPerCombineGoodDetect=_frameCountPerCombineGoodDetect;

@end

