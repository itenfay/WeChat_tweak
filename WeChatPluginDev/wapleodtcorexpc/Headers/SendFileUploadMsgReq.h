//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString, SendFileUploadMsgFileInfo;

@interface SendFileUploadMsgReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int action; // @dynamic action;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *clientMsgId; // @dynamic clientMsgId;
@property(retain, nonatomic) SendFileUploadMsgFileInfo *fileInfo; // @dynamic fileInfo;
@property(retain, nonatomic) NSString *fileUploadToken; // @dynamic fileUploadToken;
@property(retain, nonatomic) NSString *lanInfo; // @dynamic lanInfo;
@property(retain, nonatomic) NSString *toUserName; // @dynamic toUserName;
@property(nonatomic) unsigned int version; // @dynamic version;

@end

