//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveReplayTask;

@interface WCFinderLiveReplayActionSheet
{
    MMFinderLiveReplayTask *_replayLiveTask;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveReplayTask *replayLiveTask; // @synthesize replayLiveTask=_replayLiveTask;
- (id)seperatorBackgroundColor;
- (id)containerViewBlurBackgroundColor;
- (id)cancelButtonBackgroundColor;
- (id)cancelButtonTitleColor;
- (id)titleLabelColor;
- (id)bottomPadddingViewBackgroundColor;
- (id)transparentViewBackgroundColor;
- (_Bool)isConcertTicket;
- (id)loadItemArray;
- (void)loadData;
- (id)initWithLiveTask:(id)arg1;

@end

