//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString;

@interface CheckCanSubscribeBizRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *androidPackNameList; // @dynamic androidPackNameList;
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *extInfo; // @dynamic extInfo;
@property(retain, nonatomic) NSString *fromUrl; // @dynamic fromUrl;
@property(retain, nonatomic) NSString *iosBunddleId; // @dynamic iosBunddleId;
@property(nonatomic) unsigned int packNum; // @dynamic packNum;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned int source; // @dynamic source;
@property(retain, nonatomic) NSString *toUserName; // @dynamic toUserName;

@end

