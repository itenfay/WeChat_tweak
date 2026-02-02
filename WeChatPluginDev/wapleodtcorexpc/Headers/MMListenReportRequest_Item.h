//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface MMListenReportRequest_Item : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *albumCategoryId; // @dynamic albumCategoryId;
@property(retain, nonatomic) NSString *categoryId; // @dynamic categoryId;
@property(retain, nonatomic) NSString *categoryName; // @dynamic categoryName;
@property(retain, nonatomic) NSString *discoverId; // @dynamic discoverId;
@property(retain, nonatomic) NSString *discoverLineId; // @dynamic discoverLineId;
@property(retain, nonatomic) NSString *h5Url; // @dynamic h5Url;
@property(retain, nonatomic) NSString *listenId; // @dynamic listenId;
@property(retain, nonatomic) NSString *playSameSongId; // @dynamic playSameSongId;
@property(nonatomic) int playScene; // @dynamic playScene;
@property(retain, nonatomic) NSString *recommendId; // @dynamic recommendId;
@property(nonatomic) unsigned long long relatedListRequestId; // @dynamic relatedListRequestId;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(retain, nonatomic) NSString *singerCategoryId; // @dynamic singerCategoryId;
@property(retain, nonatomic) NSString *tabSessionId; // @dynamic tabSessionId;
@property(nonatomic) int timeCur; // @dynamic timeCur;
@property(nonatomic) int timeCurMs; // @dynamic timeCurMs;
@property(nonatomic) int timeListen; // @dynamic timeListen;
@property(nonatomic) int timeListenMs; // @dynamic timeListenMs;
@property(nonatomic) int timeTotal; // @dynamic timeTotal;
@property(nonatomic) int timeTotalMs; // @dynamic timeTotalMs;
@property(nonatomic) int type; // @dynamic type;

@end

