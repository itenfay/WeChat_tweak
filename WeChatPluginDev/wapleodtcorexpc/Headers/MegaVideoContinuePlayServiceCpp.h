//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MegaVideoContinuePlayServiceCpp
{
}

+ (id)newInstance;
- (void)prefetchNextFeed;
- (void)updateRelatedListLastBuffer:(id)arg1;
- (id)nextFeedId;
- (id)nextFeed;
- (int)commentScene;
- (id)playingFeedId;
- (id)playingFeed;
- (void)updatePlayingFeed:(id)arg1 commentScene:(int)arg2 isFromContinuePlay:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

