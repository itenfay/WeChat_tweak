//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSString;

@interface SetTeenagerModePwdRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSData *code; // @dynamic code;
@property(retain, nonatomic) NSString *guardianUserName; // @dynamic guardianUserName;
@property(retain, nonatomic) NSString *identityNum; // @dynamic identityNum;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSString *ticket; // @dynamic ticket;
@property(nonatomic) unsigned int ticketType; // @dynamic ticketType;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

