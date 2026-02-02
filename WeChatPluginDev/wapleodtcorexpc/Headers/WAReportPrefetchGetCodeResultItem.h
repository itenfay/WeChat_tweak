//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportPrefetchGetCodeResultItem
{
    unsigned int _isEncrypt;
    unsigned int _networkEnvType;
    unsigned int _isSuccess;
    unsigned int _retryCount;
    unsigned int _cmdSequence;
    unsigned int _reportId;
    NSString *_prefetchId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *prefetchId; // @synthesize prefetchId=_prefetchId;
@property(nonatomic) unsigned int reportId; // @synthesize reportId=_reportId;
@property(nonatomic) unsigned int cmdSequence; // @synthesize cmdSequence=_cmdSequence;
@property(nonatomic) unsigned int retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) unsigned int isSuccess; // @synthesize isSuccess=_isSuccess;
@property(nonatomic) unsigned int networkEnvType; // @synthesize networkEnvType=_networkEnvType;
@property(nonatomic) unsigned int isEncrypt; // @synthesize isEncrypt=_isEncrypt;
- (id)reportString;
- (void)makeSafeString;
- (int)reportID;

// Remaining properties
@property(copy, nonatomic) NSString *username;

@end

