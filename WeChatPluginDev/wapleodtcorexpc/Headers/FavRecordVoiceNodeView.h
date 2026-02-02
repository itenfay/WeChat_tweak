//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavAudioInfo, NSString;

@interface FavRecordVoiceNodeView
{
    FavAudioInfo *m_audioInfo;
}

- (void).cxx_destruct;
- (void)OnPlayError:(id)arg1;
- (void)OnEndPlay:(id)arg1;
- (void)OnBeginPlay:(id)arg1;
- (void)onClick;
- (void)addContentSubView;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

