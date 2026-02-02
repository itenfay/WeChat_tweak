//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMLiveRewardGiftNewCustomizationEditLogic, MMLiveRewardGiftNewCustomizationStyleSelectContainerView, MMLiveRewardGiftNewCustomizationStyleTabContainerView;

@interface MMLiveRewardGiftNewCustomizationStyleSelectView : UIView
{
    MMLiveRewardGiftNewCustomizationEditLogic *_customizationEditLogic;
    MMLiveRewardGiftNewCustomizationStyleTabContainerView *_styleTabContainerView;
    MMLiveRewardGiftNewCustomizationStyleSelectContainerView *_styleSelectContainerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveRewardGiftNewCustomizationStyleSelectContainerView *styleSelectContainerView; // @synthesize styleSelectContainerView=_styleSelectContainerView;
@property(retain, nonatomic) MMLiveRewardGiftNewCustomizationStyleTabContainerView *styleTabContainerView; // @synthesize styleTabContainerView=_styleTabContainerView;
@property(retain, nonatomic) MMLiveRewardGiftNewCustomizationEditLogic *customizationEditLogic; // @synthesize customizationEditLogic=_customizationEditLogic;
- (void)layoutStyleSelectContainerView;
- (double)selectTabContainerLeft;
- (void)layoutStyleTabContainerView;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithCustomizationEditLogic:(id)arg1;

@end

