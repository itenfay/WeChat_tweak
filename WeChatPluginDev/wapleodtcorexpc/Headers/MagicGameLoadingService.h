//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, _TtC6WeChat19MagicGameLoadingBiz;

@interface MagicGameLoadingService
{
    _TtC6WeChat19MagicGameLoadingBiz *_biz;
    long long _reference;
    NSMutableDictionary *__speedCollection;
    NSMutableDictionary *_loadingStatus;
}

+ (void)preprocess:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *loadingStatus; // @synthesize loadingStatus=_loadingStatus;
@property(retain, nonatomic) NSMutableDictionary *_speedCollection; // @synthesize _speedCollection=__speedCollection;
@property long long reference; // @synthesize reference=_reference;
@property(retain, nonatomic) _TtC6WeChat19MagicGameLoadingBiz *biz; // @synthesize biz=_biz;
- (void)prefetchGetCodeWithResult:(unsigned long long)arg1 preDownloadRequestkey:(id)arg2;
- (id)getDownloadingSpeed:(id)arg1;
- (void)onPreloadEnd:(id)arg1;
- (void)onSetDownloadingSpeed:(id)arg1 speed:(id)arg2;
- (void)notifyPreloadEndIfNeeded:(id)arg1;
- (void)forceStop;
- (void)cancelPreload:(id)arg1;
- (void)stop:(id)arg1;
- (void)start:(id)arg1 extra_data:(id)arg2;
- (void)preload:(id)arg1 extra_data:(id)arg2;
- (void)checkMainThread;
- (void)removeStatus:(id)arg1;
- (id)statusForRequestKey:(id)arg1;
- (id)status:(id)arg1 autoCreate:(_Bool)arg2;
- (id)status:(id)arg1;
- (void)ensureBiz;
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

