//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSString;

@interface MMListenRoomHeartBeatRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *categoryId; // @dynamic categoryId;
@property(retain, nonatomic) NSData *cookie; // @dynamic cookie;
@property(retain, nonatomic) NSString *listenId; // @dynamic listenId;
@property(nonatomic) _Bool offline; // @dynamic offline;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

