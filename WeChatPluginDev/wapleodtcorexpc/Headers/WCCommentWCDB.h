//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCTDatabase, WCTTable;

@interface WCCommentWCDB : NSObject
{
    WCTTable *_postingCommentTable;
    WCTDatabase *_dataBase;
    NSString *_dbPath;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *dbPath; // @synthesize dbPath=_dbPath;
@property(retain, nonatomic) WCTDatabase *dataBase; // @synthesize dataBase=_dataBase;
@property(retain, nonatomic) WCTTable *postingCommentTable; // @synthesize postingCommentTable=_postingCommentTable;
- (_Bool)refreshPostingCommentWithTid:(id)arg1 byFetchComments:(id)arg2;
- (id)getPostingFailCommentWithTid:(id)arg1 scene:(unsigned long long)arg2;
- (id)getPostingCommentFailMergeOfTid;
- (unsigned long long)getPostingCommentsTidCount;
- (unsigned long long)getPostingCommentsCountOfTid:(id)arg1;
- (id)getPostingSubCommentsWithTid:(id)arg1;
- (id)getPostingRootCommentsWithTid:(id)arg1 scene:(unsigned long long)arg2;
- (_Bool)deleteObjectFailCommentWithTid:(id)arg1;
- (_Bool)markObjectFailSubCommentsReadWithTid:(id)arg1 rootCommentID:(unsigned long long)arg2;
- (_Bool)markObjectFailCommentsReadWithTid:(id)arg1 scene:(unsigned long long)arg2;
- (_Bool)hasPostingFailComment;
- (id)getPostingFailComment;
- (_Bool)markPostingCommentFail:(id)arg1;
- (_Bool)postingCommentSuccessful:(id)arg1;
- (_Bool)deleteAllPostingSubCommentWithComment:(id)arg1;
- (_Bool)deletePostingComment:(id)arg1;
- (_Bool)addPostingComment:(id)arg1;
- (id)createTableWithTableName:(id)arg1 objectClass:(Class)arg2;
- (_Bool)createPostingCommentTable;
- (void)createTable;
- (void)dealloc;
- (_Bool)setupDatabase;
- (id)initWithDbPath:(id)arg1;
- (id)init;

@end

