//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavActionSheet, FavImagePreView, NSString, WCActionSheetWithScanWXCode;

@interface FavMultiImageDetailViewController
{
    unsigned int m_uiLongPressedIndex;
    _Bool m_hasIllegalData;
    int m_qrcodeActionSheetIndex;
    WCActionSheetWithScanWXCode *m_favImgLongPressAction;
    FavImagePreView *m_longPressView;
    FavActionSheet *m_favActionSheet;
}

- (void).cxx_destruct;
- (id)getFavForawrdViewController;
- (void)OnFavoritesItemDownloadFinished:(id)arg1 ErrCode:(int)arg2;
- (void)viewDidTransitionToNewSize;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onWillLongPressFavImagePreView:(id)arg1 imageView:(id)arg2;
- (void)onLongPressedFavPreImage:(id)arg1;
- (void)onClickFavPreImage:(id)arg1 ImageIndex:(unsigned int)arg2;
- (void)onSaveFavDataImg;
- (void)onForwardFavDataWrap2WC;
- (void)onForwardFavDataWrap2MsgToUser:(id)arg1;
- (void)onForwardFavDataWrap2Msg;
- (void)genContent:(id)arg1 indexPath:(id)arg2;
- (double)getHeightForRowAtIndexPath:(id)arg1;
- (long long)getRowsInContentSection;
- (void)onFavActionSheetWillDismiss;
- (void)onFavActionSheetSelectedForwardToUser:(id)arg1;
- (void)onFavActionSheetSelectedItemWithType:(long long)arg1;
- (id)getCurrentViewController;
- (void)onAction:(id)arg1;
- (void)adjustViewAndNavBarRect;
- (void)viewDidLoad;
- (void)checkIllegalTypeWithDataList:(id)arg1;
- (id)initWithFavItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

