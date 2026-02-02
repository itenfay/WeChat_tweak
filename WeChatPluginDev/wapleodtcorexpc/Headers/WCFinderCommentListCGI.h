//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderGetCommentListCtx, NSData, NSString;

@interface WCFinderCommentListCGI
{
    _Bool _fetchObject;
    int _scene;
    int _pullScene;
    unsigned long long _objectId;
    unsigned long long _refCommentID;
    unsigned long long _rootCommentID;
    NSData *_lastBuffer;
    CDUnknownBlockType _successBlock;
    NSString *_finderUsername;
    CDUnknownBlockType _failBlock;
    unsigned long long _direction;
    NSString *_nonceID;
    unsigned long long _identityScene;
    NSData *_likeListBuffer;
    FinderGetCommentListCtx *_commentCtx;
    NSString *_enterSessionId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *enterSessionId; // @synthesize enterSessionId=_enterSessionId;
@property(retain, nonatomic) FinderGetCommentListCtx *commentCtx; // @synthesize commentCtx=_commentCtx;
@property(retain, nonatomic) NSData *likeListBuffer; // @synthesize likeListBuffer=_likeListBuffer;
@property(nonatomic) int pullScene; // @synthesize pullScene=_pullScene;
@property(nonatomic) unsigned long long identityScene; // @synthesize identityScene=_identityScene;
@property(copy, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property(nonatomic) _Bool fetchObject; // @synthesize fetchObject=_fetchObject;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) unsigned long long rootCommentID; // @synthesize rootCommentID=_rootCommentID;
@property(nonatomic) unsigned long long refCommentID; // @synthesize refCommentID=_refCommentID;
@property(nonatomic) unsigned long long objectId; // @synthesize objectId=_objectId;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)customSuccessfulRetCodeArray;
- (_Bool)needADDeviceInfo;
- (void)createRequest;
- (id)requestWithObjectid:(unsigned long long)arg1 nonceID:(id)arg2 scene:(int)arg3 pullScene:(int)arg4 identityScene:(unsigned long long)arg5 lastBuffer:(id)arg6 rootCommentID:(unsigned long long)arg7 direction:(unsigned long long)arg8 successBlock:(CDUnknownBlockType)arg9 failureBlock:(CDUnknownBlockType)arg10;
- (id)requestWithObjectid:(unsigned long long)arg1 nonceID:(id)arg2 scene:(int)arg3 enterSessionId:(id)arg4 pullScene:(int)arg5 identityScene:(unsigned long long)arg6 lastBuffer:(id)arg7 refCommentID:(unsigned long long)arg8 direction:(unsigned long long)arg9 commentRequestCtx:(id)arg10 successBlock:(CDUnknownBlockType)arg11 failureBlock:(CDUnknownBlockType)arg12;
- (id)init;

@end

