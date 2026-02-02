//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@interface AffRoamStandAloneBackupPackageInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long firstBackupStartTime; // @dynamic firstBackupStartTime;
@property(nonatomic) _Bool isDeleted; // @dynamic isDeleted;
@property(nonatomic) unsigned long long lastAutobackupSuccessTime; // @dynamic lastAutobackupSuccessTime;
@property(nonatomic) unsigned long long lastBackupStopOrErrorTime; // @dynamic lastBackupStopOrErrorTime;
@property(nonatomic) unsigned long long lastBackupUpdateTime; // @dynamic lastBackupUpdateTime;
@property(nonatomic) unsigned long long packageId; // @dynamic packageId;
@property(nonatomic) unsigned long long pauseAutobackupRestartTime; // @dynamic pauseAutobackupRestartTime;

@end

