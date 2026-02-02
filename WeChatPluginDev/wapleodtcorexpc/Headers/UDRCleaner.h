//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface UDRCleaner
{
}

- (void)deepCleanUDRResource;
- (unsigned long long)preCleanGetUDRSize;
- (void)callBizHasBeenCleared;
- (void)cmdCleanAllUDR;
- (void)doCleanBizUDR:(id)arg1 lastResource:(id)arg2;
- (void)doCleanUDR;
- (_Bool)resourceStillValid:(id)arg1;
- (void)regist:(id)arg1;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

