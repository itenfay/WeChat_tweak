//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderProfileLivePlaybackViewModel;

@protocol WCFinderProfileLivePlaybackViewModelDelegate <NSObject>

@optional
- (void)onLivePlaybackViewModelDataFetchRefresh;
- (void)onLivePlaybackViewModelDataFetchError;
- (void)onLivePlaybackViewModel:(WCFinderProfileLivePlaybackViewModel *)arg1 onAppendDataAtRange:(struct _NSRange)arg2;
@end

