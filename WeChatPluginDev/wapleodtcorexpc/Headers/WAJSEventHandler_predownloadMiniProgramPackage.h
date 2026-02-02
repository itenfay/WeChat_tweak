//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAJSEventHandler_predownloadMiniProgramPackage
{
    NSString *_requestKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *requestKey; // @synthesize requestKey=_requestKey;
- (void)prefetchGetCodeCmd:(id)arg1 didFinishDownloadWithRet:(_Bool)arg2 infoData:(id)arg3 remainRetryCount:(unsigned long long)arg4;
- (void)prefetchGetCodeWithResult:(unsigned long long)arg1 preDownloadRequestkey:(id)arg2;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

