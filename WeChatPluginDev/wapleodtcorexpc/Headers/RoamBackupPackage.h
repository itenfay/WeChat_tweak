//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, RoamBackupPackageAttribute, RoamBackupRange, RoamDevice;

@interface RoamBackupPackage : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) RoamBackupPackageAttribute *attribute; // @dynamic attribute;
@property(nonatomic) unsigned int backupOption; // @dynamic backupOption;
@property(retain, nonatomic) RoamBackupRange *backupRange; // @dynamic backupRange;
@property(nonatomic) unsigned long long packageId; // @dynamic packageId;
@property(retain, nonatomic) NSString *packageName; // @dynamic packageName;
@property(retain, nonatomic) NSString *sourceDeviceId; // @dynamic sourceDeviceId;
@property(retain, nonatomic) RoamDevice *targetDevice; // @dynamic targetDevice;
@property(retain, nonatomic) NSString *uniquePackageId; // @dynamic uniquePackageId;
@property(nonatomic) unsigned int version; // @dynamic version;

@end

