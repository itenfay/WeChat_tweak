//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveReplayOperationCommentSnapShot;

@interface MMFinderLiveReplayCommentView
{
    MMFinderLiveReplayOperationCommentSnapShot *_currentSnapShot;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveReplayOperationCommentSnapShot *currentSnapShot; // @synthesize currentSnapShot=_currentSnapShot;
- (double)initialCommentTableBackViewBottom;
- (double)commentTableBackViewBottom;
- (void)updateCurrentSnapShot:(id)arg1 resetComments:(_Bool)arg2;
- (void)layoutCommentButton;

@end

