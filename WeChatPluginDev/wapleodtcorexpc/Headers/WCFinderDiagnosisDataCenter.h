//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderJumpInfo, NSMutableDictionary, NSMutableSet;

@interface WCFinderDiagnosisDataCenter : NSObject
{
    NSMutableDictionary *_recardMap;
    NSMutableSet *_alreadyDisplayItems;
    NSMutableDictionary *_objectStatusMap;
    FinderJumpInfo *_cacheJumpInfoMayBeNull;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderJumpInfo *cacheJumpInfoMayBeNull; // @synthesize cacheJumpInfoMayBeNull=_cacheJumpInfoMayBeNull;
@property(retain, nonatomic) NSMutableDictionary *objectStatusMap; // @synthesize objectStatusMap=_objectStatusMap;
@property(retain, nonatomic) NSMutableSet *alreadyDisplayItems; // @synthesize alreadyDisplayItems=_alreadyDisplayItems;
@property(retain, nonatomic) NSMutableDictionary *recardMap; // @synthesize recardMap=_recardMap;
- (void)reloadCacheCreatorJumpInfo;
- (id)creatorJumpInfoForContentVM:(id)arg1;
- (_Bool)dataItemCouldShowCreaterEnterance:(id)arg1;
- (void)reportHitXLab;
- (void)markDiagnosisDataItemRead:(id)arg1;
- (_Bool)showAbnormalIcon:(id)arg1;
- (double)displayDuration;
- (id)displayItemForTid:(id)arg1;
- (long long)fetchDiagnosisDataFlag;
- (_Bool)shouldFetchDiagnosisData;
- (void)update:(id)arg1 forTid:(id)arg2;
- (void)queryDataForTidList:(id)arg1;
- (id)init;

@end

