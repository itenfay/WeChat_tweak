//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, NSData, NSString;

@interface FinderLiveGetLotteryRecordRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(retain, nonatomic) NSData *liveCookies; // @dynamic liveCookies;
@property(nonatomic) unsigned long long liveId; // @dynamic liveId;
@property(retain, nonatomic) NSString *lotteryId; // @dynamic lotteryId;
@property(retain, nonatomic) NSString *nonceId; // @dynamic nonceId;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(nonatomic) unsigned long long objectNonceId; // @dynamic objectNonceId;
@property(nonatomic) unsigned int scene; // @dynamic scene;

@end

