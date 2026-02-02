//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class CustomGiftText, FinderLiveGift_ResourceUrl, NSMutableArray, NSString;

@interface CustomGiftInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLiveGift_ResourceUrl *backupAnimation; // @dynamic backupAnimation;
@property(retain, nonatomic) FinderLiveGift_ResourceUrl *backupLandscapeAnimation; // @dynamic backupLandscapeAnimation;
@property(retain, nonatomic) FinderLiveGift_ResourceUrl *backupPreview; // @dynamic backupPreview;
@property(retain, nonatomic) FinderLiveGift_ResourceUrl *backupThumbnail; // @dynamic backupThumbnail;
@property(retain, nonatomic) CustomGiftText *customGiftText; // @dynamic customGiftText;
@property(retain, nonatomic) FinderLiveGift_ResourceUrl *engine; // @dynamic engine;
@property(retain, nonatomic) NSMutableArray *giftComponentList; // @dynamic giftComponentList;
@property(nonatomic) _Bool hasCustomized; // @dynamic hasCustomized;
@property(retain, nonatomic) NSString *key; // @dynamic key;
@property(retain, nonatomic) NSString *minCodeVersion; // @dynamic minCodeVersion;
@property(retain, nonatomic) NSMutableArray *resourceList; // @dynamic resourceList;

@end

