//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface GetMoreGameListRequest_V2 : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int classifyId; // @dynamic classifyId;
@property(retain, nonatomic) NSString *country; // @dynamic country;
@property(nonatomic) unsigned int gameType; // @dynamic gameType;
@property(retain, nonatomic) NSString *lang; // @dynamic lang;
@property(nonatomic) unsigned int limit; // @dynamic limit;
@property(nonatomic) unsigned int offSet; // @dynamic offSet;

@end

