//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface LiteAppJsApiEmoticonPackButtonDesc
{
    NSString *_pid;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *pid; // @synthesize pid=_pid;
- (void)onGetEmoticonDownloadFlag:(unsigned int)arg1 andButtonDesc:(id)arg2;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

