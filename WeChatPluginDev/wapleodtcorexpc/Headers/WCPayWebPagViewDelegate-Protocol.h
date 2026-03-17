//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCPayWebPagView;

@protocol WCPayWebPagViewDelegate <NSObject>

@optional
- (void)onLoadWCPayWebPagFail:(WCPayWebPagView *)arg1;
- (void)onLoadWCPayWebPagOK:(WCPayWebPagView *)arg1;
@end

