//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveNewCustomGiftComponent, MMLiveRewardGiftNewCustomizationComponentTagView, NSMutableArray, UIScrollView;

@interface MMLiveRewardGiftNewCustomizationStyleComponentSelectContentView
{
    MMFinderLiveNewCustomGiftComponent *_component;
    UIScrollView *_componentContainerView;
    NSMutableArray *_componentTagViewList;
    MMLiveRewardGiftNewCustomizationComponentTagView *_currSelectComponentTagView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMLiveRewardGiftNewCustomizationComponentTagView *currSelectComponentTagView; // @synthesize currSelectComponentTagView=_currSelectComponentTagView;
@property(retain, nonatomic) NSMutableArray *componentTagViewList; // @synthesize componentTagViewList=_componentTagViewList;
@property(retain, nonatomic) UIScrollView *componentContainerView; // @synthesize componentContainerView=_componentContainerView;
@property(retain, nonatomic) MMFinderLiveNewCustomGiftComponent *component; // @synthesize component=_component;
- (id)styleObj;
- (void)onCurrentSelectComponentKeyChanged;
- (id)getComponentTagViewWithKey:(id)arg1;
- (void)initContentMode;
- (void)initSelectState;
- (void)updateComponentTagContainerContentSize:(struct CGSize)arg1;
- (void)layoutComponentTagViews;
- (void)layoutComponentTagContainerView;
- (id)createComponentTagView:(id)arg1;
- (void)createComponentTagViews;
- (double)componentContainerLeftInset;
- (void)createComponentTagContainerView;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithComponent:(id)arg1;

@end

