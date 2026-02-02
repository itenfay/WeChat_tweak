//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableSet, NSString;

@interface GameShareCardReport
{
    NSMutableSet *_snsExposedSet;
    NSMutableSet *_chatExposedSet;
}

- (void).cxx_destruct;
- (void)report28466:(int)arg1 contentId:(id)arg2 shareScene:(int)arg3 appId:(id)arg4 fromUin:(unsigned int)arg5 shareId:(id)arg6 actionId:(int)arg7 shareType:(int)arg8;
- (void)chatExposeReport:(id)arg1;
- (void)snsExposeReport:(id)arg1;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

