//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMImageOpenWeAppLogic, NSMutableArray, NSString;
@protocol FavActionSheetDelegate;

@interface FavActionSheet
{
    NSMutableArray *m_itemArray;
    NSMutableArray *m_firstRow;
    NSMutableArray *m_secondRow;
    long long m_enableItemType;
    MMImageOpenWeAppLogic *m_openWeAppLogic;
    id <FavActionSheetDelegate> _favDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FavActionSheetDelegate> favDelegate; // @synthesize favDelegate=_favDelegate;
- (void)onQRCodeScansFinished;
- (void)onQRCodeRowViewBanned;
- (void)onQRCodeRowViewTapped;
- (void)onAppendQRCodeMultiView:(id)arg1;
- (void)scrollActionSheetWillDismiss:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)relayoutScrollSheet;
- (void)clickRFItemCallBack:(id)arg1;
- (id)AddNewActionSheetCell2Array:(id)arg1 WithText:(id)arg2 WithImage:(id)arg3 WithAccessibilityLabel:(id)arg4;
- (id)AddNewActionSheetCell2Array:(id)arg1 WithText:(id)arg2 WithImage:(id)arg3;
- (void)configSheetItem;
- (void)configScanQRWith:(id)arg1;
- (void)configActionSheet;
- (void)configRecentForwardScrollView;
- (id)recentForwardView;
- (id)initWithFavDelegate:(id)arg1 enableType:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

