//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, RoamBackupRangeItem_ContactFilter;

@interface RoamBackupRangeItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *backupTimes; // @dynamic backupTimes;
@property(retain, nonatomic) RoamBackupRangeItem_ContactFilter *excludeFilter; // @dynamic excludeFilter;
@property(retain, nonatomic) RoamBackupRangeItem_ContactFilter *includeFilter; // @dynamic includeFilter;

@end

