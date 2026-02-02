//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString, WCFinderDataItem;

@interface WCFinderLiveTopCommentCGI
{
    unsigned int _optype;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    WCFinderDataItem *_dataItem;
    NSData *_liveCookies;
    unsigned long long _commentSeq;
    NSString *_clientMsgId;
    NSString *_oriClientMsgId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int optype; // @synthesize optype=_optype;
@property(copy, nonatomic) NSString *oriClientMsgId; // @synthesize oriClientMsgId=_oriClientMsgId;
@property(copy, nonatomic) NSString *clientMsgId; // @synthesize clientMsgId=_clientMsgId;
@property(nonatomic) unsigned long long commentSeq; // @synthesize commentSeq=_commentSeq;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFinderTaskId:(id)arg1 liveCookies:(id)arg2 commentSeq:(unsigned long long)arg3 clientMsgId:(id)arg4 originalClientMsgId:(id)arg5 optype:(unsigned int)arg6 successBlock:(CDUnknownBlockType)arg7 failBlock:(CDUnknownBlockType)arg8;

@end

