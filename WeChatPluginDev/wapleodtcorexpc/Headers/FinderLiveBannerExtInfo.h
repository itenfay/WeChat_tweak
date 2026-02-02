//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface FinderLiveBannerExtInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (_Bool)modelCustomTransformFromDictionary:(id)arg1 forConfigTag:(id)arg2;

// Remaining properties
@property(nonatomic) unsigned int activityId; // @dynamic activityId;
@property(retain, nonatomic) NSString *backgroundColor; // @dynamic backgroundColor;
@property(retain, nonatomic) NSString *backgroundGradientColor; // @dynamic backgroundGradientColor;
@property(nonatomic) unsigned int backgroundSource; // @dynamic backgroundSource;
@property(retain, nonatomic) NSString *buttonColor; // @dynamic buttonColor;
@property(nonatomic) _Bool disableShare; // @dynamic disableShare;
@property(nonatomic) unsigned int displayIntervalMs; // @dynamic displayIntervalMs;
@property(retain, nonatomic) NSString *dynamicWording; // @dynamic dynamicWording;
@property(retain, nonatomic) NSString *id; // @dynamic id;
@property(nonatomic) _Bool isShowSubIconPag; // @dynamic isShowSubIconPag;
@property(nonatomic) unsigned int needCache; // @dynamic needCache;
@property(nonatomic) unsigned int needPreload; // @dynamic needPreload;
@property(nonatomic) unsigned int preloadDelayMs; // @dynamic preloadDelayMs;
@property(nonatomic) unsigned int preloadInterval; // @dynamic preloadInterval;
@property(nonatomic) unsigned int reportNewCgi; // @dynamic reportNewCgi;
@property(nonatomic) unsigned int reportSwitch; // @dynamic reportSwitch;
@property(retain, nonatomic) NSString *subIconUrl; // @dynamic subIconUrl;
@property(retain, nonatomic) NSMutableArray *subTitleList; // @dynamic subTitleList;
@property(nonatomic) unsigned int version; // @dynamic version;
@property(retain, nonatomic) NSString *wordingColor; // @dynamic wordingColor;

@end

