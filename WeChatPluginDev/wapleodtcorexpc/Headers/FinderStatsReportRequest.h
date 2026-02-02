//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderClientStatus, MegaVideoClientStatus, NSData, NSMutableArray, NSString;

@interface FinderStatsReportRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) long long clientTimeMs; // @dynamic clientTimeMs;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(retain, nonatomic) NSData *reqExtData; // @dynamic reqExtData;
@property(retain, nonatomic) NSMutableArray *stats; // @dynamic stats;
@property(retain, nonatomic) FinderClientStatus *status; // @dynamic status;
@property(retain, nonatomic) MegaVideoClientStatus *videoStatus; // @dynamic videoStatus;

@end

