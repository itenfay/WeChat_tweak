//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveShopWindowAdItem_AdPage, FinderLiveShopWindowAdItem_Condition, NSString;

@interface FinderLiveShopWindowAdItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long adId; // @dynamic adId;
@property(retain, nonatomic) FinderLiveShopWindowAdItem_AdPage *adPage; // @dynamic adPage;
@property(retain, nonatomic) NSString *buttonText; // @dynamic buttonText;
@property(retain, nonatomic) FinderLiveShopWindowAdItem_Condition *condition; // @dynamic condition;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(retain, nonatomic) NSString *imgUrl; // @dynamic imgUrl;
@property(nonatomic) unsigned long long partnerAdId; // @dynamic partnerAdId;
@property(retain, nonatomic) NSString *platformName; // @dynamic platformName;
@property(nonatomic) unsigned int promoting; // @dynamic promoting;
@property(nonatomic) int resourceType; // @dynamic resourceType;
@property(nonatomic) unsigned int source; // @dynamic source;
@property(nonatomic) int subType; // @dynamic subType;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *uxinfo; // @dynamic uxinfo;

@end

