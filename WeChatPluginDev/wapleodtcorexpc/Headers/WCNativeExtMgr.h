//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface WCNativeExtMgr
{
    _Bool _bLoad;
    NSArray *_arrPBCgi;
    NSArray *_arrCmdID;
}

- (void).cxx_destruct;
- (void)checkAndLoad;
- (_Bool)IsValidCommandInVM:(unsigned int)arg1;
- (_Bool)CgiSendByLongConnInVM:(unsigned int)arg1;
- (unsigned int)ReqCmdToCgiInVM:(unsigned int)arg1;
- (unsigned int)CgiToRespCmdInVM:(unsigned int)arg1;
- (unsigned int)CgiToReqCmdInVM:(unsigned int)arg1;
- (unsigned int)getPbCgiListLenFromVM;
- (const struct PBCGIHelperWrap *)queryCgiConfigFromVM:(unsigned int)arg1;
- (const struct PBCGIHelperWrap *)queryCgiConfigAtIndexInVM:(unsigned int)arg1;
- (void)resetLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

