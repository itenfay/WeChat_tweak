//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderClientStatus, FinderLbsTabTipsInfo, FinderLiveBeforeJoinLiveRoomStatus, FinderLiveClientStatus, NSData, NSMutableArray, NSString, WCFinderLiveTabInfo, WCFinderRedDotCtrlInfo;

@interface WCFinderLiveStreamRequestModel : NSObject
{
    int _fromScene;
    int _commentScene;
    NSData *_lastBuffer;
    double _longitude;
    double _latitude;
    FinderClientStatus *_clientStatus;
    FinderLiveClientStatus *_liveClientStatus;
    unsigned long long _pullType;
    NSMutableArray *_readStats;
    NSMutableArray *_markUnreadList;
    NSString *_fromSceneStr;
    FinderLbsTabTipsInfo *_tabTipsInfo;
    NSString *_byPass;
    FinderLiveBeforeJoinLiveRoomStatus *_beforeJoinLiveStatus;
    unsigned long long _containerId;
    unsigned long long _relatedObjectId;
    NSMutableArray *_containerContext;
    WCFinderLiveTabInfo *_liveTabInfo;
    unsigned long long _cacheDurationInSeconds;
    WCFinderRedDotCtrlInfo *_ctrlInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderRedDotCtrlInfo *ctrlInfo; // @synthesize ctrlInfo=_ctrlInfo;
@property(nonatomic) unsigned long long cacheDurationInSeconds; // @synthesize cacheDurationInSeconds=_cacheDurationInSeconds;
@property(retain, nonatomic) WCFinderLiveTabInfo *liveTabInfo; // @synthesize liveTabInfo=_liveTabInfo;
@property(retain, nonatomic) NSMutableArray *containerContext; // @synthesize containerContext=_containerContext;
@property(nonatomic) unsigned long long relatedObjectId; // @synthesize relatedObjectId=_relatedObjectId;
@property(nonatomic) unsigned long long containerId; // @synthesize containerId=_containerId;
@property(retain, nonatomic) FinderLiveBeforeJoinLiveRoomStatus *beforeJoinLiveStatus; // @synthesize beforeJoinLiveStatus=_beforeJoinLiveStatus;
@property(retain, nonatomic) NSString *byPass; // @synthesize byPass=_byPass;
@property(retain, nonatomic) FinderLbsTabTipsInfo *tabTipsInfo; // @synthesize tabTipsInfo=_tabTipsInfo;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) NSString *fromSceneStr; // @synthesize fromSceneStr=_fromSceneStr;
@property(nonatomic) int fromScene; // @synthesize fromScene=_fromScene;
@property(retain, nonatomic) NSMutableArray *markUnreadList; // @synthesize markUnreadList=_markUnreadList;
@property(retain, nonatomic) NSMutableArray *readStats; // @synthesize readStats=_readStats;
@property(nonatomic) unsigned long long pullType; // @synthesize pullType=_pullType;
@property(retain, nonatomic) FinderLiveClientStatus *liveClientStatus; // @synthesize liveClientStatus=_liveClientStatus;
@property(retain, nonatomic) FinderClientStatus *clientStatus; // @synthesize clientStatus=_clientStatus;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;

@end

