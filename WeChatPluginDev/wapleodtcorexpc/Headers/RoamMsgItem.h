//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface RoamMsgItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(nonatomic) unsigned long long createTime; // @dynamic createTime;
@property(retain, nonatomic) NSString *fromUserName; // @dynamic fromUserName;
@property(retain, nonatomic) NSMutableArray *mediaId; // @dynamic mediaId;
@property(retain, nonatomic) NSMutableArray *mediaType; // @dynamic mediaType;
@property(retain, nonatomic) NSString *msgSource; // @dynamic msgSource;
@property(nonatomic) unsigned long long msgSvrId; // @dynamic msgSvrId;
@property(nonatomic) unsigned long long sequentId; // @dynamic sequentId;
@property(retain, nonatomic) NSString *toUserName; // @dynamic toUserName;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

