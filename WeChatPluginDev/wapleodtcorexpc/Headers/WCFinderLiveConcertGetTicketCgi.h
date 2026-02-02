//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface WCFinderLiveConcertGetTicketCgi
{
    _Bool _receive;
    _Bool _needPageItem;
    unsigned int _opScene;
    NSString *_noticeId;
    NSString *_activityId;
    NSData *_liveCookies;
    NSString *_audienceFinderUsername;
    unsigned long long _objectID;
    unsigned long long _liveId;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    unsigned long long _paramSource;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long paramSource; // @synthesize paramSource=_paramSource;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) unsigned int opScene; // @synthesize opScene=_opScene;
@property(nonatomic) _Bool needPageItem; // @synthesize needPageItem=_needPageItem;
@property(nonatomic) _Bool receive; // @synthesize receive=_receive;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
@property(nonatomic) unsigned long long objectID; // @synthesize objectID=_objectID;
@property(retain, nonatomic) NSString *audienceFinderUsername; // @synthesize audienceFinderUsername=_audienceFinderUsername;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(retain, nonatomic) NSString *noticeId; // @synthesize noticeId=_noticeId;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetNoReceiveResponse:(id)arg1;
- (void)didGetReceiveResponse:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)createNoReceiveRequest;
- (void)createReceiveRequest;
- (void)createRequest;
- (id)initWithActivityId:(id)arg1 objectId:(unsigned long long)arg2 liveId:(unsigned long long)arg3 audienceFinderUsername:(id)arg4 receive:(_Bool)arg5 needPageItem:(_Bool)arg6 operationScene:(unsigned int)arg7 successBlock:(CDUnknownBlockType)arg8 failBlock:(CDUnknownBlockType)arg9;
- (id)initWithNoticeId:(id)arg1 activityId:(id)arg2 audienceFinderUsername:(id)arg3 receive:(_Bool)arg4 needPageItem:(_Bool)arg5 successBlock:(CDUnknownBlockType)arg6 failBlock:(CDUnknownBlockType)arg7;
- (id)initWithLiveTaskId:(id)arg1 liveCookies:(id)arg2 audienceFinderUsername:(id)arg3 receive:(_Bool)arg4 needPageItem:(_Bool)arg5 successBlock:(CDUnknownBlockType)arg6 failBlock:(CDUnknownBlockType)arg7;

@end

