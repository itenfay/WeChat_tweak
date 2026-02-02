//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIScrollView.h>

@class MMFinderLiveGiftNewCustomizationModel, MMLiveRewardGiftNewCustomizationEditLogic, NSMutableArray;

@interface MMLiveRewardGiftNewCustomizationStyleSelectContainerView : UIScrollView
{
    MMLiveRewardGiftNewCustomizationEditLogic *_customizationEditLogic;
    NSMutableArray *_styleContentViewList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *styleContentViewList; // @synthesize styleContentViewList=_styleContentViewList;
@property(retain, nonatomic) MMLiveRewardGiftNewCustomizationEditLogic *customizationEditLogic; // @synthesize customizationEditLogic=_customizationEditLogic;
- (void)changeSelectToStyleContent:(id)arg1;
- (void)loadData;
@property(readonly, nonatomic) MMFinderLiveGiftNewCustomizationModel *customizationModel;
- (id)getComponentSelectContentViewWithKey:(id)arg1;
- (void)removeAllSelectContentViews;
- (void)layoutAllContentViews;
- (void)updateContainerContentSize;
- (void)updateStyleSelectContentViewOrigin:(id)arg1;
- (void)addNameSelectContentView:(id)arg1;
- (void)addComponentSelectContentView:(id)arg1;
- (void)addSelectContentViews;
- (void)layoutSubviews;
- (void)commonInit;
- (void)configCustomizationEditLogic:(id)arg1;
- (id)initWithCustomizationEditLogic:(id)arg1;

@end

