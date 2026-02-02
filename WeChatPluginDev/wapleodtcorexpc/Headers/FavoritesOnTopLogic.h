//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavoritesItem, MMUIViewController, NSString, WNOpenParameter;

@interface FavoritesOnTopLogic
{
    FavoritesItem *_currentOnTopNoteItem;
    WNOpenParameter *_openParameter;
    MMUIViewController *_currentVc;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIViewController *currentVc; // @synthesize currentVc=_currentVc;
@property(retain, nonatomic) WNOpenParameter *openParameter; // @synthesize openParameter=_openParameter;
@property(retain, nonatomic) FavoritesItem *currentOnTopNoteItem; // @synthesize currentOnTopNoteItem=_currentOnTopNoteItem;
- (void)onHomepageUpdate:(long long)arg1 withAdded:(id)arg2 andChanged:(id)arg3 andDeleted:(id)arg4 andTip:(id)arg5;
- (void)onDataChangedWithAdded:(id)arg1 andChanged:(id)arg2 andDeleted:(id)arg3;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelFavoritesItems:(id)arg1;
- (void)OnUpdateItems:(id)arg1;
- (id)genTimeString:(unsigned int)arg1;
- (void)checkNeedRepord:(id)arg1;
- (void)reLoadNoteItem;
- (void)reloadConversionBanner;
- (id)getBannerTitle;
- (id)getKeepHoldFavDetailVCForNewMainFrameBanner;
- (id)currentOnTopFavItem;
- (void)showConversionOnTop:(_Bool)arg1 msgWrap:(id)arg2 wcDataItem:(id)arg3 favDataWrap:(id)arg4 editable:(_Bool)arg5 viewController:(id)arg6;
- (id)curOnTopNoteCheckId;
- (void)onServiceClearData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

