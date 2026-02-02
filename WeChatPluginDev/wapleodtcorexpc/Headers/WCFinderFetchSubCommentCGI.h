//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface WCFinderFetchSubCommentCGI
{
    int _scene;
    int _pullScene;
    unsigned long long _objectId;
    unsigned long long _refCommentID;
    NSData *_rootCommentLastBuffer;
    CDUnknownBlockType _successBlock;
    NSString *_finderUsername;
    CDUnknownBlockType _failBlock;
    unsigned long long _direction;
    NSString *_nonceID;
    unsigned long long _rootCommentID;
    unsigned long long _identityScene;
}

- (void).cxx_destruct;
@property(nonatomic) int pullScene; // @synthesize pullScene=_pullScene;
@property(nonatomic) unsigned long long identityScene; // @synthesize identityScene=_identityScene;
@property(nonatomic) unsigned long long rootCommentID; // @synthesize rootCommentID=_rootCommentID;
@property(copy, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSData *rootCommentLastBuffer; // @synthesize rootCommentLastBuffer=_rootCommentLastBuffer;
@property(nonatomic) unsigned long long refCommentID; // @synthesize refCommentID=_refCommentID;
@property(nonatomic) unsigned long long objectId; // @synthesize objectId=_objectId;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithObjectid:(unsigned long long)arg1 nonceID:(id)arg2 rootCommentID:(unsigned long long)arg3 scene:(int)arg4 pullScene:(int)arg5 identityScene:(unsigned long long)arg6 rootCommentLastBuffer:(id)arg7 direction:(unsigned long long)arg8 successBlock:(CDUnknownBlockType)arg9 failureBlock:(CDUnknownBlockType)arg10;

@end

