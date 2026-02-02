//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavDataItemWrap, FavoritesItem, FavoritesItemDataField, NSString;

@interface FavMoviePlayerController
{
    FavoritesItem *m_favItem;
    FavDataItemWrap *m_favDataWrap;
    FavoritesItemDataField *m_favData;
    _Bool m_isActionSheetShowing;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FavoritesItemDataField *m_favData; // @synthesize m_favData;
@property(retain, nonatomic) FavDataItemWrap *m_favDataWrap; // @synthesize m_favDataWrap;
@property(retain, nonatomic) FavoritesItem *m_favItem; // @synthesize m_favItem;
- (id)getFavForawrdViewController;
- (void)handleLongPressEx:(id)arg1;
- (void)onFavDelete;
- (void)onFavTagEditCancel;
- (void)onFavTagEditOK;
- (unsigned long long)supportedInterfaceOrientations;
- (void)onFavTagEdit;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onOperate:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithFavDataWrap:(id)arg1;
- (id)initWithFavItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

