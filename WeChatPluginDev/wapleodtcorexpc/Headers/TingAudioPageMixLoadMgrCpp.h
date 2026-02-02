//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface TingAudioPageMixLoadMgrCpp
{
}

+ (id)sharedInstance;
- (void)setFirstScreenNetCache:(id)arg1 response:(id)arg2;
- (id)getFirstScreenNetCache:(id)arg1;
- (unsigned long long)getLastReqTimeSec;
- (void)loadData:(id)arg1 reqInfo:(id)arg2;
- (_Bool)removeListener:(id)arg1 listener:(id)arg2;
- (_Bool)addListener:(id)arg1 listener:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

