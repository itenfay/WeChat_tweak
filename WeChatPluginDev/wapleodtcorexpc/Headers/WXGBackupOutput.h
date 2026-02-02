//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, PacketBackupDataPush, WXGBackupDataInfo;

@interface WXGBackupOutput : NSObject
{
    NSString *_sessionName;
    PacketBackupDataPush *_dataPush;
    WXGBackupDataInfo *_backupDataInfo;
    unsigned long long _outputType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long outputType; // @synthesize outputType=_outputType;
@property(retain, nonatomic) WXGBackupDataInfo *backupDataInfo; // @synthesize backupDataInfo=_backupDataInfo;
@property(retain, nonatomic) PacketBackupDataPush *dataPush; // @synthesize dataPush=_dataPush;
@property(copy, nonatomic) NSString *sessionName; // @synthesize sessionName=_sessionName;
- (id)getBackupDataInfo;
- (void)setBakcupDataPushInPath:(id)arg1;
- (void)setBackupDataPush:(id)arg1;
- (id)getBackupDataPush;
- (unsigned long long)getOutputType;
- (id)init;

@end

