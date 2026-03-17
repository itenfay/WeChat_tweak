//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NSString, WCFinderFeedArray, WCFinderFeedContentVM, WCFinderFeedFlowViewAdapter;
@protocol WCFinderFeedFlowViewAdapterDataSourceDelegate;

@protocol WCFinderFeedFlowViewAdapterDataSource <NSObject>
- (NSIndexPath *)feedIndexPathForTid:(NSString *)arg1;
- (long long)feedIndexAtFeedArray:(NSIndexPath *)arg1;
- (WCFinderFeedContentVM *)feedAtIndexPath:(NSIndexPath *)arg1;
- (WCFinderFeedArray *)getFeedArray;
- (_Bool)isEmpty;
- (void)observeChange:(WCFinderFeedFlowViewAdapter *)arg1;
- (void)release:(WCFinderFeedFlowViewAdapter *)arg1;
- (void)setDelegate:(id <WCFinderFeedFlowViewAdapterDataSourceDelegate>)arg1;

@optional
- (_Bool)shouldPinSectionHeader:(long long)arg1;
@end

