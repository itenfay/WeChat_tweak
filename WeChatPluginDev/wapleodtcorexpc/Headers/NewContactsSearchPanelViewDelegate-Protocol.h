//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, NSArray, NSIndexPath, NSString, UITableViewCell, UIView;

@protocol NewContactsSearchPanelViewDelegate <NSObject>
- (void)didSearchViewTableSelect:(NSIndexPath *)arg1;
- (double)heightForSearchViewTable:(NSIndexPath *)arg1;
- (UITableViewCell *)cellForSearchViewTable:(UITableViewCell *)arg1 index:(NSIndexPath *)arg2;

@optional
- (void)onShowSearchContactTagViews;
- (_Bool)isCanSupportOnTouchesEndedRemoveToken;
- (void)onPanelViewTableViewHidden:(_Bool)arg1;
- (_Bool)isCanMultiSelectInDidSelectRow;
- (double)cellSeparatorLeftInsetForSearchViewTable:(NSIndexPath *)arg1;
- (void)onPanelViewExistContactDidSelected:(CContact *)arg1;
- (_Bool)onPanelViewIsExistContact:(CContact *)arg1;
- (void)onPanelViewAsyncGetRecommends:(NSArray *)arg1;
- (UIView *)viewForPanelResultFooterInSection:(long long)arg1;
- (double)heightForPanelResultFooterInSection:(long long)arg1;
- (void)doTagSearch:(NSString *)arg1 arrContacts:(NSArray *)arg2;
- (void)cancelSearch;
- (void)doSearch:(NSString *)arg1 Pre:(_Bool)arg2;
- (void)searchTextFieldWillClearText;
- (void)searchTextFieldDidEndEditing;
- (void)searchTextFieldDidBeginEditing;
- (_Bool)searchTextFieldShouldBeginEditing;
- (void)didDeleteLastWithKey:(NSString *)arg1;
- (void)didClickImageAtIndex:(unsigned int)arg1 withKey:(NSString *)arg2;
@end

