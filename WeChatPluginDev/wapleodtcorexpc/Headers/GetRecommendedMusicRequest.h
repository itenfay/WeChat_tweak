//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSMutableArray;

@interface GetRecommendedMusicRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) int bussId; // @dynamic bussId;
@property(retain, nonatomic) NSData *classifyResultData; // @dynamic classifyResultData;
@property(retain, nonatomic) NSMutableArray *imageData; // @dynamic imageData;
@property(nonatomic) float latitude; // @dynamic latitude;
@property(nonatomic) float longitude; // @dynamic longitude;
@property(nonatomic) unsigned int musicNum; // @dynamic musicNum;
@property(nonatomic) unsigned long long requestId; // @dynamic requestId;
@property(nonatomic) unsigned long long videoDuration; // @dynamic videoDuration;

@end

