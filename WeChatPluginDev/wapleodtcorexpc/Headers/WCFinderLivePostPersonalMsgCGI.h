//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveAppMsg, NSData, NSString, WCFinderDataItem;

@interface WCFinderLivePostPersonalMsgCGI
{
    unsigned int _msgType;
    NSString *_localClientMsgId;
    FinderLiveAppMsg *_appMsg;
    WCFinderDataItem *_dataItem;
    NSData *_liveCookies;
    NSString *_sessionId;
    NSString *_finderUserName;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

+ (_Bool)isErrorTypeNotNeedRetry:(int)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSString *finderUserName; // @synthesize finderUserName=_finderUserName;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) unsigned int msgType; // @synthesize msgType=_msgType;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) FinderLiveAppMsg *appMsg; // @synthesize appMsg=_appMsg;
@property(retain, nonatomic) NSString *localClientMsgId; // @synthesize localClientMsgId=_localClientMsgId;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithLiveTaskId:(id)arg1 finderDataItem:(id)arg2 sessionId:(id)arg3 liveCookies:(id)arg4 clientMsgId:(id)arg5 uploadAppMsg:(id)arg6 successBlock:(CDUnknownBlockType)arg7 failBlock:(CDUnknownBlockType)arg8;
- (id)initWithLiveTaskId:(id)arg1 finderDataItem:(id)arg2 msgType:(unsigned int)arg3 sessionId:(id)arg4 liveCookies:(id)arg5 fromUser:(id)arg6 toUser:(id)arg7 content:(id)arg8 clientMsgId:(id)arg9 successBlock:(CDUnknownBlockType)arg10 failBlock:(CDUnknownBlockType)arg11;

@end

