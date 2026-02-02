//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCFinderTopicPageViewManagerDelegate <NSObject>
- (void)onFinderTopicGetReviseFeedCount:(unsigned int)arg1 filterType:(unsigned int)arg2;
- (void)onFinderTopicDidReceiveFirstPageWithPrefetched:(_Bool)arg1;
@end

