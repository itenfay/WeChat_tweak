//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCFinderEventPageViewManagerDelegate <NSObject>
- (void)finderEventInvalidWithErrorCode:(int)arg1;
- (void)finderEventReceiveFirstPageWithPrefetched:(_Bool)arg1;
- (void)finderEventFeedOrderChangedInHotTab;
@end

