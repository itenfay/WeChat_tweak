//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderActivateLiveMicRequest_MicInfo, FinderBaseRequest, NSData, NSMutableArray, NSString;

@interface FinderActivateLiveMicRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned long long clientTimestampMs; // @dynamic clientTimestampMs;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(retain, nonatomic) NSData *liveCookies; // @dynamic liveCookies;
@property(nonatomic) unsigned long long liveId; // @dynamic liveId;
@property(retain, nonatomic) NSString *liveMicId; // @dynamic liveMicId;
@property(retain, nonatomic) NSMutableArray *micInfoList; // @dynamic micInfoList;
@property(nonatomic) unsigned int micType; // @dynamic micType;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(retain, nonatomic) NSString *objectNonceId; // @dynamic objectNonceId;
@property(retain, nonatomic) NSMutableArray *otherLiveMicInfoList; // @dynamic otherLiveMicInfoList;
@property(nonatomic) unsigned int reportScene; // @dynamic reportScene;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) FinderActivateLiveMicRequest_MicInfo *selfAnchorMicInfo; // @dynamic selfAnchorMicInfo;
@property(retain, nonatomic) NSMutableArray *selfAudienceMicInfoList; // @dynamic selfAudienceMicInfoList;
@property(retain, nonatomic) NSMutableArray *unrecognizedAudienceMicInfoList; // @dynamic unrecognizedAudienceMicInfoList;

@end

