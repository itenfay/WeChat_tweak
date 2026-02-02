//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveEndRelatedLiveContainerInfo, FinderLiveTabInfo, FinderLiveTabListContainerInfo, FinderThemeLiveContainerInfo, NSData, NSMutableArray, NSString;

@interface FinderLiveStreamContainer : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *cardList; // @dynamic cardList;
@property(nonatomic) unsigned int containerId; // @dynamic containerId;
@property(retain, nonatomic) NSData *containerLastBuffer; // @dynamic containerLastBuffer;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(nonatomic) unsigned int countRestrict; // @dynamic countRestrict;
@property(retain, nonatomic) NSString *iconUrl; // @dynamic iconUrl;
@property(retain, nonatomic) FinderLiveTabInfo *jumpTabInfo; // @dynamic jumpTabInfo;
@property(retain, nonatomic) FinderLiveEndRelatedLiveContainerInfo *liveEndRelatedLiveContainerInfo; // @dynamic liveEndRelatedLiveContainerInfo;
@property(retain, nonatomic) FinderLiveTabListContainerInfo *liveTabListContainerInfo; // @dynamic liveTabListContainerInfo;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) unsigned int nextPagePullType; // @dynamic nextPagePullType;
@property(retain, nonatomic) FinderThemeLiveContainerInfo *themeLiveContainerInfo; // @dynamic themeLiveContainerInfo;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(retain, nonatomic) NSMutableArray *wordingColor; // @dynamic wordingColor;

@end

