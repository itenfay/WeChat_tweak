//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface TextStatusLikeReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *clientId; // @dynamic clientId;
@property(nonatomic) unsigned int deleteFlag; // @dynamic deleteFlag;
@property(nonatomic) unsigned int source; // @dynamic source;
@property(retain, nonatomic) NSString *textStatusId; // @dynamic textStatusId;
@property(nonatomic) unsigned int time; // @dynamic time;
@property(retain, nonatomic) NSString *topicId; // @dynamic topicId;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

