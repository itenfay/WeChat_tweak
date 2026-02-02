//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface BackupAnalyseInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long costTime; // @dynamic costTime;
@property(retain, nonatomic) NSString *deviceName; // @dynamic deviceName;
@property(nonatomic) unsigned int filterMediaCount; // @dynamic filterMediaCount;
@property(nonatomic) unsigned long long filterMediaSize; // @dynamic filterMediaSize;
@property(retain, nonatomic) NSMutableArray *filterMediaTypeList; // @dynamic filterMediaTypeList;
@property(nonatomic) unsigned int mediaCount; // @dynamic mediaCount;
@property(nonatomic) unsigned long long mediaSize; // @dynamic mediaSize;
@property(retain, nonatomic) NSMutableArray *mediaTypeList; // @dynamic mediaTypeList;
@property(nonatomic) unsigned long long msgCount; // @dynamic msgCount;
@property(nonatomic) unsigned int sessionCount; // @dynamic sessionCount;
@property(retain, nonatomic) NSMutableArray *sessionList; // @dynamic sessionList;

@end

