//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveClientStatus, NSData, NSString;

@interface WCFinderFeedStreamGetLiveMsgCGI
{
    _Bool _offline;
    int _commentScene;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    long long _scene;
    NSData *_liveCookies;
    unsigned long long _liveId;
    unsigned long long _objectID;
    NSString *_objectNonceID;
    NSString *_sessionExtraKey;
    FinderLiveClientStatus *_liveClientStatus;
}

- (void).cxx_destruct;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) FinderLiveClientStatus *liveClientStatus; // @synthesize liveClientStatus=_liveClientStatus;
@property(retain, nonatomic) NSString *sessionExtraKey; // @synthesize sessionExtraKey=_sessionExtraKey;
@property(retain, nonatomic) NSString *objectNonceID; // @synthesize objectNonceID=_objectNonceID;
@property(nonatomic) unsigned long long objectID; // @synthesize objectID=_objectID;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
@property(nonatomic) _Bool offline; // @synthesize offline=_offline;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (_Bool)shouldAutoProcessingToastWithError:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFinderDataItem:(id)arg1 liveCookies:(id)arg2 offline:(_Bool)arg3 scene:(long long)arg4 commentScene:(int)arg5 sessionExtraKey:(id)arg6 liveTaskId:(id)arg7 successBlock:(CDUnknownBlockType)arg8 failBlock:(CDUnknownBlockType)arg9;

@end

