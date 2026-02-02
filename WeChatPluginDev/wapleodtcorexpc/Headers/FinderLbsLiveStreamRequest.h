//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderClientStatus, FinderLbsTabTipsInfo, FinderLiveBeforeJoinLiveRoomStatus, FinderLiveClientStatus, FinderLiveTabInfo, FinderPressureCtrl, FinderSwitch, NSData, NSMutableArray, NSString;

@interface FinderLbsLiveStreamRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) FinderLiveBeforeJoinLiveRoomStatus *beforeJoinLiveRoomStatus; // @dynamic beforeJoinLiveRoomStatus;
@property(retain, nonatomic) NSString *byPass; // @dynamic byPass;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) FinderSwitch *finderSwitch; // @dynamic finderSwitch;
@property(nonatomic) unsigned int fromScene; // @dynamic fromScene;
@property(nonatomic) unsigned int isFreqControl; // @dynamic isFreqControl;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(nonatomic) float latitude; // @dynamic latitude;
@property(retain, nonatomic) FinderLbsTabTipsInfo *lbsTabTipsInfo; // @dynamic lbsTabTipsInfo;
@property(retain, nonatomic) FinderLiveClientStatus *liveStatus; // @dynamic liveStatus;
@property(retain, nonatomic) FinderLiveTabInfo *liveTab; // @dynamic liveTab;
@property(nonatomic) float longitude; // @dynamic longitude;
@property(retain, nonatomic) NSMutableArray *markUnreadObjectList; // @dynamic markUnreadObjectList;
@property(nonatomic) unsigned int needBannerCardStyle; // @dynamic needBannerCardStyle;
@property(nonatomic) unsigned int onlyFollowFeed; // @dynamic onlyFollowFeed;
@property(retain, nonatomic) FinderPressureCtrl *pressureCtrl; // @dynamic pressureCtrl;
@property(nonatomic) unsigned int pullType; // @dynamic pullType;
@property(retain, nonatomic) NSMutableArray *readStats; // @dynamic readStats;
@property(nonatomic) unsigned long long relatedObjectId; // @dynamic relatedObjectId;
@property(retain, nonatomic) FinderClientStatus *status; // @dynamic status;

@end

