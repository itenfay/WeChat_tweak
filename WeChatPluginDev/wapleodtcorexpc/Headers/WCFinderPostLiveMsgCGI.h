//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface WCFinderPostLiveMsgCGI
{
    int _msgType;
    unsigned int _isFloatMsg;
    unsigned int _pbFloatMsgType;
    NSString *_msgContent;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    NSData *_liveCookies;
    NSString *_clientMsgId;
    NSString *_nickName;
    NSString *_floatMsgProductId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *floatMsgProductId; // @synthesize floatMsgProductId=_floatMsgProductId;
@property(nonatomic) unsigned int pbFloatMsgType; // @synthesize pbFloatMsgType=_pbFloatMsgType;
@property(nonatomic) unsigned int isFloatMsg; // @synthesize isFloatMsg=_isFloatMsg;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(nonatomic) int msgType; // @synthesize msgType=_msgType;
@property(copy, nonatomic) NSString *clientMsgId; // @synthesize clientMsgId=_clientMsgId;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(copy, nonatomic) NSString *msgContent; // @synthesize msgContent=_msgContent;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFinderTaskId:(id)arg1 msgContent:(id)arg2 liveCookies:(id)arg3 clientMsgId:(id)arg4 msgType:(unsigned int)arg5 selfNickName:(id)arg6 extraInfo:(id)arg7 successBlock:(CDUnknownBlockType)arg8 failBlock:(CDUnknownBlockType)arg9;

@end

