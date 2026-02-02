//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderContact, FinderPoiStreamNearbyInfo, FinderPoiStreamResponse_PoiPrepare, FinderPoiStreamTabList, FinderPreloadInfo, NSData, NSMutableArray, NSString, SnsPoiDetail;

@interface FinderPoiStreamResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int addressSubLabelType; // @dynamic addressSubLabelType;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) FinderContact *contact; // @dynamic contact;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(nonatomic) unsigned int currentTabId; // @dynamic currentTabId;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(nonatomic) unsigned int nearbyFlag; // @dynamic nearbyFlag;
@property(retain, nonatomic) FinderPoiStreamNearbyInfo *nearbyInfo; // @dynamic nearbyInfo;
@property(retain, nonatomic) NSString *noticeWording; // @dynamic noticeWording;
@property(retain, nonatomic) NSMutableArray *object; // @dynamic object;
@property(nonatomic) unsigned int onlyShowPoiName; // @dynamic onlyShowPoiName;
@property(nonatomic) unsigned int poiFriendLikeCount; // @dynamic poiFriendLikeCount;
@property(retain, nonatomic) FinderPoiStreamResponse_PoiPrepare *poiPrepare; // @dynamic poiPrepare;
@property(nonatomic) unsigned int prefetchCount; // @dynamic prefetchCount;
@property(retain, nonatomic) FinderPreloadInfo *preloadInfo; // @dynamic preloadInfo;
@property(retain, nonatomic) SnsPoiDetail *snsPoiDetail; // @dynamic snsPoiDetail;
@property(retain, nonatomic) FinderPoiStreamTabList *tabList; // @dynamic tabList;
@property(nonatomic) unsigned int totalFeedsCount; // @dynamic totalFeedsCount;

@end

