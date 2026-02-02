//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, NSString, RevokeMsgRequest;

@interface RevokeInfo : NSObject
{
    unsigned int _counter;
    long long _type;
    long long _processState;
    NSString *_nsChatName;
    CMessageWrap *_msgWrap;
    NSString *_revokeTicket;
    unsigned long long _initTime;
    unsigned long long _cost;
    long long _result;
    RevokeMsgRequest *_request;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RevokeMsgRequest *request; // @synthesize request=_request;
@property(nonatomic) long long result; // @synthesize result=_result;
@property(nonatomic) unsigned long long cost; // @synthesize cost=_cost;
@property(nonatomic) unsigned long long initTime; // @synthesize initTime=_initTime;
@property(retain, nonatomic) NSString *revokeTicket; // @synthesize revokeTicket=_revokeTicket;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
@property(retain, nonatomic) NSString *nsChatName; // @synthesize nsChatName=_nsChatName;
@property(nonatomic) unsigned int counter; // @synthesize counter=_counter;
@property(nonatomic) long long processState; // @synthesize processState=_processState;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)getMsgClientID:(id)arg1;
- (id)generateRevokeRequest;
- (id)initWithMsgWrap:(id)arg1 ChatName:(id)arg2 Counter:(unsigned int)arg3 revokeTicket:(id)arg4;

@end

