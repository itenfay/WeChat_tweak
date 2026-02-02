//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJPublisherContext, NSString;

@interface WCFinderRootEditVideoViewController
{
    unsigned long long _enterScene;
    MJPublisherContext *_publisherContext;
    unsigned long long _enterTime;
    NSString *_templateId;
    NSString *_templateMusicId;
    NSString *_templateFollowFeedID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *templateFollowFeedID; // @synthesize templateFollowFeedID=_templateFollowFeedID;
@property(copy, nonatomic) NSString *templateMusicId; // @synthesize templateMusicId=_templateMusicId;
@property(copy, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(retain, nonatomic) MJPublisherContext *publisherContext; // @synthesize publisherContext=_publisherContext;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
- (id)getEditId;
- (unsigned long long)getEnterScene;
- (id)getSourceFeedId;
- (void)registerYReportSdk;
- (struct CGPoint)emotionOffset;
- (id)originalUrls;
- (id)editResultComposition;
- (void)onClickEditVideoDoneButton;
- (void)onClickEditVideoCancelButton;
- (id)getReportExtInfoDismissState:(_Bool)arg1 eventCode:(long long)arg2;
- (void)viewDidAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

