//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UICollectionViewCell, WCFinderContact, WCFinderDataItem, WCFinderFeedContentVM;

@protocol WCFinderFeedStaticCoverHighlightCollectionViewCellDelegate <NSObject>

@optional
- (void)cellNeedsUpdateHeight:(WCFinderFeedContentVM *)arg1;
- (void)onSelectItem:(WCFinderFeedContentVM *)arg1 selected:(_Bool)arg2;
- (void)onClickDeleteAction:(UICollectionViewCell *)arg1 contentVM:(WCFinderFeedContentVM *)arg2;
- (void)onClickEditTagAction:(WCFinderFeedContentVM *)arg1;
- (void)onClickForwardAction:(WCFinderFeedContentVM *)arg1;
- (void)onClickMutiSelectedAction;
- (void)onClickAnchorAction:(WCFinderFeedContentVM *)arg1;
- (void)onClickRemoveAction:(WCFinderFeedContentVM *)arg1;
- (void)onClickCoverContact:(WCFinderContact *)arg1 dataItem:(WCFinderDataItem *)arg2;
@end

