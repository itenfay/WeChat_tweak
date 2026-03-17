//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class InfiniteLoopContainerView, UIView;

@protocol InfiniteLoopContainerViewDelegate <NSObject>
- (UIView *)containerView:(InfiniteLoopContainerView *)arg1 viewForItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsInContainerView:(InfiniteLoopContainerView *)arg1;

@optional
- (void)containerView:(InfiniteLoopContainerView *)arg1 onTapItemAtIndex:(unsigned long long)arg2;
@end

