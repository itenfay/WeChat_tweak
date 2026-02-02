//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface ForeignHbReceiveResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int hbStatus; // @dynamic hbStatus;
@property(nonatomic) unsigned int hbType; // @dynamic hbType;
@property(nonatomic) unsigned int isSender; // @dynamic isSender;
@property(nonatomic) _Bool jumpH5; // @dynamic jumpH5;
@property(nonatomic) unsigned int receiveStatus; // @dynamic receiveStatus;
@property(nonatomic) unsigned int retcode; // @dynamic retcode;
@property(retain, nonatomic) NSString *retmsg; // @dynamic retmsg;
@property(retain, nonatomic) NSString *sendId; // @dynamic sendId;
@property(retain, nonatomic) NSString *sendUserName; // @dynamic sendUserName;
@property(retain, nonatomic) NSString *statusMess; // @dynamic statusMess;
@property(retain, nonatomic) NSString *timingIdentifier; // @dynamic timingIdentifier;
@property(retain, nonatomic) NSString *wishing; // @dynamic wishing;

@end

