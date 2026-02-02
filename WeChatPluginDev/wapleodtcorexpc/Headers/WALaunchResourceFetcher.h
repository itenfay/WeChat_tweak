//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WALaunchResourceFetcher
{
    _Bool _cancelled;
}

@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
- (void)startFetchLaunchResourceWithOpenInfo:(id)arg1 version:(unsigned int)arg2 taskExtInfo:(id)arg3 contactUpdateHandler:(CDUnknownBlockType)arg4;
- (id)getValidUsrName:(id)arg1 contact:(id)arg2;
- (id)getValidAppid:(id)arg1 contact:(id)arg2;
- (_Bool)contact:(id)arg1 debugMode:(unsigned long long)arg2 hasSameOrNewerVersionThan:(unsigned int)arg3;
- (_Bool)isRequestCancelled;
- (void)enableRequest;
- (void)cancelRequest;
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

