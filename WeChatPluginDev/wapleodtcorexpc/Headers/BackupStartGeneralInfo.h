//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class NSString;

@class WXPBGeneratedMessage;

@interface BackupStartGeneralInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long deviceFreeSpace; // @dynamic deviceFreeSpace;
@property(retain, nonatomic) NSString *deviceId; // @dynamic deviceId;
@property(retain, nonatomic) NSString *deviceName; // @dynamic deviceName;
@property(retain, nonatomic) NSString *model; // @dynamic model;
@property(retain, nonatomic) NSString *systemName; // @dynamic systemName;
@property(retain, nonatomic) NSString *systemVersion; // @dynamic systemVersion;
@property(nonatomic) unsigned int wechatVersion; // @dynamic wechatVersion;

@end

