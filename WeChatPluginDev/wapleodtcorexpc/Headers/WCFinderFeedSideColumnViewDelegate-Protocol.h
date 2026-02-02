//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderFeedContentVM, WCFinderFeedSideColumnView;

@protocol WCFinderFeedSideColumnViewDelegate <NSObject>
- (void)sideColumnView:(WCFinderFeedSideColumnView *)arg1 onClickContentVM:(WCFinderFeedContentVM *)arg2;
- (void)onClickCloseColumnView:(WCFinderFeedSideColumnView *)arg1;
@end

