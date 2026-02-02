//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderClientStatus, FinderCommByPass, FinderLbsTabTipsInfo, FinderLiveBeforeJoinLiveRoomStatus, FinderLiveClientStatus, FinderLiveReportBaseInfo, FinderPressureCtrl, NSData, NSMutableArray, NSString;

@interface FinderGetLiveRelatedListRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) FinderLiveBeforeJoinLiveRoomStatus *beforeJoinLiveRoomStatus; // @dynamic beforeJoinLiveRoomStatus;
@property(retain, nonatomic) NSString *byPass; // @dynamic byPass;
@property(retain, nonatomic) FinderCommByPass *commByPass; // @dynamic commByPass;
@property(nonatomic) int curObjectIndex; // @dynamic curObjectIndex;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(nonatomic) float latitude; // @dynamic latitude;
@property(retain, nonatomic) FinderLbsTabTipsInfo *lbsTabTipsInfo; // @dynamic lbsTabTipsInfo;
@property(retain, nonatomic) NSData *liveCookies; // @dynamic liveCookies;
@property(retain, nonatomic) FinderLiveReportBaseInfo *liveReportBaseInfo; // @dynamic liveReportBaseInfo;
@property(retain, nonatomic) FinderLiveClientStatus *liveStatus; // @dynamic liveStatus;
@property(nonatomic) float longitude; // @dynamic longitude;
@property(retain, nonatomic) NSData *navContainerLastBuffer; // @dynamic navContainerLastBuffer;
@property(retain, nonatomic) NSMutableArray *navContainerReadIds; // @dynamic navContainerReadIds;
@property(retain, nonatomic) NSData *navLastBuffer; // @dynamic navLastBuffer;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(retain, nonatomic) NSString *objectNonceId; // @dynamic objectNonceId;
@property(retain, nonatomic) FinderPressureCtrl *pressureCtrl; // @dynamic pressureCtrl;
@property(nonatomic) unsigned int pullType; // @dynamic pullType;
@property(retain, nonatomic) NSMutableArray *readStat; // @dynamic readStat;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *sessionBuffer; // @dynamic sessionBuffer;
@property(retain, nonatomic) FinderClientStatus *status; // @dynamic status;

@end

