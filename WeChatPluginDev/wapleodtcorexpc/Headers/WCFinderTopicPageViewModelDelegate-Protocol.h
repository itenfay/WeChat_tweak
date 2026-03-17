//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCFinderTopicPageViewModelDelegate <NSObject>

@optional
- (void)finderTopicGetReviseFeedCount:(unsigned int)arg1;
- (void)finderTopicInvalidWithErrorCode:(int)arg1;
- (void)finderTopicNoMoreData;
- (void)finderTopicAppendDataFrom:(long long)arg1 toIndex:(long long)arg2;
- (void)finderTopicReloadAllDataWithPrefetched:(_Bool)arg1;
@end

