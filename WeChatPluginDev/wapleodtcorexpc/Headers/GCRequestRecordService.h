//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, _TtC6WeChat3HAR;

@interface GCRequestRecordService
{
    _TtC6WeChat3HAR *_harObject;
    NSMutableDictionary *_requestModelDict;
    NSMutableArray *_requestArray;
    _TtC6WeChat3HAR *_interceptHar;
    NSString *_toPickFile;
    NSMutableSet *_usedInterCeptSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *usedInterCeptSet; // @synthesize usedInterCeptSet=_usedInterCeptSet;
@property(retain, nonatomic) NSString *toPickFile; // @synthesize toPickFile=_toPickFile;
@property(retain, nonatomic) _TtC6WeChat3HAR *interceptHar; // @synthesize interceptHar=_interceptHar;
@property(retain, nonatomic) NSMutableArray *requestArray; // @synthesize requestArray=_requestArray;
@property(retain, nonatomic) NSMutableDictionary *requestModelDict; // @synthesize requestModelDict=_requestModelDict;
@property(retain, nonatomic) _TtC6WeChat3HAR *harObject; // @synthesize harObject=_harObject;
- (id)harEntryForRequest:(id)arg1;
- (id)trySaveHarObject:(id)arg1 toPath:(id)arg2;
- (void)showMsg:(id)arg1 addtionalInfo:(id)arg2;
- (void)showSuccessMsg:(id)arg1 addtionalInfo:(id)arg2;
- (void)showMsg:(id)arg1;
- (void)saveToHarFile;
- (_Bool)shouldHandleRequest:(id)arg1;
- (_Bool)shouldRecordRequest:(id)arg1;
- (_Bool)shouldInterceptRequest:(id)arg1;
- (id)pickOneHarFile;
- (void)onFirstSchemeWebViewAppear;
- (void)recordRequest:(id)arg1 data:(id)arg2;
- (void)recordRequest:(id)arg1 response:(id)arg2;
- (void)markRequestBegin:(id)arg1 webView:(id)arg2;
- (id)requestModelFromRequest:(id)arg1;
- (id)requestKeyFromRequest:(id)arg1;
- (_Bool)enableIntercept;
- (_Bool)enableRecord;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

