//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMMsgTipsBarItemDelegate-Protocol.h"

@class MMMsgContentTipsItem;

@protocol MMNewMsgContentNavBarDelegate <MMMsgTipsBarItemDelegate>
- (void)onMsgContentNavBarTipsBarHeightChanged;
- (void)onMsgContentNavBarTipsBarShowExpandView;
- (void)onMsgTipsBarDidShow:(MMMsgContentTipsItem *)arg1;
@end

