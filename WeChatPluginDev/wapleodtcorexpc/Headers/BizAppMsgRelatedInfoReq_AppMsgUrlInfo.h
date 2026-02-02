//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface BizAppMsgRelatedInfoReq_AppMsgUrlInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *clientId; // @dynamic clientId;
@property(nonatomic) unsigned long long commentTopicId; // @dynamic commentTopicId;
@property(nonatomic) unsigned int itemShowType; // @dynamic itemShowType;
@property(nonatomic) unsigned int reqType; // @dynamic reqType;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

