//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@interface AffRoamAutoBackupEvent : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int backupOption; // @dynamic backupOption;
@property(nonatomic) unsigned long long checkDelay; // @dynamic checkDelay;
@property(nonatomic) unsigned long long checkInterval; // @dynamic checkInterval;
@property(nonatomic) unsigned long long interval; // @dynamic interval;
@property(nonatomic) unsigned long long lastAutoBackupEndTime; // @dynamic lastAutoBackupEndTime;
@property(nonatomic) unsigned long long reserveLatest; // @dynamic reserveLatest;

@end

