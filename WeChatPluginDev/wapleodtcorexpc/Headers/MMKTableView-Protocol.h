//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMKView-Protocol.h"

@class MMVoidCallback, NSArray;

@protocol MMKTableView <MMKView>
- (void)setOnBeginScrollCallbackImpl:(MMVoidCallback *)arg1;
- (void)setFooterRefreshViewLoadMoreCallbackImpl:(MMVoidCallback *)arg1;
- (void)setEnableFooterRefreshView:(_Bool)arg1;
- (void)setCells:(NSArray *)arg1;
@end

