//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, ExtDeviceInfo, FinderBaseRequest, FinderLiveDynamicCardVersion, FinderLiveGetUserGameConfigRequest_GameCategoryInfo, NSString, PagingGetGamePlayTogetherDynamicItem;

@interface FinderLiveGetUserGameConfigRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) FinderLiveDynamicCardVersion *dynamicCardVersion; // @dynamic dynamicCardVersion;
@property(retain, nonatomic) ExtDeviceInfo *extDeviceInfo; // @dynamic extDeviceInfo;
@property(retain, nonatomic) NSString *extraAntiInfo; // @dynamic extraAntiInfo;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(retain, nonatomic) FinderLiveGetUserGameConfigRequest_GameCategoryInfo *gameCategoryInfo; // @dynamic gameCategoryInfo;
@property(retain, nonatomic) NSString *gameUserId; // @dynamic gameUserId;
@property(nonatomic) _Bool onlyNeedPlayTogetherInfo; // @dynamic onlyNeedPlayTogetherInfo;
@property(nonatomic) unsigned int opensdkVersion; // @dynamic opensdkVersion;
@property(retain, nonatomic) PagingGetGamePlayTogetherDynamicItem *pagingGetDynamicItem; // @dynamic pagingGetDynamicItem;
@property(nonatomic) unsigned int platformId; // @dynamic platformId;
@property(nonatomic) unsigned int scene; // @dynamic scene;

@end

