//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSString;

@interface WCFinderProfileNewLifePageDataProvider : NSObject
{
    _Bool _author;
    _Bool _selfUser;
    _Bool _skipFirstPage;
    _Bool _hasMore;
    int _scene;
    int _fetchUserPageScene;
    CDUnknownBlockType _reloadHandler;
    CDUnknownBlockType _appendHandler;
    CDUnknownBlockType _deleteHandler;
    CDUnknownBlockType _moveHandler;
    CDUnknownBlockType _postHandler;
    NSString *_finderUsername;
    NSMutableArray *_innerCardViewModelList;
    NSData *_lastBuffer;
    long long _likeCount;
    long long _globalFavoriteCount;
    long long _shareCount;
    long long _heartLikeCount;
    long long _totalFeedCount;
}

+ (id)cardViewModelFromDataItem:(id)arg1 scene:(int)arg2 isAuthor:(_Bool)arg3 isSelfUser:(_Bool)arg4;
+ (_Bool)checkSelfFinderUsername:(id)arg1;
+ (long long)indexForPostSuccessInsertion:(id)arg1;
+ (_Bool)mergeData:(id)arg1 fromLocalData:(id)arg2;
+ (long long)indexForLocalInsertion:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long totalFeedCount; // @synthesize totalFeedCount=_totalFeedCount;
@property(nonatomic) long long heartLikeCount; // @synthesize heartLikeCount=_heartLikeCount;
@property(nonatomic) long long shareCount; // @synthesize shareCount=_shareCount;
@property(nonatomic) long long globalFavoriteCount; // @synthesize globalFavoriteCount=_globalFavoriteCount;
@property(nonatomic) long long likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) _Bool skipFirstPage; // @synthesize skipFirstPage=_skipFirstPage;
@property(retain, nonatomic) NSMutableArray *innerCardViewModelList; // @synthesize innerCardViewModelList=_innerCardViewModelList;
@property(nonatomic, getter=isSelfUser) _Bool selfUser; // @synthesize selfUser=_selfUser;
@property(nonatomic, getter=isAuthor) _Bool author; // @synthesize author=_author;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(copy, nonatomic) CDUnknownBlockType postHandler; // @synthesize postHandler=_postHandler;
@property(copy, nonatomic) CDUnknownBlockType moveHandler; // @synthesize moveHandler=_moveHandler;
@property(copy, nonatomic) CDUnknownBlockType deleteHandler; // @synthesize deleteHandler=_deleteHandler;
@property(copy, nonatomic) CDUnknownBlockType appendHandler; // @synthesize appendHandler=_appendHandler;
@property(copy, nonatomic) CDUnknownBlockType reloadHandler; // @synthesize reloadHandler=_reloadHandler;
@property(nonatomic) int fetchUserPageScene; // @synthesize fetchUserPageScene=_fetchUserPageScene;
@property(nonatomic) int scene; // @synthesize scene=_scene;
- (void)onNewLifePostSessionUpLoadSuccessful:(id)arg1;
- (void)onNewLifePostSessionStartUpload:(id)arg1;
- (void)onNewLifePostSessionStartCompress:(id)arg1;
- (void)onFinderDataItemDelete:(id)arg1;
- (id)cardViewModelFromDataItem:(id)arg1;
- (void)requestDataWithFirstPage:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)createUserPageParams;
- (id)getLocalCardViewModelList;
- (void)updateCache;
- (_Bool)attemptLoadFromCache;
- (void)loadFromPrefetchedResponse:(id)arg1;
- (void)prepare;
- (id)cardViewModelList;
- (id)initWithFinderUsername:(id)arg1 isAuthor:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

