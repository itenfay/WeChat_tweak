//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderVideoTemplateTopicInfo, NSString;

@interface FinderMusicInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (id)archivedWCTValue;

// Remaining properties
@property(retain, nonatomic) NSString *albumName; // @dynamic albumName;
@property(retain, nonatomic) NSString *albumThumbUrl; // @dynamic albumThumbUrl;
@property(retain, nonatomic) NSString *artist; // @dynamic artist;
@property(nonatomic) unsigned int chorusBegin; // @dynamic chorusBegin;
@property(nonatomic) unsigned int chorusEnd; // @dynamic chorusEnd;
@property(retain, nonatomic) NSString *docId; // @dynamic docId;
@property(nonatomic) unsigned int docType; // @dynamic docType;
@property(retain, nonatomic) NSString *floatThumbUrl; // @dynamic floatThumbUrl;
@property(retain, nonatomic) NSString *highUrl; // @dynamic highUrl;
@property(retain, nonatomic) NSString *identification; // @dynamic identification;
@property(nonatomic) unsigned int isTrySong; // @dynamic isTrySong;
@property(retain, nonatomic) NSString *lrcContent; // @dynamic lrcContent;
@property(retain, nonatomic) NSString *mediaStreamingUrl; // @dynamic mediaStreamingUrl;
@property(retain, nonatomic) NSString *messageExt; // @dynamic messageExt;
@property(retain, nonatomic) NSString *miniappInfo; // @dynamic miniappInfo;
@property(nonatomic) unsigned int musicFlag; // @dynamic musicFlag;
@property(nonatomic) unsigned int musicPlayLen; // @dynamic musicPlayLen;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) unsigned int payType; // @dynamic payType;
@property(retain, nonatomic) NSString *songId; // @dynamic songId;
@property(retain, nonatomic) FinderVideoTemplateTopicInfo *videoTemplateInfo; // @dynamic videoTemplateInfo;
@property(retain, nonatomic) NSString *webUrl; // @dynamic webUrl;

@end

