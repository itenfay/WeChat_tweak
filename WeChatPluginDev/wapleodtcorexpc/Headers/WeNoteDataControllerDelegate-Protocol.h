//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FavoritesItemDataField, NSIndexPath, NSString, RTEAttachmentViewProvider, RTESectionChangeInfo, UIAccessibilityElement, UIScrollView, WeNoteViewController;

@protocol WeNoteDataControllerDelegate <NSObject>
- (void)reloadTableView;
- (long long)currentOrientation;
- (void)contentViewWillBeginDragging;
- (void)willVisibleTextViewAt:(NSIndexPath *)arg1;
- (void)onOpenTopicWithUrl:(NSString *)arg1;
- (void)didContentViewScrollEnd;
- (void)showToastOnToolView:(NSString *)arg1;
- (void)noteScrollViewDidScroll:(UIScrollView *)arg1 extendHeight:(double)arg2;
- (void)onTableSectionChange:(RTESectionChangeInfo *)arg1;
- (void)onCellHeightChange;
- (void)onNoteDownloadResourceNone;
- (void)onNoteDownloadResourceFail;
- (void)onNoteDownloadResourceSuccess;
- (void)onNoteSecurityCheckFail;
- (void)onNoteSecurityCheckOK;
- (NSString *)getPlaceHolder;
- (struct CGSize)getViewSize;
- (FavoritesItemDataField *)getScollToData;
- (WeNoteViewController *)getCurrentViewController;
- (RTEAttachmentViewProvider *)getAttachmentViewProviderForSquareImageUtilWithTransparentMode;
- (RTEAttachmentViewProvider *)getAttachmentViewProviderForSquareImageUtilWithDarkMode;
- (RTEAttachmentViewProvider *)getAttachmentViewProviderForSquareImageUtilWithLightMode;
- (RTEAttachmentViewProvider *)getAttachmentViewProviderForLongImageUtilWithTransparentMode;
- (RTEAttachmentViewProvider *)getAttachmentViewProviderForLongImageUtilWithDarkMode;
- (RTEAttachmentViewProvider *)getAttachmentViewProviderForLongImageUtilWithLightMode;
- (RTEAttachmentViewProvider *)getAttachmentViewProvider;
- (void)cancelSelect;
- (void)tryUpdateSelectionViewOnScroll;
- (void)hideMenu;
- (void)tryShowSelectionViewWithMenue:(_Bool)arg1;
- (_Bool)isSelectionViewShowing;
- (void)updateAllOrderedListView;
- (void)updateTypingAttribute;
- (void)updateToolViewStatus;
- (void)resetToolViewType;
- (void)updateSelection;
- (void)scrollElementToVisible:(UIAccessibilityElement *)arg1;
- (void)scrollSelectionToVisible;
- (void)setForbidUpdateToolViewEnable:(_Bool)arg1;
- (void)didGenerationFinished;
- (void)reloadSectionAtIndex:(unsigned long long)arg1;
- (void)reloadAll;
- (void)updateRightBarBtnStatus;
- (void)hideKeyboard;
- (void)showKeyboard;
- (void)stopLoading;
- (void)showLoading;
@end

