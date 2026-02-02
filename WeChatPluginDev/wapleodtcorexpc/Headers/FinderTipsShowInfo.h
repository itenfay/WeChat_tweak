//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AttributeTitle, ClientStatsInfo, FinderPopupShowInfo, FinderTipsShowInfo_DSLRender, FinderTipsShowInfo_IconConfig, FinderTipsShowInfo_IconSize, NSData, NSMutableArray, NSString;

@interface FinderTipsShowInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) AttributeTitle *attributeTitle; // @dynamic attributeTitle;
@property(retain, nonatomic) FinderTipsShowInfo_IconSize *bigCardImageSize; // @dynamic bigCardImageSize;
@property(nonatomic) unsigned int cacheChangeTabOption; // @dynamic cacheChangeTabOption;
@property(nonatomic) unsigned int clearType; // @dynamic clearType;
@property(retain, nonatomic) ClientStatsInfo *clientStatsInfo; // @dynamic clientStatsInfo;
@property(nonatomic) unsigned int coldTime; // @dynamic coldTime;
@property(nonatomic) unsigned int coldTimeLevel; // @dynamic coldTimeLevel;
@property(nonatomic) unsigned int count; // @dynamic count;
@property(retain, nonatomic) FinderTipsShowInfo_DSLRender *dslRender; // @dynamic dslRender;
@property(nonatomic) unsigned int exposeCountLimit; // @dynamic exposeCountLimit;
@property(nonatomic) unsigned int exposeLimitStrategy; // @dynamic exposeLimitStrategy;
@property(retain, nonatomic) FinderPopupShowInfo *finderPopupShowInfo; // @dynamic finderPopupShowInfo;
@property(retain, nonatomic) FinderTipsShowInfo_IconConfig *iconConfig; // @dynamic iconConfig;
@property(retain, nonatomic) NSString *iconUrl; // @dynamic iconUrl;
@property(nonatomic) unsigned int ignoreFreqLimit; // @dynamic ignoreFreqLimit;
@property(retain, nonatomic) NSString *language; // @dynamic language;
@property(retain, nonatomic) NSMutableArray *multiIconUrls; // @dynamic multiIconUrls;
@property(retain, nonatomic) NSString *parent; // @dynamic parent;
@property(retain, nonatomic) NSString *path; // @dynamic path;
@property(retain, nonatomic) NSData *showExtInfo; // @dynamic showExtInfo;
@property(nonatomic) unsigned int showExtInfoType; // @dynamic showExtInfoType;
@property(nonatomic) unsigned int showLiveTabId; // @dynamic showLiveTabId;
@property(nonatomic) unsigned int showType; // @dynamic showType;
@property(retain, nonatomic) NSMutableArray *swipeDownRevokeConfig; // @dynamic swipeDownRevokeConfig;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

