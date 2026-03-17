//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class FinderNotifySeiInfo_NotifySeatInfo, NSData;

@class WXPBGeneratedMessage;

@interface FinderNotifySeiInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long clientTimestampMs; // @dynamic clientTimestampMs;
@property(nonatomic) unsigned int notifyBitFlag; // @dynamic notifyBitFlag;
@property(retain, nonatomic) FinderNotifySeiInfo_NotifySeatInfo *notifySeatInfo; // @dynamic notifySeatInfo;
@property(retain, nonatomic) NSData *seiAnchorInfo; // @dynamic seiAnchorInfo;

@end

