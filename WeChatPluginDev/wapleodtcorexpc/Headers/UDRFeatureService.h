//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface UDRFeatureService
{
}

- (id)getResourceList:(id)arg1;
- (id)getResource:(id)arg1 name:(id)arg2;
- (void)clearAll;
- (id)decodeVirtualPath:(id)arg1;
- (id)getAbsolutePath:(id)arg1;
- (id)getPostDir:(id)arg1;
- (void)registerProject:(id)arg1 className:(id)arg2;
- (void)specifiedCheck:(id)arg1 name:(id)arg2 version:(unsigned int)arg3 extInfo:(id)arg4;
- (void)check:(id)arg1 nameList:(id)arg2 qos:(int)arg3 paramMap:(id)arg4;
- (void)batchCheck:(id)arg1 nameMap:(id)arg2 qos:(int)arg3 paramMap:(id)arg4;
- (void)dealloc;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

