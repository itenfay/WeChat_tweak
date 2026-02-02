//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface MMListenSimplePlayableInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (id)parseFromDictionary:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *author; // @dynamic author;
@property(retain, nonatomic) NSString *cover; // @dynamic cover;
@property(retain, nonatomic) NSData *ctxBuf; // @dynamic ctxBuf;
@property(nonatomic) int duration; // @dynamic duration;
@property(retain, nonatomic) NSString *finderExportId; // @dynamic finderExportId;
@property(retain, nonatomic) NSString *finderFeedId; // @dynamic finderFeedId;
@property(retain, nonatomic) NSString *finderNonceId; // @dynamic finderNonceId;
@property(retain, nonatomic) NSString *listenId; // @dynamic listenId;
@property(nonatomic) int playType; // @dynamic playType;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) int type; // @dynamic type;

@end

