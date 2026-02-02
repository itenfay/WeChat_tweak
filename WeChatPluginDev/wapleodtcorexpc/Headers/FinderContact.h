//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AchievementInfo, FinderAuthInfo, FinderContactClubInfo, FinderContactExtInfo, FinderContactLiveInfo, FinderContactMsgInfo, FinderContactPrivacyInfo, FinderGuestInfo, FinderLiveNoticeInfo, FinderOriginalInfo, NSMutableArray, NSString;

@interface FinderContact : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (id)archivedWCTValue;

// Remaining properties
@property(nonatomic) unsigned long long additionalFlag; // @dynamic additionalFlag;
@property(retain, nonatomic) AchievementInfo *archievementInfo; // @dynamic archievementInfo;
@property(retain, nonatomic) FinderAuthInfo *authInfo; // @dynamic authInfo;
@property(retain, nonatomic) NSMutableArray *bindInfo; // @dynamic bindInfo;
@property(retain, nonatomic) FinderContactClubInfo *clubInfo; // @dynamic clubInfo;
@property(nonatomic) unsigned int coverEntranceFlag; // @dynamic coverEntranceFlag;
@property(retain, nonatomic) NSString *coverImgUrl; // @dynamic coverImgUrl;
@property(retain, nonatomic) NSString *coverUrl; // @dynamic coverUrl;
@property(nonatomic) unsigned int extFlag; // @dynamic extFlag;
@property(retain, nonatomic) FinderContactExtInfo *extInfo; // @dynamic extInfo;
@property(nonatomic) unsigned int fansCount; // @dynamic fansCount;
@property(nonatomic) unsigned int feedCount; // @dynamic feedCount;
@property(nonatomic) unsigned int followFlag; // @dynamic followFlag;
@property(nonatomic) unsigned int followTime; // @dynamic followTime;
@property(nonatomic) unsigned int foreignUserFlag; // @dynamic foreignUserFlag;
@property(nonatomic) unsigned int friendFollowCount; // @dynamic friendFollowCount;
@property(retain, nonatomic) FinderGuestInfo *guestInfo; // @dynamic guestInfo;
@property(retain, nonatomic) NSString *headUrl; // @dynamic headUrl;
@property(retain, nonatomic) NSString *liveCoverImgUrl; // @dynamic liveCoverImgUrl;
@property(retain, nonatomic) FinderContactLiveInfo *liveInfo; // @dynamic liveInfo;
@property(retain, nonatomic) FinderLiveNoticeInfo *liveNoticeInfo; // @dynamic liveNoticeInfo;
@property(nonatomic) unsigned int liveStatus; // @dynamic liveStatus;
@property(retain, nonatomic) NSString *loggingoutWording; // @dynamic loggingoutWording;
@property(retain, nonatomic) NSMutableArray *menu; // @dynamic menu;
@property(retain, nonatomic) FinderContactMsgInfo *msgInfo; // @dynamic msgInfo;
@property(retain, nonatomic) NSString *nickname; // @dynamic nickname;
@property(nonatomic) unsigned int oneTimeFlag; // @dynamic oneTimeFlag;
@property(nonatomic) unsigned int originalEntranceFlag; // @dynamic originalEntranceFlag;
@property(nonatomic) unsigned int originalFlag; // @dynamic originalFlag;
@property(retain, nonatomic) FinderOriginalInfo *originalInfo; // @dynamic originalInfo;
@property(retain, nonatomic) FinderContactPrivacyInfo *privacyInfo; // @dynamic privacyInfo;
@property(nonatomic) unsigned long long seq; // @dynamic seq;
@property(retain, nonatomic) NSString *signature; // @dynamic signature;
@property(nonatomic) unsigned int spamStatus; // @dynamic spamStatus;
@property(nonatomic) unsigned long long status; // @dynamic status;
@property(nonatomic) unsigned int userFlag; // @dynamic userFlag;
@property(nonatomic) unsigned int userMode; // @dynamic userMode;
@property(nonatomic) unsigned int userType; // @dynamic userType;
@property(retain, nonatomic) NSString *username; // @dynamic username;
@property(retain, nonatomic) NSString *vestNickname; // @dynamic vestNickname;
@property(retain, nonatomic) NSString *wxUsernameV5; // @dynamic wxUsernameV5;

@end

