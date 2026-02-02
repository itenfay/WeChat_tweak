//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, BizFeedbackReq_AppMsgFeedbackMsg, BizFeedbackReq_BizFeedbackMsg, BizFeedbackReq_CardFeedbackMsg, NSMutableArray, NSString;

@interface BizFeedbackReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BizFeedbackReq_AppMsgFeedbackMsg *appMsgFeedbackInfo; // @dynamic appMsgFeedbackInfo;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) BizFeedbackReq_BizFeedbackMsg *bizFeedbackInfo; // @dynamic bizFeedbackInfo;
@property(retain, nonatomic) NSMutableArray *bizInfo; // @dynamic bizInfo;
@property(retain, nonatomic) BizFeedbackReq_CardFeedbackMsg *cardFeedbackInfo; // @dynamic cardFeedbackInfo;
@property(retain, nonatomic) NSString *cardId; // @dynamic cardId;
@property(nonatomic) unsigned int cardType; // @dynamic cardType;
@property(retain, nonatomic) NSString *event; // @dynamic event;
@property(retain, nonatomic) NSString *expType; // @dynamic expType;
@property(retain, nonatomic) NSString *extraData; // @dynamic extraData;
@property(retain, nonatomic) NSMutableArray *list; // @dynamic list;
@property(nonatomic) unsigned long long recId; // @dynamic recId;
@property(nonatomic) unsigned int style; // @dynamic style;

@end

