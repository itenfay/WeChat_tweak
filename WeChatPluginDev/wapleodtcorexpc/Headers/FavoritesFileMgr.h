//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavoritesFileRetainCountDB, NSMutableArray, NSString;

@interface FavoritesFileMgr
{
    FavoritesFileRetainCountDB *_frcDB;
    NSMutableArray *m_checkFileItemIdList;
    _Bool _forbidCheck;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool forbidCheck; // @synthesize forbidCheck=_forbidCheck;
- (void)checkAndCleanUnRetainFileWithFavItem:(id)arg1;
- (id)getRetainMd5ByLocalId:(unsigned int)arg1;
- (void)addItemToCheckFileList:(id)arg1;
- (_Bool)decFileRetainCountByMd5:(id)arg1 IsThumb:(_Bool)arg2 ItemLocalId:(unsigned int)arg3 DataFmt:(id)arg4;
- (_Bool)incFileRetainCountByMd5:(id)arg1 andItemLocalId:(unsigned int)arg2 dataFmt:(id)arg3;
- (void)initDB:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

