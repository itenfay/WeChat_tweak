//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCFinderLikeCGIParam;

@interface WCFinderLikeCGI
{
    int _likeFlag;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    unsigned long long _scene;
    WCFinderLikeCGIParam *_param;
    unsigned long long _objectID;
    unsigned long long _commentID;
    unsigned long long _reportScene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long reportScene; // @synthesize reportScene=_reportScene;
@property(nonatomic) unsigned long long commentID; // @synthesize commentID=_commentID;
@property(nonatomic) int likeFlag; // @synthesize likeFlag=_likeFlag;
@property(nonatomic) unsigned long long objectID; // @synthesize objectID=_objectID;
@property(retain, nonatomic) WCFinderLikeCGIParam *param; // @synthesize param=_param;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)initFriendsLikeCGIWith:(unsigned long long)arg1 nonceID:(id)arg2 reportScene:(int)arg3 scene:(unsigned long long)arg4 commentID:(unsigned long long)arg5 finderUsername:(id)arg6 likeUsername:(id)arg7 isLike:(_Bool)arg8 sessionBuffer:(id)arg9 successBlock:(CDUnknownBlockType)arg10 failureBlock:(CDUnknownBlockType)arg11;
- (id)additionalUdfKVInfo;
- (id)likeRequestWithParam:(id)arg1;
- (id)initCommentLikeWithParam:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (id)initFeedLikeCGIWithParam:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;

@end

