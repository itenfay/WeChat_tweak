//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMMenuItem, MMMenuItemView;

@protocol MMMenuItemViewDelegate <NSObject>
- (void)onMenuItemSelected:(MMMenuItem *)arg1 itemView:(MMMenuItemView *)arg2;
@end

