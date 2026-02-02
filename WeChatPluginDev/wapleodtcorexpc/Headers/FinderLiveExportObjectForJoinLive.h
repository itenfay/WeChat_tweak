//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLivePurchaseInfo, NSString;

@interface FinderLiveExportObjectForJoinLive : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *coverUrl; // @dynamic coverUrl;
@property(retain, nonatomic) NSString *description; // @dynamic description;
@property(retain, nonatomic) NSString *headUrl; // @dynamic headUrl;
@property(nonatomic) unsigned long long liveId; // @dynamic liveId;
@property(retain, nonatomic) NSString *nickname; // @dynamic nickname;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(retain, nonatomic) NSString *objectNonceId; // @dynamic objectNonceId;
@property(retain, nonatomic) FinderLivePurchaseInfo *purchaseInfo; // @dynamic purchaseInfo;
@property(nonatomic) unsigned int secondaryDeviceFlag; // @dynamic secondaryDeviceFlag;
@property(retain, nonatomic) NSString *sessionBuffer; // @dynamic sessionBuffer;
@property(retain, nonatomic) NSString *streamUrl; // @dynamic streamUrl;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

