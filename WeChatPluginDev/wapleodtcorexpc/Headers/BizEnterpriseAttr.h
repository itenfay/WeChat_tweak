//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BannerTips, ChatConfig, NSMutableArray, NSString;

@interface BizEnterpriseAttr : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BannerTips *bannerTips; // @dynamic bannerTips;
@property(retain, nonatomic) NSString *brandUserName; // @dynamic brandUserName;
@property(retain, nonatomic) ChatConfig *chatConfig; // @dynamic chatConfig;
@property(retain, nonatomic) NSString *colleageInviteJumpUrl; // @dynamic colleageInviteJumpUrl;
@property(retain, nonatomic) NSString *colleageInviteTitle; // @dynamic colleageInviteTitle;
@property(nonatomic) unsigned long long corpid; // @dynamic corpid;
@property(retain, nonatomic) NSMutableArray *hiddenAppUsernameList; // @dynamic hiddenAppUsernameList;
@property(nonatomic) _Bool hideColleageInvite; // @dynamic hideColleageInvite;
@property(retain, nonatomic) NSMutableArray *homeContacts; // @dynamic homeContacts;
@property(nonatomic) _Bool isChatOpened; // @dynamic isChatOpened;
@property(nonatomic) unsigned int qyUin; // @dynamic qyUin;
@property(nonatomic) _Bool showConfirm; // @dynamic showConfirm;
@property(nonatomic) unsigned int unreadCnt; // @dynamic unreadCnt;
@property(nonatomic) _Bool usePresetBannerTips; // @dynamic usePresetBannerTips;
@property(nonatomic) unsigned int userFlag; // @dynamic userFlag;
@property(nonatomic) unsigned int userType; // @dynamic userType;
@property(nonatomic) unsigned int userUin; // @dynamic userUin;
@property(nonatomic) unsigned long long vid; // @dynamic vid;
@property(nonatomic) unsigned int wwMaxExposeTimes; // @dynamic wwMaxExposeTimes;

@end

