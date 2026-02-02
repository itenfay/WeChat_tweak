//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface YTFaceTracker : NSObject
{
    struct YtFaceDetParam param;
    struct YTFaceDetection *m_detection;
    struct YTFaceAlignment *faRunner;
    struct YTPoseEstimate *poseEstimate;
    _Bool _hasFace;
    struct YTPOSE _facePose;
    struct CGRect _faceRect;
    CDStruct_0edc81f6 _trackResInfo;
}

+ (void)GlobalRelease;
+ (int)GlobalInit;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) CDStruct_0edc81f6 trackResInfo; // @synthesize trackResInfo=_trackResInfo;
@property(nonatomic) struct YTPOSE facePose; // @synthesize facePose=_facePose;
@property(nonatomic) struct CGRect faceRect; // @synthesize faceRect=_faceRect;
@property(nonatomic) _Bool hasFace; // @synthesize hasFace=_hasFace;
- (id)facePointsInImage:(struct Mat)arg1 withRect:(struct CGRect)arg2;
- (CDStruct_0edc81f6)getTrackInfo;
- (id)getPtsFromFaceShape:(struct TC_FaceShape)arg1 withFacePoints:(void *)arg2;
- (struct CGRect)generateFaceRect:(vector_4c9ad6d1)arg1 imageWidth:(int)arg2 imageHeight:(int)arg3;
- (id)faceRectsWithImage:(struct Mat)arg1;
- (void)dealloc;
- (id)initWith:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

