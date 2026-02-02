//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSRecursiveLock;

@interface IntelligentFaceAlbum : NSObject
{
    NSRecursiveLock *m_lock;
    _Bool m_intelligentFaceAlbumInitSuccess;
    double m_clusterThreshold;
    struct TrackerManager m_face_tracker;
    struct XFaceCluster m_face_cluster;
    vector_8ca568ff m_arrVl2NormFaceCluster;
    _Bool m_isFinishCompleteFaceCluster;
    _Bool m_isHadIntelligentFaceCluster;
    NSMutableArray *m_arrPreFaceCluster;
    CDUnknownBlockType _m_SaveFaceClusterToDbBlock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType m_SaveFaceClusterToDbBlock; // @synthesize m_SaveFaceClusterToDbBlock=_m_SaveFaceClusterToDbBlock;
@property(retain) NSMutableArray *m_arrPreFaceCluster; // @synthesize m_arrPreFaceCluster;
- (_Bool)isEnableDataReport;
- (void)reportFaceClusterData;
- (void)asyncFinishCompleteL2NormFaceCluster:(id)arg1;
- (_Bool)asyncCheckAndRepairFaceClusterOptimize;
- (_Bool)asyncCheckAndRepairFaceCluster;
- (unsigned int)calculateFaceAlbumLableId:(unsigned int)arg1 currentFaceClusterNumber:(long long)arg2 faceAlbumData:(id)arg3;
- (void)updateOrInsertFaceClusterListToDbWithBlock:(CDUnknownBlockType)arg1 dicLabelDbLabel:(id)arg2;
- (_Bool)checkIsSameFaceClusterWithArrPreFaceFeature:(id)arg1 arrFaceFeature:(id)arg2;
- (void)optimizeOperateFaceClusterWithHistory:(id)arg1 dicNewLabelPreLabel:(id)arg2;
- (void)operateFaceClusterWithHistory:(id)arg1 dicNewLabelPreLabel:(id)arg2;
- (id)getArrPreFaceCluster;
- (id)executeBatchExecuteFaceAlbum:(id)arg1;
- (id)batchExecuteFaceAlbum:(id)arg1 error:(id)arg2;
- (_Bool)checkFaceAlbumInitSuccess;
- (void)InitModel;
- (_Bool)checkModelFilesExist;
- (_Bool)checkIsOpenFaceFeatureHardwareAcceleration;
- (void)initFaceFeatureHardwareAcceleration;
- (void)initData;
- (void)dealloc;
- (id)init;

@end

