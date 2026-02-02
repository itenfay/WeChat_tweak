//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveFanClubContacts, FinderLiveFanClubInfo_Bulletin, NSString;

@interface FinderLiveFanClubInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLiveFanClubContacts *anchorContacts; // @dynamic anchorContacts;
@property(retain, nonatomic) FinderLiveFanClubInfo_Bulletin *bulletin; // @dynamic bulletin;
@property(nonatomic) _Bool clubCreated; // @dynamic clubCreated;
@property(retain, nonatomic) NSString *clubName; // @dynamic clubName;
@property(nonatomic) unsigned int defaultIntimacy; // @dynamic defaultIntimacy;
@property(retain, nonatomic) NSString *detailPageUrl; // @dynamic detailPageUrl;
@property(nonatomic) _Bool enableBulletin; // @dynamic enableBulletin;
@property(nonatomic) _Bool enableFanClub; // @dynamic enableFanClub;
@property(nonatomic) unsigned int intimacyRefreshInterval; // @dynamic intimacyRefreshInterval;
@property(nonatomic) _Bool isSuperFanClub; // @dynamic isSuperFanClub;
@property(nonatomic) unsigned int memberCount; // @dynamic memberCount;
@property(nonatomic) unsigned int superFansCount; // @dynamic superFansCount;
@property(retain, nonatomic) NSString *upgradePageUrl; // @dynamic upgradePageUrl;

@end

