//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMMusicLiveCGIMgr, NSString;

@interface MVPlayerPluginFetchRecommendList
{
    MMMusicLiveCGIMgr *_musicLiveCgiManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMMusicLiveCGIMgr *musicLiveCgiManager; // @synthesize musicLiveCgiManager=_musicLiveCgiManager;
- (void)onMusicLiveGetMVRecommentList:(id)arg1 continueFlag:(_Bool)arg2 requestId:(id)arg3;
- (void)fetchRecommendMvList;
- (void)executeWithEvent:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

