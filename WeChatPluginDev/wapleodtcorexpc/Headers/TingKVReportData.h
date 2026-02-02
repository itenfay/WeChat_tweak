//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData;

@interface TingKVReportData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) _Bool ignoreFreqLimit; // @dynamic ignoreFreqLimit;
@property(nonatomic) _Bool isImportant; // @dynamic isImportant;
@property(nonatomic) _Bool isReportNow; // @dynamic isReportNow;
@property(nonatomic) unsigned int logId; // @dynamic logId;
@property(retain, nonatomic) NSData *reportContentBuffer; // @dynamic reportContentBuffer;

@end

