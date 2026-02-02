//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMPersonalEmotionsViewController, MMUnderlineTabsView, MMWechatEmotionsViewController, NSMutableArray, StoreEmotionHomePageViewController, UIImageView;

@interface MMEmotionStoreViewController
{
    MMWechatEmotionsViewController *_wechatEmotionsViewController;
    StoreEmotionHomePageViewController *_homePageViewController;
    MMPersonalEmotionsViewController *_personalEmotionsViewContrller;
    UIImageView *_badgeView;
    unsigned int _scene;
    _Bool _isReport;
    unsigned long long m_defaultSelectedTag;
    _Bool _newHomePage;
    CDUnknownBlockType _onCanelModelViewBlock;
    unsigned long long _searchScene;
    MMUnderlineTabsView *_sectionTab;
    NSMutableArray *_sectionItems;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool newHomePage; // @synthesize newHomePage=_newHomePage;
@property(retain, nonatomic) NSMutableArray *sectionItems; // @synthesize sectionItems=_sectionItems;
@property(retain, nonatomic) MMUnderlineTabsView *sectionTab; // @synthesize sectionTab=_sectionTab;
@property(nonatomic) unsigned long long searchScene; // @synthesize searchScene=_searchScene;
@property(copy, nonatomic) CDUnknownBlockType onCanelModelViewBlock; // @synthesize onCanelModelViewBlock=_onCanelModelViewBlock;
- (void)registerYReportSdk;
- (void)onTabsViewValueChanged:(id)arg1;
- (void)OnEmoticonExptConfigChange:(unsigned long long)arg1;
- (void)clickEmotionCharts;
- (void)replaceFromViewController:(id)arg1 toViewController:(id)arg2;
- (void)clickPersonalEmotionsTab;
- (void)clickWechatEmotionsTab;
- (void)longPressTab:(id)arg1;
- (void)updateNew:(_Bool)arg1;
- (id)genTabItemWithTitle:(id)arg1 isSelected:(_Bool)arg2;
- (void)configSections;
- (void)onOperate;
- (void)OnCancelModalView:(id)arg1;
- (void)configViewControllers;
- (_Bool)isNeedPersonalViewTab;
- (void)configViews;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initSearchScene;
- (id)initWithEmotionScene:(unsigned int)arg1 AndDefaultTag:(unsigned long long)arg2;
- (id)initWithEmotionScene:(unsigned int)arg1 withRequestType:(unsigned int)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (id)init;

@end

