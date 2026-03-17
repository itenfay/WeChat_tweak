//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMUIViewControllerDelegate-Protocol.h"

@class CContact, NSArray;

@protocol MultiSelectChatRoomHalfScreenViewControllerDelegate <MMUIViewControllerDelegate>

@optional
- (void)onMultiSelectContactCancel;
- (void)onMultiSelectContactReturn:(NSArray *)arg1;
- (void)onSelectedOrCancelContact:(CContact *)arg1 isSelected:(_Bool)arg2;
@end

