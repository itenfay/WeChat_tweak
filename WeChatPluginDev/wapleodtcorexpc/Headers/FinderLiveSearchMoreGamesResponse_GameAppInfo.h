//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveSearchMoreGamesResponse_Weapp, NSString;

@interface FinderLiveSearchMoreGamesResponse_GameAppInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int appStatus; // @dynamic appStatus;
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) NSString *appname; // @dynamic appname;
@property(retain, nonatomic) NSString *defaultLiveCoverUrl; // @dynamic defaultLiveCoverUrl;
@property(retain, nonatomic) NSString *downloadUrl; // @dynamic downloadUrl;
@property(nonatomic) unsigned int gameType; // @dynamic gameType;
@property(retain, nonatomic) NSString *iconUrl; // @dynamic iconUrl;
@property(retain, nonatomic) NSString *packageMd5; // @dynamic packageMd5;
@property(retain, nonatomic) NSString *packageName; // @dynamic packageName;
@property(nonatomic) unsigned long long packageSize; // @dynamic packageSize;
@property(retain, nonatomic) NSString *shortAppname; // @dynamic shortAppname;
@property(nonatomic) unsigned int versionCode; // @dynamic versionCode;
@property(retain, nonatomic) FinderLiveSearchMoreGamesResponse_Weapp *weapp; // @dynamic weapp;

@end

