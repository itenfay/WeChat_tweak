//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderComment;

@interface WCFinderDeleteCommentCGI
{
    int _commentScene;
    WCFinderComment *_comment;
    NSString *_tid;
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
    unsigned long long _rootCommentID;
    unsigned long long _scene;
    NSString *_sessionBuffer;
}

- (void).cxx_destruct;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) NSString *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long rootCommentID; // @synthesize rootCommentID=_rootCommentID;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(retain, nonatomic) WCFinderComment *comment; // @synthesize comment=_comment;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithComment:(id)arg1 tid:(id)arg2 rootCommentID:(unsigned long long)arg3 scene:(unsigned long long)arg4 sessionBuffer:(id)arg5 commentScene:(int)arg6 successful:(CDUnknownBlockType)arg7 failure:(CDUnknownBlockType)arg8;

@end

