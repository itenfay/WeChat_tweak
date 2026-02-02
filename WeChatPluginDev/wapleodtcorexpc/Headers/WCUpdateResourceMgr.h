//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCUpdateResourceMgr
{
}

- (void)cleanOldOne;
- (void)cleanLocalUpdateZip;
- (void)onAuthOKWithPlistVesionChangeFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)onBootsDeleteFinish;
- (void)onBootsUpdateFinish:(unsigned long long)arg1 downloadType:(unsigned long long)arg2;
- (void)onResDeleteFinishWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)onServiceInit;
- (void)forceUpdate:(_Bool)arg1;
- (id)getUpdateZipFile;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

