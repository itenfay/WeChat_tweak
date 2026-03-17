//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCPayWebImageView;

@protocol WCPayWebImageViewDelegate <NSObject>

@optional
- (void)onLoadWCPayWebImageFail:(WCPayWebImageView *)arg1;
- (void)onLoadWCPayWebImageOK:(WCPayWebImageView *)arg1;
@end

