//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface NewLifeReporter : NSObject
{
    NSMutableDictionary *_firstExpFeedCache;
    NSMutableDictionary *_sdkReportParams;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *sdkReportParams; // @synthesize sdkReportParams=_sdkReportParams;
@property(retain, nonatomic) NSMutableDictionary *firstExpFeedCache; // @synthesize firstExpFeedCache=_firstExpFeedCache;
- (void)setFlutterReportSDKInfo:(id)arg1;
- (void)resetNewLifeSdkReportParams:(id)arg1 forEventId:(id)arg2;
- (void)removeNewLifeSdkReportParamsforKey:(id)arg1;
- (void)setNewLifeSdkReportParams:(id)arg1 forKey:(id)arg2;
- (id)getFirstExpFeedIdByScene:(unsigned int)arg1;
- (void)setExpFeedIdWhenScrollEnd:(id)arg1 andScene:(unsigned int)arg2;
- (id)checkToReturnCollectMapItem:(id)arg1 andEventId:(id)arg2;
- (void)setNewLifeRedDotParams:(id)arg1 forEventId:(id)arg2;
- (void)reportNewLifeCgiEvent:(id)arg1 target:(id)arg2 params:(id)arg3 isBatchReport:(_Bool)arg4;
- (void)handleFlutterParams:(id)arg1 andEventId:(id)arg2 andResultParams:(id)arg3;
- (void)handleCgiReportParams:(id)arg1 andItemId:(id)arg2 andEventId:(id)arg3 andResultParams:(id)arg4;
- (void)onClear;
- (void)onInit;
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

