//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveAppMsg, FinderWindowProductInfo, NSData, NSString, WCFinderDataItem;

@interface WCFinderPostLiveAppMsgCGI
{
    unsigned int _msgType;
    unsigned int _liveScene;
    WCFinderDataItem *_dataItem;
    NSData *_liveCookies;
    unsigned long long _quoteMsgSeq;
    NSString *_finderUserName;
    NSString *_localClientMsgId;
    FinderLiveAppMsg *_appMsg;
    FinderWindowProductInfo *_questionProductInfo;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) FinderWindowProductInfo *questionProductInfo; // @synthesize questionProductInfo=_questionProductInfo;
@property(retain, nonatomic) FinderLiveAppMsg *appMsg; // @synthesize appMsg=_appMsg;
@property(retain, nonatomic) NSString *localClientMsgId; // @synthesize localClientMsgId=_localClientMsgId;
@property(retain, nonatomic) NSString *finderUserName; // @synthesize finderUserName=_finderUserName;
@property(nonatomic) unsigned long long quoteMsgSeq; // @synthesize quoteMsgSeq=_quoteMsgSeq;
@property(nonatomic) unsigned int liveScene; // @synthesize liveScene=_liveScene;
@property(nonatomic) unsigned int msgType; // @synthesize msgType=_msgType;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)setMsgBoxId:(id)arg1;
- (void)setMsgPayload:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithLiveTaskIdForProductQuestion:(id)arg1 finderDataItem:(id)arg2 msgType:(unsigned int)arg3 liveScene:(unsigned int)arg4 liveCookies:(id)arg5 content:(id)arg6 productInfo:(id)arg7 clientMsgId:(id)arg8 boxId:(id)arg9 extraInfo:(id)arg10 successBlock:(CDUnknownBlockType)arg11 failBlock:(CDUnknownBlockType)arg12;
- (id)initWithLiveTaskIdForFriendChat:(id)arg1 finderDataItem:(id)arg2 liveScene:(unsigned int)arg3 msgType:(unsigned int)arg4 content:(id)arg5 liveCookies:(id)arg6 clientMsgId:(id)arg7 boxId:(id)arg8 extraInfo:(id)arg9 successBlock:(CDUnknownBlockType)arg10 failBlock:(CDUnknownBlockType)arg11;
- (id)initWithLiveTaskId:(id)arg1 finderDataItem:(id)arg2 msgType:(unsigned int)arg3 liveScene:(unsigned int)arg4 liveCookies:(id)arg5 atUsers:(id)arg6 atContent:(id)arg7 clientMsgId:(id)arg8 boxId:(id)arg9 extraInfo:(id)arg10 successBlock:(CDUnknownBlockType)arg11 failBlock:(CDUnknownBlockType)arg12;
- (id)initWithLiveTaskId:(id)arg1 finderDataItem:(id)arg2 msgType:(unsigned int)arg3 liveScene:(unsigned int)arg4 liveCookies:(id)arg5 toUser:(id)arg6 replyConten:(id)arg7 clientMsgId:(id)arg8 location:(id)arg9 poiAddrSubStr:(id)arg10 likeMsg:(id)arg11 boxId:(id)arg12 extraInfo:(id)arg13 successBlock:(CDUnknownBlockType)arg14 failBlock:(CDUnknownBlockType)arg15;
- (id)initWithLiveTaskId:(id)arg1 finderDataItem:(id)arg2 msgType:(unsigned int)arg3 liveScene:(unsigned int)arg4 liveCookies:(id)arg5 toUser:(id)arg6 replyConten:(id)arg7 clientMsgId:(id)arg8 successBlock:(CDUnknownBlockType)arg9 failBlock:(CDUnknownBlockType)arg10;
- (id)initWithLiveTaskId:(id)arg1 finderDataItem:(id)arg2 msgType:(unsigned int)arg3 liveScene:(unsigned int)arg4 liveCookies:(id)arg5 quoteSeq:(unsigned long long)arg6 finderUserName:(id)arg7 successBlock:(CDUnknownBlockType)arg8 failBlock:(CDUnknownBlockType)arg9;
- (id)initWithLiveTaskId:(id)arg1 finderDataItem:(id)arg2 msgType:(unsigned int)arg3 liveScene:(unsigned int)arg4 liveCookies:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failBlock:(CDUnknownBlockType)arg7;

@end

