//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, UIButton, UICollectionView, WAWebViewController, ZZFLEXAngel;

@interface WADebugMenuSheet
{
    WAWebViewController *_webVC;
    UIButton *_cancelButton;
    UICollectionView *_collectionView;
    ZZFLEXAngel *_angel;
    NSArray *_menuData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *menuData; // @synthesize menuData=_menuData;
@property(retain, nonatomic) ZZFLEXAngel *angel; // @synthesize angel=_angel;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak WAWebViewController *webVC; // @synthesize webVC=_webVC;
- (void)pageSheetWillAppear:(id)arg1;
- (void)resetContentViewCornerRadius;
- (double)contentHeight;
- (void)reloadData;
- (void)setupUI;
- (void)showAuditsMenu;
- (void)showSwitchRenderMenu;
- (id)init;
- (id)initWithWebVC:(id)arg1;

@end

