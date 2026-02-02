//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveNoticeListInfo, NSData, NSMutableArray;

@interface FetchFinderMemberShipDetailInfoResponse_VisitorNonMemberInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLiveNoticeListInfo *liveNoticeListInfo; // @dynamic liveNoticeListInfo;
@property(retain, nonatomic) NSData *liveShortLastBuffer; // @dynamic liveShortLastBuffer;
@property(retain, nonatomic) NSMutableArray *liveShortList; // @dynamic liveShortList;
@property(nonatomic) unsigned int otherLiveNum; // @dynamic otherLiveNum;
@property(nonatomic) unsigned int otherVideoNum; // @dynamic otherVideoNum;
@property(retain, nonatomic) NSMutableArray *previewDynamic; // @dynamic previewDynamic;
@property(retain, nonatomic) NSMutableArray *previewLive; // @dynamic previewLive;
@property(nonatomic) unsigned long long previewLiveLastUpdateTime; // @dynamic previewLiveLastUpdateTime;
@property(retain, nonatomic) NSMutableArray *previewLiveList; // @dynamic previewLiveList;
@property(retain, nonatomic) NSMutableArray *previewVideo; // @dynamic previewVideo;
@property(nonatomic) unsigned long long previewVideoLastUpdateTime; // @dynamic previewVideoLastUpdateTime;
@property(retain, nonatomic) NSMutableArray *previewVideoList; // @dynamic previewVideoList;
@property(nonatomic) unsigned int totalDynamicNum; // @dynamic totalDynamicNum;
@property(retain, nonatomic) NSData *videoShortLastBuffer; // @dynamic videoShortLastBuffer;
@property(retain, nonatomic) NSMutableArray *videoShortList; // @dynamic videoShortList;

@end

