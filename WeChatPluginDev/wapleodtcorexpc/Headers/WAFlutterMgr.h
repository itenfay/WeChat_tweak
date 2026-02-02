//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface WAFlutterMgr
{
    NSMutableArray *_skylineRuntimeArr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *skylineRuntimeArr; // @synthesize skylineRuntimeArr=_skylineRuntimeArr;
- (void)removeSkylineRuntime:(id)arg1;
- (void)addSkylineRuntime:(id)arg1;
- (void)destroySkylineEngine:(id)arg1;
- (id)makeSkylineEngine:(id)arg1;
- (id)ensureEngineGroup;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

