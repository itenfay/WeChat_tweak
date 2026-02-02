//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderContact, NSData, NSString;

@interface FinderVideoTemplateTopicInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderContact *contact; // @dynamic contact;
@property(nonatomic) unsigned int originTemplateCount; // @dynamic originTemplateCount;
@property(retain, nonatomic) NSString *templateCreatorH5Url; // @dynamic templateCreatorH5Url;
@property(nonatomic) unsigned int templateFlag; // @dynamic templateFlag;
@property(retain, nonatomic) NSString *templateMusicId; // @dynamic templateMusicId;
@property(retain, nonatomic) NSData *videoTemplate; // @dynamic videoTemplate;

@end

