//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSMutableArray, NSString;

@interface MMListenVideoBgmListRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned long long bussId; // @dynamic bussId;
@property(retain, nonatomic) NSData *classifyResultData; // @dynamic classifyResultData;
@property(nonatomic) unsigned int count; // @dynamic count;
@property(retain, nonatomic) NSString *forRecommendExtraInfo; // @dynamic forRecommendExtraInfo;
@property(retain, nonatomic) NSMutableArray *imageData; // @dynamic imageData;
@property(nonatomic) float latitude; // @dynamic latitude;
@property(nonatomic) float longitude; // @dynamic longitude;
@property(retain, nonatomic) NSMutableArray *miaojianMusicIds; // @dynamic miaojianMusicIds;
@property(retain, nonatomic) NSData *sessionBuffer; // @dynamic sessionBuffer;
@property(nonatomic) int type; // @dynamic type;
@property(nonatomic) unsigned long long videoDuration; // @dynamic videoDuration;

@end

