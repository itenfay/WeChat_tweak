//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderDataItem, WCFinderLiveCompleteLiveVideoContentView;

@protocol WCFinderLiveCompleteLiveVideoContentViewDelegate <NSObject>
- (void)liveCompleteLiveVideoContentViewMediaReport:(WCFinderLiveCompleteLiveVideoContentView *)arg1 dataItem:(WCFinderDataItem *)arg2;
- (void)liveCompleteLiveVideoContentViewMediaClick:(WCFinderLiveCompleteLiveVideoContentView *)arg1 dataItem:(WCFinderDataItem *)arg2;
- (void)liveCompleteLiveVideoContentViewActionButtonClick:(WCFinderLiveCompleteLiveVideoContentView *)arg1;
@end

