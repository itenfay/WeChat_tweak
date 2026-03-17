//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, NSArray, NSIndexPath, NSString, UITableViewCell;

@protocol ContactsSearchControllerDelegate <NSObject>
- (void)didSearchViewTableSelect:(NSIndexPath *)arg1;
- (double)heightForSearchViewTable:(NSIndexPath *)arg1;
- (UITableViewCell *)cellForSearchViewTable:(UITableViewCell *)arg1 index:(NSIndexPath *)arg2;
- (void)cancelSearch;
- (void)doSearch:(NSString *)arg1 Pre:(_Bool)arg2;

@optional
- (void)onContactSearchControllerDidCancelItemClick;
- (void)onContactSearchControllerDidFinishMultiSelect;
- (void)onContactSearchControllerDidSwitchMultiSelectMode:(_Bool)arg1;
- (_Bool)onShouldSelectContactInSearchController:(CContact *)arg1;
- (void)onSearchControllerViewDidLoad;
- (NSArray *)onGetMultiSelectUsrs;
- (double)cellSeparatorLeftInsetForSearchViewTable:(NSIndexPath *)arg1;
- (void)onPanelViewExistContactDidSelected:(CContact *)arg1;
- (_Bool)onPanelViewIsExistContact:(CContact *)arg1;
- (void)onPanelViewAsyncGetRecommends:(NSArray *)arg1;
- (void)doTagSearch:(NSString *)arg1 arrContacts:(NSArray *)arg2;
@end

