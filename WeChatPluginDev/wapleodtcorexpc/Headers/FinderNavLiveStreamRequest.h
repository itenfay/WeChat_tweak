//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, ClientSpecificConfig, FinderBaseRequest, FinderClientStatus, FinderLbsTabTipsInfo, FinderLiveBeforeJoinLiveRoomStatus, FinderLiveClientStatus, FinderLiveDiscoverPreloadInfo, FinderLiveReportBaseInfo, FinderLiveTabInfo, FinderPressureCtrl, FinderSwitch, NSData, NSMutableArray, NSString;

@interface FinderNavLiveStreamRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) FinderLiveBeforeJoinLiveRoomStatus *beforeJoinLiveRoomStatus; // @dynamic beforeJoinLiveRoomStatus;
@property(retain, nonatomic) NSString *byPass; // @dynamic byPass;
@property(retain, nonatomic) ClientSpecificConfig *clientSpecConfig; // @dynamic clientSpecConfig;
@property(retain, nonatomic) NSMutableArray *containerContext; // @dynamic containerContext;
@property(nonatomic) unsigned int containerId; // @dynamic containerId;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) FinderSwitch *finderSwitch; // @dynamic finderSwitch;
@property(retain, nonatomic) NSString *fromCommentScene; // @dynamic fromCommentScene;
@property(nonatomic) unsigned int fromScene; // @dynamic fromScene;
@property(nonatomic) unsigned int isFreqControl; // @dynamic isFreqControl;
@property(retain, nonatomic) NSData *jumpNavliveBuffer; // @dynamic jumpNavliveBuffer;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(nonatomic) float latitude; // @dynamic latitude;
@property(retain, nonatomic) FinderLbsTabTipsInfo *lbsTabTipsInfo; // @dynamic lbsTabTipsInfo;
@property(retain, nonatomic) FinderLiveDiscoverPreloadInfo *liveDiscoverPreloadInfo; // @dynamic liveDiscoverPreloadInfo;
@property(retain, nonatomic) FinderLiveReportBaseInfo *liveReportBaseInfo; // @dynamic liveReportBaseInfo;
@property(retain, nonatomic) FinderLiveClientStatus *liveStatus; // @dynamic liveStatus;
@property(retain, nonatomic) FinderLiveTabInfo *liveTab; // @dynamic liveTab;
@property(nonatomic) float longitude; // @dynamic longitude;
@property(retain, nonatomic) NSMutableArray *markUnreadObjectList; // @dynamic markUnreadObjectList;
@property(retain, nonatomic) NSData *preNavliveMoreLiveObjectsBuffer; // @dynamic preNavliveMoreLiveObjectsBuffer;
@property(retain, nonatomic) FinderPressureCtrl *pressureCtrl; // @dynamic pressureCtrl;
@property(nonatomic) unsigned int pullType; // @dynamic pullType;
@property(retain, nonatomic) NSMutableArray *readStats; // @dynamic readStats;
@property(nonatomic) unsigned long long relatedObjectId; // @dynamic relatedObjectId;
@property(retain, nonatomic) FinderClientStatus *status; // @dynamic status;

@end

