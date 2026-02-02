//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface MainFrameGroupLiveReporter
{
    NSMutableDictionary *_chatroomLiveInfos;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *chatroomLiveInfos; // @synthesize chatroomLiveInfos=_chatroomLiveInfos;
- (void)onLiveCountChanged:(id)arg1;
- (_Bool)shouldShowGroupReddot:(id)arg1;
- (id)getOpenedGroupLiveIds:(id)arg1;
- (void)logEnterSessionWithGroupLive:(id)arg1 muteGroup:(_Bool)arg2;
- (void)logReceiveGroupLiveMsg:(id)arg1;
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

