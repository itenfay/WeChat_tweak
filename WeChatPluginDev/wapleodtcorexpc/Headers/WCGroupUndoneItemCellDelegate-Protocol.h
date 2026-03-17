//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCGroupUndoneItemCell;

@protocol WCGroupUndoneItemCellDelegate <NSObject>
- (void)onRevokeUndoneCell:(WCGroupUndoneItemCell *)arg1;
- (void)onCompleteUndoneCell:(WCGroupUndoneItemCell *)arg1;
- (void)onClickUndoneCell:(WCGroupUndoneItemCell *)arg1;
- (void)onCloseUndoneCell:(WCGroupUndoneItemCell *)arg1;
@end

