//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface OutLinkHijackDetector
{
    NSString *_uploadingFile;
    NSMutableDictionary *_fileRecord;
    _Bool _isLoadConfigFile;
    NSMutableArray *_configList;
    unsigned int _configFileExpireTime;
    NSMutableDictionary *_sucReportUrl;
    unsigned int _blockConfigFlag;
    NSArray *_blockBlackList;
    NSArray *_blockWhiteList;
    _Bool _needReportOperatorsHijack;
    NSString *_hijackUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *hijackUrl; // @synthesize hijackUrl=_hijackUrl;
@property(nonatomic) _Bool needReportOperatorsHijack; // @synthesize needReportOperatorsHijack=_needReportOperatorsHijack;
- (void)handleBlockConfigMsg:(id)arg1;
- (void)handleDectConfigMsg:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)OnCdnUpload:(id)arg1;
- (void)reportOperatorsHijackHtmlContent:(id)arg1;
- (int)getOperatorsHijackBlockControlFlag;
- (id)getOperatorsHijackBlockBlackList;
- (_Bool)isOperatorsHijackBlockEnable:(id)arg1;
- (void)reportCdnInfoToServer:(id)arg1;
- (void)tryUploadUnFinishFile;
- (id)getHijackConfigFileDir;
- (id)getWebReportRootDir;
- (void)storageHtmlContent:(id)arg1;
- (void)startDetect:(id)arg1;
- (void)markUrlHasBeenReported:(id)arg1;
- (_Bool)urlHasBeenReported:(id)arg1;
- (void)saveHijackConfigFile;
- (void)tryloadHijackConfigFile;
- (id)init;
- (int)getAbtestOperatorsHijackBlockControlFlag;
- (id)getOperationsHijackBlockWhiteList;
- (void)tryAbTestDataMigration;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

