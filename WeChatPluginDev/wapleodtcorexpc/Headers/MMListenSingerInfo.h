//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenSingerInfo_JumpInfo, NSString;

@interface MMListenSingerInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int albumNum; // @dynamic albumNum;
@property(nonatomic) unsigned long long feedId; // @dynamic feedId;
@property(retain, nonatomic) MMListenSingerInfo_JumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(retain, nonatomic) NSString *schemaUrl; // @dynamic schemaUrl;
@property(retain, nonatomic) NSString *singerCategoryId; // @dynamic singerCategoryId;
@property(retain, nonatomic) NSString *singerId; // @dynamic singerId;
@property(retain, nonatomic) NSString *singerName; // @dynamic singerName;
@property(retain, nonatomic) NSString *singerPic; // @dynamic singerPic;
@property(nonatomic) unsigned int songNum; // @dynamic songNum;
@property(retain, nonatomic) NSString *translateSingerName; // @dynamic translateSingerName;

@end

