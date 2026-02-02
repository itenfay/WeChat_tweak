//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FTS5IntelligentFaceClusterItem : NSObject
{
    _Bool isAutoIncrement;
    float _zScore;
    int _faceIndex;
    long long lastInsertedRowID;
    long long _faceLabelId;
    NSString *_faceFeatureStr;
    NSString *_imgKey;
    NSString *_partConfidenceStr;
    double _faceRectX;
    double _faceRectY;
    double _faceRectWidth;
    double _faceRectHeight;
    NSString *_faceClusterFilePathId;
    double _faceImageWidth;
    double _faceImageHeight;
    NSString *_facePointStr;
    NSString *_l2NormFaceFeatureStr;
}

+ (void)__wcdb_column_constraint_161:(void *)arg1;
+ (id)swift_l2NormFaceFeatureStr;
+ (const void *)__wcdb_synthesize_160:(void *)arg1;
+ (const void *)l2NormFaceFeatureStr;
+ (id)swift_facePointStr;
+ (const void *)__wcdb_synthesize_159:(void *)arg1;
+ (const void *)facePointStr;
+ (id)swift_faceImageHeight;
+ (const void *)__wcdb_synthesize_158:(void *)arg1;
+ (const void *)faceImageHeight;
+ (id)swift_faceImageWidth;
+ (const void *)__wcdb_synthesize_157:(void *)arg1;
+ (const void *)faceImageWidth;
+ (id)swift_faceClusterFilePathId;
+ (const void *)__wcdb_synthesize_156:(void *)arg1;
+ (const void *)faceClusterFilePathId;
+ (id)swift_faceRectHeight;
+ (const void *)__wcdb_synthesize_155:(void *)arg1;
+ (const void *)faceRectHeight;
+ (id)swift_faceRectWidth;
+ (const void *)__wcdb_synthesize_154:(void *)arg1;
+ (const void *)faceRectWidth;
+ (id)swift_faceRectY;
+ (const void *)__wcdb_synthesize_153:(void *)arg1;
+ (const void *)faceRectY;
+ (id)swift_faceRectX;
+ (const void *)__wcdb_synthesize_152:(void *)arg1;
+ (const void *)faceRectX;
+ (id)swift_partConfidenceStr;
+ (const void *)__wcdb_synthesize_151:(void *)arg1;
+ (const void *)partConfidenceStr;
+ (id)swift_faceIndex;
+ (const void *)__wcdb_synthesize_150:(void *)arg1;
+ (const void *)faceIndex;
+ (id)swift_imgKey;
+ (const void *)__wcdb_synthesize_149:(void *)arg1;
+ (const void *)imgKey;
+ (id)swift_faceFeatureStr;
+ (const void *)__wcdb_synthesize_148:(void *)arg1;
+ (const void *)faceFeatureStr;
+ (id)swift_zScore;
+ (const void *)__wcdb_synthesize_147:(void *)arg1;
+ (const void *)zScore;
+ (id)swift_faceLabelId;
+ (const void *)__wcdb_synthesize_146:(void *)arg1;
+ (const void *)faceLabelId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *l2NormFaceFeatureStr; // @synthesize l2NormFaceFeatureStr=_l2NormFaceFeatureStr;
@property(retain, nonatomic) NSString *facePointStr; // @synthesize facePointStr=_facePointStr;
@property(nonatomic) double faceImageHeight; // @synthesize faceImageHeight=_faceImageHeight;
@property(nonatomic) double faceImageWidth; // @synthesize faceImageWidth=_faceImageWidth;
@property(retain, nonatomic) NSString *faceClusterFilePathId; // @synthesize faceClusterFilePathId=_faceClusterFilePathId;
@property(nonatomic) double faceRectHeight; // @synthesize faceRectHeight=_faceRectHeight;
@property(nonatomic) double faceRectWidth; // @synthesize faceRectWidth=_faceRectWidth;
@property(nonatomic) double faceRectY; // @synthesize faceRectY=_faceRectY;
@property(nonatomic) double faceRectX; // @synthesize faceRectX=_faceRectX;
@property(retain, nonatomic) NSString *partConfidenceStr; // @synthesize partConfidenceStr=_partConfidenceStr;
@property(nonatomic) int faceIndex; // @synthesize faceIndex=_faceIndex;
@property(retain, nonatomic) NSString *imgKey; // @synthesize imgKey=_imgKey;
@property(retain, nonatomic) NSString *faceFeatureStr; // @synthesize faceFeatureStr=_faceFeatureStr;
@property(nonatomic) float zScore; // @synthesize zScore=_zScore;
@property(nonatomic) long long faceLabelId; // @synthesize faceLabelId=_faceLabelId;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N,VlastInsertedRowID

@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,VisAutoIncrement


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

