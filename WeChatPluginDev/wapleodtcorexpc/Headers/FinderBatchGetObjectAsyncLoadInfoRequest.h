//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderBatchGetObjectAsyncLoadInfoRequest_UserLocation, NSMutableArray, NSString;

@interface FinderBatchGetObjectAsyncLoadInfoRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *clientUserAgent; // @dynamic clientUserAgent;
@property(nonatomic) unsigned int commentScene; // @dynamic commentScene;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(nonatomic) _Bool isRefresh; // @dynamic isRefresh;
@property(nonatomic) unsigned int liveReportScene; // @dynamic liveReportScene;
@property(nonatomic) unsigned int locationGeneratedTime; // @dynamic locationGeneratedTime;
@property(retain, nonatomic) NSMutableArray *objectUidList; // @dynamic objectUidList;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSMutableArray *scenes; // @dynamic scenes;
@property(nonatomic) unsigned int triggerScene; // @dynamic triggerScene;
@property(retain, nonatomic) FinderBatchGetObjectAsyncLoadInfoRequest_UserLocation *userLocation; // @dynamic userLocation;
@property(retain, nonatomic) NSString *uxinfo; // @dynamic uxinfo;

@end

