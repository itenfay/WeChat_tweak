//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AddressInfo, NSData, NSMutableArray, NSString;

@interface OfflineStoreInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) AddressInfo *addressInfo; // @dynamic addressInfo;
@property(nonatomic) unsigned int endBusinessHour; // @dynamic endBusinessHour;
@property(nonatomic) unsigned int endBusinessMinute; // @dynamic endBusinessMinute;
@property(retain, nonatomic) NSData *merchantAnnouncement; // @dynamic merchantAnnouncement;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) unsigned int startBusinessHour; // @dynamic startBusinessHour;
@property(nonatomic) unsigned int startBusinessMinute; // @dynamic startBusinessMinute;
@property(retain, nonatomic) NSMutableArray *storeHeadImg; // @dynamic storeHeadImg;

@end

