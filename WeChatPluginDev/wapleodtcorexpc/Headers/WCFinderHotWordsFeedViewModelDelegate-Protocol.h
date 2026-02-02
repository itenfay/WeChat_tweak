//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderHotWordsFeedViewModel;

@protocol WCFinderHotWordsFeedViewModelDelegate <NSObject>
- (void)linkTopicVMStateChanged:(WCFinderHotWordsFeedViewModel *)arg1;
- (void)linkTopicVM:(WCFinderHotWordsFeedViewModel *)arg1 fetchDataFinishWithAppendDataWithRange:(struct _NSRange)arg2;
@end

