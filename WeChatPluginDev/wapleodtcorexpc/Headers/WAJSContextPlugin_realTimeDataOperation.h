//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAJSContextPlugin_realTimeDataOperation
{
}

- (void)appid:(id)arg1 operationsIdList:(id)arg2 resultWithErrCode:(int)arg3 errMsg:(id)arg4 dataSize:(unsigned long long)arg5;
- (void)addOperation:(id)arg1;
- (void)unregisterExtensions;
- (void)registerExtensions;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

