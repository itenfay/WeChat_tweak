//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AudioPushShowInfo, MMListenCategoryItem, MMListenItem, NSData, NSString;

@interface AudioPushContent : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MMListenCategoryItem *categoryItem; // @dynamic categoryItem;
@property(retain, nonatomic) NSString *configType; // @dynamic configType;
@property(nonatomic) unsigned int contentType; // @dynamic contentType;
@property(retain, nonatomic) MMListenItem *listenItem; // @dynamic listenItem;
@property(retain, nonatomic) NSData *recommendBuffer; // @dynamic recommendBuffer;
@property(retain, nonatomic) AudioPushShowInfo *showInfo; // @dynamic showInfo;
@property(retain, nonatomic) NSString *uniqueId; // @dynamic uniqueId;

@end

