//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderFeedContentVM, WCFinderLandScapeVideoView;

@protocol WCFinderLandScapeVideoViewDataSource <NSObject>
- (long long)finderLandScapeVideoViewGetNextContinuePlayableFeedIndexOfTid:(NSString *)arg1;
- (long long)finderLandScapeVideoView:(WCFinderLandScapeVideoView *)arg1 getIndexOfTid:(NSString *)arg2;
- (WCFinderFeedContentVM *)finderLandScapeVideoViewGetNextContinuePlayableContentVM;
- (WCFinderFeedContentVM *)finderLandScapeVideoView:(WCFinderLandScapeVideoView *)arg1 contentVMAtFeedListRow:(long long)arg2;
- (long long)numberOfRowsInLandScapeVideoViewFeedList:(WCFinderLandScapeVideoView *)arg1;

@optional
- (NSString *)recommendReasonDisplayInLandScapeVideoView:(WCFinderLandScapeVideoView *)arg1;
@end

