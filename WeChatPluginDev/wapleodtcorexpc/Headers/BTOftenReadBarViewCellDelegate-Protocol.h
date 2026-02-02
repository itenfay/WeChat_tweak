//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class BTBaseBarItemView, BTOftenReadBarViewCell, NSArray;

@protocol BTOftenReadBarViewCellDelegate <NSObject>
- (void)onOftenReadBarView:(BTOftenReadBarViewCell *)arg1 exposeItemViewArr:(NSArray *)arg2;
- (void)onOftenReadBarView:(BTOftenReadBarViewCell *)arg1 didClickLivingBtn:(BTBaseBarItemView *)arg2;
- (void)onOftenReadBarView:(BTOftenReadBarViewCell *)arg1 didClickItemView:(BTBaseBarItemView *)arg2;
@end

