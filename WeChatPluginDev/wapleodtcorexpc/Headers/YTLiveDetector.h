//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, YTFaceTracker;

@interface YTLiveDetector : NSObject
{
    int detectCountDown;
    _Bool _hasFace;
    int _defaultDetectInterval;
    NSMutableArray *_resultFacePoints;
    unsigned long long _faceCount;
    YTFaceTracker *_YTFaceTracker;
    struct YTPOSE _facePose;
    struct CGRect _faceRect;
    CDStruct_0edc81f6 _trackResInfo;
}

+ (id)getVersion;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) YTFaceTracker *YTFaceTracker; // @synthesize YTFaceTracker=_YTFaceTracker;
@property(nonatomic) int defaultDetectInterval; // @synthesize defaultDetectInterval=_defaultDetectInterval;
@property(nonatomic) CDStruct_0edc81f6 trackResInfo; // @synthesize trackResInfo=_trackResInfo;
@property(nonatomic) struct YTPOSE facePose; // @synthesize facePose=_facePose;
@property(nonatomic) unsigned long long faceCount; // @synthesize faceCount=_faceCount;
@property(retain, nonatomic) NSMutableArray *resultFacePoints; // @synthesize resultFacePoints=_resultFacePoints;
@property(nonatomic) struct CGRect faceRect; // @synthesize faceRect=_faceRect;
@property(nonatomic) _Bool hasFace; // @synthesize hasFace=_hasFace;
- (void)detectFace:(struct Mat)arg1;
- (void)doDetectFace:(struct Mat)arg1;
- (struct CGPoint)getNormalizedCenter:(struct Mat)arg1;
- (CDStruct_0edc81f6)getTrackInfo;
- (id)initWith:(_Bool)arg1;

@end

