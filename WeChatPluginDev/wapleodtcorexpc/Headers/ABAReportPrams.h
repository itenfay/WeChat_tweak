//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class VideoEncodeParams;

@interface ABAReportPrams : NSObject
{
    _Bool _useEncodeParams;
    _Bool _useABA;
    _Bool _skipVideoCompress;
    _Bool _inputVideoIsVFR;
    _Bool _vcodec2Preset;
    int _averageQP;
    int _averageMV;
    int _skipMode;
    int _intraMode;
    int _interMode;
    int _skipReadQP;
    int _ratioBitrateQP;
    int _complexity;
    int _qualityLevel;
    float _auQualityLevel;
    VideoEncodeParams *_videoEncodeParams;
    double _inputVideoMaxFps;
    double _inputVideoMinFps;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool vcodec2Preset; // @synthesize vcodec2Preset=_vcodec2Preset;
@property(nonatomic) double inputVideoMinFps; // @synthesize inputVideoMinFps=_inputVideoMinFps;
@property(nonatomic) double inputVideoMaxFps; // @synthesize inputVideoMaxFps=_inputVideoMaxFps;
@property(nonatomic) _Bool inputVideoIsVFR; // @synthesize inputVideoIsVFR=_inputVideoIsVFR;
@property(nonatomic) _Bool skipVideoCompress; // @synthesize skipVideoCompress=_skipVideoCompress;
@property(nonatomic) _Bool useABA; // @synthesize useABA=_useABA;
@property(retain, nonatomic) VideoEncodeParams *videoEncodeParams; // @synthesize videoEncodeParams=_videoEncodeParams;
@property(nonatomic) _Bool useEncodeParams; // @synthesize useEncodeParams=_useEncodeParams;
@property(nonatomic) float auQualityLevel; // @synthesize auQualityLevel=_auQualityLevel;
@property(nonatomic) int qualityLevel; // @synthesize qualityLevel=_qualityLevel;
@property(nonatomic) int complexity; // @synthesize complexity=_complexity;
@property(nonatomic) int ratioBitrateQP; // @synthesize ratioBitrateQP=_ratioBitrateQP;
@property(nonatomic) int skipReadQP; // @synthesize skipReadQP=_skipReadQP;
@property(nonatomic) int interMode; // @synthesize interMode=_interMode;
@property(nonatomic) int intraMode; // @synthesize intraMode=_intraMode;
@property(nonatomic) int skipMode; // @synthesize skipMode=_skipMode;
@property(nonatomic) int averageMV; // @synthesize averageMV=_averageMV;
@property(nonatomic) int averageQP; // @synthesize averageQP=_averageQP;
- (id)init;

@end

