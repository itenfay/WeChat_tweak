//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAUploadFileConfig
{
    unsigned int _uploadFileMaxConcurrentCount;
}

@property(nonatomic) unsigned int uploadFileMaxConcurrentCount; // @synthesize uploadFileMaxConcurrentCount=_uploadFileMaxConcurrentCount;
- (unsigned int)configDefaultTimeoutMS;
- (unsigned int)configTimeoutMS;
- (unsigned int)configMaxTimeoutMS;
- (id)configDomainList;
- (void)loadConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

