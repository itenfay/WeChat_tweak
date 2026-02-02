//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderClientStatus, MarkReadStat, NSData, NSMutableArray, NSString, NewLifeTabItem, NewLifeTabTipsInfo;

@interface NewLifeStreamRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSMutableArray *existedCacheObjects; // @dynamic existedCacheObjects;
@property(retain, nonatomic) NSMutableArray *existedFinderObjects; // @dynamic existedFinderObjects;
@property(retain, nonatomic) NSMutableArray *existedTabList; // @dynamic existedTabList;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSMutableArray *historyQueryList; // @dynamic historyQueryList;
@property(retain, nonatomic) NSMutableArray *hobbyInfo; // @dynamic hobbyInfo;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(retain, nonatomic) MarkReadStat *lastReadStat; // @dynamic lastReadStat;
@property(nonatomic) float latitude; // @dynamic latitude;
@property(nonatomic) float longitude; // @dynamic longitude;
@property(retain, nonatomic) NSString *newlifeSearchByPassInfo; // @dynamic newlifeSearchByPassInfo;
@property(retain, nonatomic) NewLifeTabItem *newlifeTab; // @dynamic newlifeTab;
@property(retain, nonatomic) NewLifeTabTipsInfo *newlifeTabTipsInfo; // @dynamic newlifeTabTipsInfo;
@property(retain, nonatomic) NSMutableArray *otherTabLastBuffer; // @dynamic otherTabLastBuffer;
@property(nonatomic) unsigned int pullType; // @dynamic pullType;
@property(retain, nonatomic) NSMutableArray *readStats; // @dynamic readStats;
@property(retain, nonatomic) FinderClientStatus *status; // @dynamic status;
@property(retain, nonatomic) NSMutableArray *unreadObjects; // @dynamic unreadObjects;

@end

