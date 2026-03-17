//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderStreamProfileHeadData;

@protocol WCFinderStreamProfileHeadDataVCDelegate <NSObject>

@optional
- (void)onHeaderViewModelMoreActionRedDotChanged:(WCFinderStreamProfileHeadData *)arg1;
- (void)onHeaderViewCoverChanged:(long long)arg1;
@end

