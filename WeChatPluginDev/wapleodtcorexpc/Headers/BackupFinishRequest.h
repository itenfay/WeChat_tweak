//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BackupAnalyseInfo, BackupReportList, NSString;

@interface BackupFinishRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BackupAnalyseInfo *analyseInfo; // @dynamic analyseInfo;
@property(nonatomic) unsigned int calculateSize; // @dynamic calculateSize;
@property(retain, nonatomic) BackupReportList *data; // @dynamic data;
@property(retain, nonatomic) NSString *id; // @dynamic id;
@property(nonatomic) unsigned int serverCostTotalTime; // @dynamic serverCostTotalTime;
@property(nonatomic) unsigned int serverDataPushSize; // @dynamic serverDataPushSize;
@property(nonatomic) unsigned int serverFileCount; // @dynamic serverFileCount;
@property(nonatomic) unsigned int serverMessageCount; // @dynamic serverMessageCount;
@property(nonatomic) unsigned int serverReadDbtotalTime; // @dynamic serverReadDbtotalTime;
@property(nonatomic) unsigned int serverReadFileTotalTime; // @dynamic serverReadFileTotalTime;
@property(nonatomic) unsigned int serverSessionCount; // @dynamic serverSessionCount;
@property(nonatomic) unsigned int serverVersion; // @dynamic serverVersion;

@end

