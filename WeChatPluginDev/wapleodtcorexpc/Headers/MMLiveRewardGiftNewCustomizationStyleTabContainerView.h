//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIScrollView.h>

@class MMFinderLiveGiftNewCustomizationModel, MMLiveRewardGiftNewCustomizationEditLogic, MMLiveRewardGiftStyleTabLabel, NSMutableArray;

@interface MMLiveRewardGiftNewCustomizationStyleTabContainerView : UIScrollView
{
    CDUnknownBlockType _selectChangeCallback;
    MMLiveRewardGiftNewCustomizationEditLogic *_customizationEditLogic;
    NSMutableArray *_styleTabLabelList;
    MMLiveRewardGiftStyleTabLabel *_currentSelectTabLabel;
}

+ (double)styleTabLabelLeftInset;
+ (double)preferHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveRewardGiftStyleTabLabel *currentSelectTabLabel; // @synthesize currentSelectTabLabel=_currentSelectTabLabel;
@property(retain, nonatomic) NSMutableArray *styleTabLabelList; // @synthesize styleTabLabelList=_styleTabLabelList;
@property(retain, nonatomic) MMLiveRewardGiftNewCustomizationEditLogic *customizationEditLogic; // @synthesize customizationEditLogic=_customizationEditLogic;
@property(copy, nonatomic) CDUnknownBlockType selectChangeCallback; // @synthesize selectChangeCallback=_selectChangeCallback;
@property(readonly, nonatomic) MMFinderLiveGiftNewCustomizationModel *customizationModel;
- (void)onTapStyleTabLabel:(id)arg1;
- (double)selectTabContainerLeftInset;
- (id)getTabLabelWithSelectStyle:(id)arg1;
- (void)onSelectTab:(id)arg1;
- (void)removeAllTabLabels;
- (void)loadDataAsync:(_Bool)arg1;
- (void)layoutAllTabLabels;
- (void)layoutSubviews;
- (void)updateContainerContentSize;
- (void)updateStyleTabLabelOrigin:(id)arg1;
- (void)updateTabLabelUIForSelect:(id)arg1;
- (id)createGiftStyleTabLabel:(id)arg1;
- (void)addNameSelectTabLabel:(id)arg1;
- (void)addComponentSelectTabLabel:(id)arg1;
- (void)addStyleSelectTabLabels;
- (void)configCustomizationEditLogic:(id)arg1;
- (void)commonInit;
- (id)initWithCustomizationEditLogic:(id)arg1;

@end

