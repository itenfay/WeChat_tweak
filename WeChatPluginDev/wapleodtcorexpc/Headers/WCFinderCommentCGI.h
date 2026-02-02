//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString, WCFinderComment;

@interface WCFinderCommentCGI
{
    unsigned int _bypassBufferType;
    WCFinderComment *_comment;
    NSString *_replayUserName;
    unsigned long long _objectID;
    unsigned long long _rootCommentID;
    NSString *_username;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    unsigned long long _scene;
    NSString *_nonceID;
    NSString *_sessionBuffer;
    NSData *_bypassBuffer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *bypassBuffer; // @synthesize bypassBuffer=_bypassBuffer;
@property(nonatomic) unsigned int bypassBufferType; // @synthesize bypassBufferType=_bypassBufferType;
@property(retain, nonatomic) NSString *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(copy, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) unsigned long long rootCommentID; // @synthesize rootCommentID=_rootCommentID;
@property(nonatomic) unsigned long long objectID; // @synthesize objectID=_objectID;
@property(retain, nonatomic) NSString *replayUserName; // @synthesize replayUserName=_replayUserName;
@property(retain, nonatomic) WCFinderComment *comment; // @synthesize comment=_comment;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)additionalUdfKVInfo;
- (void)createPostRequest;
- (void)internalInitCommentCGIWith:(id)arg1 username:(id)arg2 scene:(unsigned long long)arg3 objectID:(unsigned long long)arg4 nonceID:(id)arg5 sessionBuffer:(id)arg6 bypassBufferType:(int)arg7 bypassBuffer:(id)arg8 successBlock:(CDUnknownBlockType)arg9 failureBlock:(CDUnknownBlockType)arg10;
- (id)initCommentCGIWith:(id)arg1 username:(id)arg2 scene:(unsigned long long)arg3 objectID:(unsigned long long)arg4 nonceID:(id)arg5 sessionBuffer:(id)arg6 bypassBufferType:(unsigned int)arg7 bypassBuffer:(id)arg8 successBlock:(CDUnknownBlockType)arg9 failureBlock:(CDUnknownBlockType)arg10;
- (id)initCommentCGIWith:(id)arg1 username:(id)arg2 scene:(unsigned long long)arg3 objectID:(unsigned long long)arg4 nonceID:(id)arg5 sessionBuffer:(id)arg6 successBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;

@end

