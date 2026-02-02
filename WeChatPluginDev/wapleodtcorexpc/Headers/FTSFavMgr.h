//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FTSFavDB, FTSFavIndexMgr, NSMutableDictionary, NSString;

@interface FTSFavMgr : NSObject
{
    NSMutableDictionary *_dicFavSearchTask;
    FTSFavDB *_ftsFavDB;
    FTSFavIndexMgr *_favIndexMgr;
}

- (void).cxx_destruct;
- (_Bool)updateTagIndexFor:(id)arg1;
- (id)getFavItemLocalIdByTag:(id)arg1;
- (id)getTagsMatch:(id)arg1;
- (id)getAllFavTag;
- (_Bool)updateOldFavTag:(id)arg1 toNewFavTag:(id)arg2;
- (_Bool)haveFTS5Index:(id)arg1;
- (unsigned int)asyncGetFTSFavDBInfoWhenComplete:(CDUnknownBlockType)arg1;
- (void)onFavSearchTaskResultChanged:(_Bool)arg1 taskObj:(id)arg2;
- (id)getAllSearchResultFor:(id)arg1 taskKey:(id)arg2;
- (unsigned int)getSearchItemTotalCountFor:(id)arg1 taskKey:(id)arg2;
- (unsigned int)getSearchItemCountFor:(id)arg1 taskKey:(id)arg2;
- (id)getSearchItemFor:(id)arg1 index:(unsigned int)arg2 taskKey:(id)arg3;
- (_Bool)hasSearchResultFor:(id)arg1 taskKey:(id)arg2;
- (_Bool)hasSearchDoneFor:(id)arg1 taskKey:(id)arg2;
- (void)cancelSearch:(id)arg1;
- (void)searchMoreForTask:(id)arg1;
- (void)syncSearch:(id)arg1 byType:(long long)arg2 andTags:(id)arg3 taskKey:(id)arg4;
- (void)asyncSearch:(id)arg1 byType:(long long)arg2 andTags:(id)arg3 taskKey:(id)arg4;
- (id)getLastQueryText:(id)arg1;
- (id)getArrLastQuerywords:(id)arg1;
- (id)getNewestQuery:(id)arg1;
- (void)setNewestQuery:(id)arg1 taskKey:(id)arg2;
- (id)getTaskForKey:(id)arg1 queryText:(id)arg2;
- (void)removeTaskForKey:(id)arg1;
- (void)makeTaskIfNil:(id)arg1;
- (id)getTaskForKey:(id)arg1;
- (void)initIndexMgr:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

