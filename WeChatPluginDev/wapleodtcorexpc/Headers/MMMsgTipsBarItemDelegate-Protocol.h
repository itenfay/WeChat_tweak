//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMUIViewControllerDelegate-Protocol.h"

@class MMMsgContentTipsItem;

@protocol MMMsgTipsBarItemDelegate <MMUIViewControllerDelegate>
- (void)onClickMsgTipsBarClose:(MMMsgContentTipsItem *)arg1;
- (void)onClickMsgTipsBarTrailingButton:(MMMsgContentTipsItem *)arg1;
- (void)onClickBizTipsBarClose:(MMMsgContentTipsItem *)arg1;
- (void)onClickBizTipsBar:(MMMsgContentTipsItem *)arg1;
@end

