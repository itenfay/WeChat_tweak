//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString, WCFinderDataItem;

@interface WCFinderPostLiveLikeCGI
{
    int _msgType;
    unsigned long long _likeCount;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    WCFinderDataItem *_dataItem;
    NSData *_liveCookies;
    unsigned long long _commentSeq;
    NSString *_clientMsgId;
    long long _likeScene;
    long long _opType;
    long long _likeSource;
}

- (void).cxx_destruct;
@property(nonatomic) long long likeSource; // @synthesize likeSource=_likeSource;
@property(nonatomic) long long opType; // @synthesize opType=_opType;
@property(nonatomic) long long likeScene; // @synthesize likeScene=_likeScene;
@property(nonatomic) int msgType; // @synthesize msgType=_msgType;
@property(copy, nonatomic) NSString *clientMsgId; // @synthesize clientMsgId=_clientMsgId;
@property(nonatomic) unsigned long long commentSeq; // @synthesize commentSeq=_commentSeq;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) unsigned long long likeCount; // @synthesize likeCount=_likeCount;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createCommentLikeRequest;
- (void)createRequest;
- (id)initWithFinderTaskId:(id)arg1 liveCookies:(id)arg2 commentSeq:(unsigned long long)arg3 clientMsgId:(id)arg4 msgType:(unsigned int)arg5 successBlock:(CDUnknownBlockType)arg6 failBlock:(CDUnknownBlockType)arg7;
- (id)initWithFinderTaskId:(id)arg1 likeCount:(unsigned long long)arg2 liveCookies:(id)arg3 likeScene:(long long)arg4 opType:(long long)arg5 likeSource:(long long)arg6 successBlock:(CDUnknownBlockType)arg7 failBlock:(CDUnknownBlockType)arg8;

@end

