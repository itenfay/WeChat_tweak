//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface IntelligentFaceClusterItem
{
    int _faceIdx;
    float _zScore;
    unsigned int _updateStatue;
    NSString *_imgKey;
    NSArray *_arrPartConfidence;
    unsigned long long _labelId;
    NSArray *_arrFaceFeature;
    NSString *_faceClusterFilePathId;
    NSString *_mediaFilePath;
    double _faceImageWidth;
    double _faceImageHeight;
    NSArray *_arrfacePoint;
    NSArray *_arrL2NormFaceFeature;
    struct CGRect _faceRect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *arrL2NormFaceFeature; // @synthesize arrL2NormFaceFeature=_arrL2NormFaceFeature;
@property(retain, nonatomic) NSArray *arrfacePoint; // @synthesize arrfacePoint=_arrfacePoint;
@property(nonatomic) double faceImageHeight; // @synthesize faceImageHeight=_faceImageHeight;
@property(nonatomic) double faceImageWidth; // @synthesize faceImageWidth=_faceImageWidth;
@property(retain, nonatomic) NSString *mediaFilePath; // @synthesize mediaFilePath=_mediaFilePath;
@property(retain, nonatomic) NSString *faceClusterFilePathId; // @synthesize faceClusterFilePathId=_faceClusterFilePathId;
@property(nonatomic) unsigned int updateStatue; // @synthesize updateStatue=_updateStatue;
@property(nonatomic) struct CGRect faceRect; // @synthesize faceRect=_faceRect;
@property(retain, nonatomic) NSArray *arrFaceFeature; // @synthesize arrFaceFeature=_arrFaceFeature;
@property(nonatomic) unsigned long long labelId; // @synthesize labelId=_labelId;
@property(nonatomic) float zScore; // @synthesize zScore=_zScore;
@property(retain, nonatomic) NSArray *arrPartConfidence; // @synthesize arrPartConfidence=_arrPartConfidence;
@property(nonatomic) int faceIdx; // @synthesize faceIdx=_faceIdx;
@property(retain, nonatomic) NSString *imgKey; // @synthesize imgKey=_imgKey;
- (void)copyFieldFromDbFaceClusterItem:(id)arg1;

@end

