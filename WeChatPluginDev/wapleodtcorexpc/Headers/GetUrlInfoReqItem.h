//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface GetUrlInfoReqItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *msgUserName; // @dynamic msgUserName;
@property(retain, nonatomic) NSString *objId; // @dynamic objId;
@property(retain, nonatomic) NSString *sessionName; // @dynamic sessionName;
@property(nonatomic) unsigned int sessionType; // @dynamic sessionType;
@property(retain, nonatomic) NSString *url; // @dynamic url;
@property(nonatomic) unsigned int urlType; // @dynamic urlType;

@end

