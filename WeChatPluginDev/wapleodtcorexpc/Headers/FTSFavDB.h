//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FTSDB, NSMutableSet;

@interface FTSFavDB : NSObject
{
    FTSDB *_database;
    _Bool _hasCheckOriginTags;
    _Bool _checkOriginTagsSuccess;
    NSMutableSet *_favOriginalTag;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool checkOriginTagsSuccess; // @synthesize checkOriginTagsSuccess=_checkOriginTagsSuccess;
@property(nonatomic) _Bool hasCheckOriginTags; // @synthesize hasCheckOriginTags=_hasCheckOriginTags;
@property(retain, nonatomic) NSMutableSet *favOriginalTag; // @synthesize favOriginalTag=_favOriginalTag;
- (void)saveWithOriginalTags:(id)arg1 needSaveFlag:(_Bool)arg2;
- (id)getOriginTag:(id)arg1;
- (void)checkWithOriginTags:(id)arg1 needSaveFlag:(_Bool)arg2;
- (void)appendTagOf:(id)arg1;
- (void)saveFavOriginTags;
- (void)loadFavOriginTags;
- (id)getFavOriginTagPath;
- (id)getFavItemLocalIdByTag:(id)arg1;
- (id)getTagsMatch:(id)arg1;
- (id)getAllFavTag;
- (_Bool)updateTagIndexFor:(id)arg1;
- (_Bool)updateOldFavTag:(id)arg1 toNewFavTag:(id)arg2;
- (_Bool)clearFavFTS3Table;
- (_Bool)clearFavFTS5Table;
- (id)queryTextInFavFTS5Table:(id)arg1 byType:(long long)arg2 tags:(id)arg3 cancelBlock:(CDUnknownBlockType)arg4;
- (_Bool)deleteRowsInFavFTS5Table:(id)arg1;
- (_Bool)insertOrUpdateRowsInFavFTS5Table:(id)arg1 updateCount:(unsigned int *)arg2;
- (unsigned int)getMaxUnsyncLocalId;
- (unsigned int)getMaxFavFts5UpdateSeq;
- (_Bool)haveFTS5Index:(id)arg1;
- (void)checkFTS5State;
- (void)dealloc;
- (unsigned int)getAllIndexCount;
- (_Bool)initDB:(id)arg1;

@end

