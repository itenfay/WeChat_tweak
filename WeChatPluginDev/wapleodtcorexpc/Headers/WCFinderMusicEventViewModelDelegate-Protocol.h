//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderDataItem;

@protocol WCFinderMusicEventViewModelDelegate <NSObject>

@optional
- (WCFinderDataItem *)onFinderMusicBgmFeedDataItem;
- (NSString *)onFinderMusicBGMFeedId;
- (void)onFinderEventTabListError;
- (void)finderMusicTopicInvalidWithErrorCode:(int)arg1 errMsg:(NSString *)arg2;
- (void)onFinderEventClose:(_Bool)arg1 errorCode:(int)arg2;
- (void)onFinderMusicTopicHeaderViewNeedRefresh;
- (void)onFinderSearchResultReload;
- (void)onFinderSearchResultError;
- (void)onFinderSearchResultEmpty;
@end

