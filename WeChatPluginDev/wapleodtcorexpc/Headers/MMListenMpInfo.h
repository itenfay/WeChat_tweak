//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface MMListenMpInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *audioId; // @dynamic audioId;
@property(retain, nonatomic) NSString *audioUrl; // @dynamic audioUrl;
@property(nonatomic) unsigned int bizuin; // @dynamic bizuin;
@property(retain, nonatomic) NSString *mpCtxJson; // @dynamic mpCtxJson;
@property(nonatomic) unsigned int mpType; // @dynamic mpType;
@property(nonatomic) unsigned int sourceType; // @dynamic sourceType;
@property(retain, nonatomic) NSString *webUrl; // @dynamic webUrl;

@end

