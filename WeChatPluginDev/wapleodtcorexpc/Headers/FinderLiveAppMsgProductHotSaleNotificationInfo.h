//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveNumericAnimationRuleInfo, FinderWindowProductInfo, NSString;

@interface FinderLiveAppMsgProductHotSaleNotificationInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *entryWording; // @dynamic entryWording;
@property(nonatomic) unsigned int notificationType; // @dynamic notificationType;
@property(retain, nonatomic) NSString *notifycationWording; // @dynamic notifycationWording;
@property(retain, nonatomic) FinderLiveNumericAnimationRuleInfo *numAnimationInfo; // @dynamic numAnimationInfo;
@property(retain, nonatomic) NSString *numDelimiterStr; // @dynamic numDelimiterStr;
@property(nonatomic) unsigned int priority; // @dynamic priority;
@property(retain, nonatomic) FinderWindowProductInfo *productInfo; // @dynamic productInfo;

@end

