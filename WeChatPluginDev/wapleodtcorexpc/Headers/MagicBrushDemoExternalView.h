//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface MagicBrushDemoExternalView
{
    NSMutableDictionary *_internalViewDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *internalViewDict; // @synthesize internalViewDict=_internalViewDict;
- (void)onMainScriptInjected:(id)arg1;
- (void)onCanvasViewLayout:(unsigned int)arg1 view:(id)arg2 left:(float)arg3 top:(float)arg4 width:(float)arg5 height:(float)arg6;
- (void)onCanvasViewDestroy:(unsigned int)arg1 view:(id)arg2;
- (void)onCanvasViewCreated:(unsigned int)arg1 view:(id)arg2;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

