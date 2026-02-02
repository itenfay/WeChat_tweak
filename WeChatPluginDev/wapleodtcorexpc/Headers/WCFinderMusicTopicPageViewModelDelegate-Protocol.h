//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol WCFinderMusicTopicPageViewModelDelegate <NSObject>

@optional
- (void)finderMusicFetchListSucPullType:(unsigned long long)arg1 innerTabType:(int)arg2 dataArray:(NSArray *)arg3;
- (void)finderEventFeedOrderChanged;
- (void)finderMusicTopicInvalidWithErrorCode:(int)arg1 errMsg:(NSString *)arg2;
- (void)finderEventNoMoreData;
- (void)finderEventAppendDataFrom:(long long)arg1 toIndex:(long long)arg2;
- (void)finderEventReloadAllData;
- (void)finderMusicUploadSuc;
@end

