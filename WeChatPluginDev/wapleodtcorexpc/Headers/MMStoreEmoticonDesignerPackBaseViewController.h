//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class DesignerPortfolioCollectionViewProvider, EmoticonStoreFootView, NSString, UILabel;

@interface MMStoreEmoticonDesignerPackBaseViewController
{
    unsigned int _designerUin;
    DesignerPortfolioCollectionViewProvider *_provider;
    UILabel *_emptyHintLabel;
    EmoticonStoreFootView *_footerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EmoticonStoreFootView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UILabel *emptyHintLabel; // @synthesize emptyHintLabel=_emptyHintLabel;
@property(retain, nonatomic) DesignerPortfolioCollectionViewProvider *provider; // @synthesize provider=_provider;
@property(nonatomic) unsigned int designerUin; // @synthesize designerUin=_designerUin;
- (void)onFetchDoneEmoticonData;
- (void)onFetchMoreEmoticonData;
- (void)onGetEmoticonPacksForDisplay:(_Bool)arg1;
- (_Bool)shouldRemoveExpiredPack;
- (void)viewDidTransitionToNewSize;
- (void)initView;
- (void)onTapBackBarItem;
- (void)OnCancelModalView:(id)arg1;
- (void)initNavBar;
- (void)viewDidLoad;
- (id)initWithDesignerUin:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

