//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, UITableViewCell;

@protocol ContactsSelectionPreviewViewControllerDelegate <NSObject>
- (void)onSelectionPreviewDone;
- (void)onSelectionPreviewViewControllerDidDeselectAll;
- (void)onSelectionPreviewViewControllerDidSelectAll;
- (_Bool)isSelectionPreviewAllSelected;
- (void)didSelectionPreviewViewTableSelectContact:(CContact *)arg1;
- (double)heightForSelectionPreviewViewTable;
- (UITableViewCell *)cellForSelectionPreviewViewTable:(UITableViewCell *)arg1 contact:(CContact *)arg2;
@end

