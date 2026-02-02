//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderCommentListSelectTabView;

@protocol WCFinderCommentListSelectTabViewDelegate <NSObject>

@optional
- (void)commentListTab:(WCFinderCommentListSelectTabView *)arg1 rightLinkClickUrl:(NSString *)arg2;
- (void)commentListTab:(WCFinderCommentListSelectTabView *)arg1 unSelectTabType:(unsigned long long)arg2;
- (void)commentListTab:(WCFinderCommentListSelectTabView *)arg1 selectTabType:(unsigned long long)arg2;
@end

