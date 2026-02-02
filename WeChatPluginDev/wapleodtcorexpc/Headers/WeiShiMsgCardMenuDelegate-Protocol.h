//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, WeShiMsgCardView;

@protocol WeiShiMsgCardMenuDelegate <NSObject>
- (void)onMoreMenu:(WeShiMsgCardView *)arg1;
- (void)onFavoriteMenu:(WeShiMsgCardView *)arg1;
- (void)onForwardMenu:(WeShiMsgCardView *)arg1;
- (NSArray *)getMenuItems;
@end

