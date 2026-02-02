//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMBaseSessionCellData;

@protocol MMBaseSessionCellDelegate <NSObject>
- (void)onMenuItemsAppearInSessionCellData:(MMBaseSessionCellData *)arg1;
- (void)onMenuTransitionToConfirmState:(long long)arg1 sessionCellData:(MMBaseSessionCellData *)arg2;
@end

