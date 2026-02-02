//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderLiveStreamGetAsyncLoadInfoRequest_UserLocation, NSMutableArray, NSString;

@interface FinderLiveStreamGetAsyncLoadInfoRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSMutableArray *cardInfoList; // @dynamic cardInfoList;
@property(retain, nonatomic) NSString *clientUserAgent; // @dynamic clientUserAgent;
@property(nonatomic) unsigned int commentScene; // @dynamic commentScene;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(nonatomic) _Bool isRefresh; // @dynamic isRefresh;
@property(retain, nonatomic) NSMutableArray *liveAggregationCardId; // @dynamic liveAggregationCardId;
@property(nonatomic) unsigned int liveReportScene; // @dynamic liveReportScene;
@property(retain, nonatomic) NSMutableArray *objectUidList; // @dynamic objectUidList;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSMutableArray *scenes; // @dynamic scenes;
@property(nonatomic) unsigned int triggerScene; // @dynamic triggerScene;
@property(retain, nonatomic) FinderLiveStreamGetAsyncLoadInfoRequest_UserLocation *userLocation; // @dynamic userLocation;
@property(retain, nonatomic) NSString *uxinfo; // @dynamic uxinfo;

@end

