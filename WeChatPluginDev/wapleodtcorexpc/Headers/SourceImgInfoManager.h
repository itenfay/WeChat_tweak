//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MemoryMappedKV, NSString;

@interface SourceImgInfoManager
{
    MemoryMappedKV *_sourceInfoKv;
}

- (void).cxx_destruct;
- (void)report28466:(int)arg1 contentId:(id)arg2 shareScene:(int)arg3 appId:(id)arg4 fromUin:(unsigned int)arg5 shareId:(id)arg6 actionId:(int)arg7 shareType:(int)arg8 ssid:(int)arg9 url:(id)arg10;
- (void)Report:(id)arg1 actionID:(int)arg2;
- (id)GetSourceImgInfo:(id)arg1;
- (void)SetSourceImgInfo:(id)arg1 imgInfo:(id)arg2;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

