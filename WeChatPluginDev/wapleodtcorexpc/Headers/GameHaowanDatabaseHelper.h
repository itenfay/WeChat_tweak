//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCTDatabase, WCTTable;

@interface GameHaowanDatabaseHelper
{
    WCTDatabase *_db;
    WCTTable *_postInfoTable;
    WCTTable *_mediaInfoTable;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WCTTable *mediaInfoTable;
@property(readonly, nonatomic) WCTTable *postInfoTable;
@property(readonly, nonatomic) WCTDatabase *db;
- (id)queryAllUncompletedPostInfos;
- (_Bool)deleteAllMediaInfos;
- (_Bool)deleteAllPostInfos;
- (_Bool)deleteMediaInfoWithPostId:(id)arg1;
- (id)queryMediaInfosWithPostId:(id)arg1 mediaType:(unsigned int)arg2;
- (id)queryMediaInfosWithPostId:(id)arg1;
- (_Bool)deletePostInfo:(id)arg1;
- (id)queryAllPostInfo;
- (_Bool)existPostInfo:(id)arg1;
- (id)queryPostInfo:(id)arg1 containsMediaList:(_Bool)arg2;
- (id)queryPostInfo:(id)arg1;
- (_Bool)updateUploadStateWithPostId:(id)arg1 toState:(int)arg2;
- (_Bool)updatePostState:(id)arg1 toState:(int)arg2;
- (_Bool)updatePostInfo:(id)arg1;
- (_Bool)insertMediaInfo:(id)arg1;
- (_Bool)insertPostInfo:(id)arg1;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (void)loadDatabase;

@end

