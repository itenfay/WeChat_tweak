//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MediaList;

@interface ConsultInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int consultType; // @dynamic consultType;
@property(nonatomic) unsigned int contactType; // @dynamic contactType;
@property(nonatomic) unsigned int content; // @dynamic content;
@property(nonatomic) unsigned long long createTime; // @dynamic createTime;
@property(retain, nonatomic) MediaList *mediaList; // @dynamic mediaList;

@end

