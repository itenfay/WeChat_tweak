//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveGetUserGameConfigResponse_Weapp, GameLiveJoinTeamSettingInfo, NSMutableArray, NSString;

@interface FinderLiveGetUserGameConfigResponse_GameAppInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(retain, nonatomic) NSString *appName; // @dynamic appName;
@property(nonatomic) unsigned int appStatus; // @dynamic appStatus;
@property(retain, nonatomic) NSString *captureModeTips; // @dynamic captureModeTips;
@property(retain, nonatomic) NSString *defaultLiveCoverUrl; // @dynamic defaultLiveCoverUrl;
@property(retain, nonatomic) NSString *downloadUrl; // @dynamic downloadUrl;
@property(retain, nonatomic) GameLiveJoinTeamSettingInfo *gameLiveJoinTeamSettingInfo; // @dynamic gameLiveJoinTeamSettingInfo;
@property(nonatomic) unsigned int gameShowType; // @dynamic gameShowType;
@property(nonatomic) unsigned int gameType; // @dynamic gameType;
@property(nonatomic) _Bool hasStickers; // @dynamic hasStickers;
@property(retain, nonatomic) NSString *iconUrl; // @dynamic iconUrl;
@property(nonatomic) unsigned int isFirstLive; // @dynamic isFirstLive;
@property(retain, nonatomic) NSString *jumpGameParam; // @dynamic jumpGameParam;
@property(nonatomic) unsigned int lastJoinTeamUpSetting; // @dynamic lastJoinTeamUpSetting;
@property(nonatomic) unsigned int minMemSize; // @dynamic minMemSize;
@property(retain, nonatomic) NSString *packageMd5; // @dynamic packageMd5;
@property(retain, nonatomic) NSString *packageName; // @dynamic packageName;
@property(nonatomic) unsigned long long packageSize; // @dynamic packageSize;
@property(retain, nonatomic) NSString *stickersManagementUrl; // @dynamic stickersManagementUrl;
@property(retain, nonatomic) NSMutableArray *supportLiveType; // @dynamic supportLiveType;
@property(retain, nonatomic) NSMutableArray *supportLiveTypeNew; // @dynamic supportLiveTypeNew;
@property(nonatomic) unsigned int versionCode; // @dynamic versionCode;
@property(retain, nonatomic) FinderLiveGetUserGameConfigResponse_Weapp *weapp; // @dynamic weapp;

@end

