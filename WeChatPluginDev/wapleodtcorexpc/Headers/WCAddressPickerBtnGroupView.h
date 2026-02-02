//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIButton, UIScrollView;
@protocol WCAddressTableViewDelegate;

@interface WCAddressPickerBtnGroupView : UIView
{
    id <WCAddressTableViewDelegate> m_delegate;
    UIButton *_selectProvinceButton;
    UIButton *_selectCityButton;
    UIButton *_selectDistrictButton;
    UIButton *_selectStreetButton;
    UIScrollView *_containerView;
    UIView *_separateLine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separateLine; // @synthesize separateLine=_separateLine;
@property(retain, nonatomic) UIScrollView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIButton *selectStreetButton; // @synthesize selectStreetButton=_selectStreetButton;
@property(retain, nonatomic) UIButton *selectDistrictButton; // @synthesize selectDistrictButton=_selectDistrictButton;
@property(retain, nonatomic) UIButton *selectCityButton; // @synthesize selectCityButton=_selectCityButton;
@property(retain, nonatomic) UIButton *selectProvinceButton; // @synthesize selectProvinceButton=_selectProvinceButton;
- (void)updateLayoutWhenComponentAppear:(long long)arg1;
- (void)updateContainerLayout;
- (void)layoutBtnAtIndex:(unsigned long long)arg1 withStatus:(int)arg2 andTitle:(id)arg3;
- (id)buttonAtIndex:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (id)defaultButtonTiltes;
- (void)onClickButton:(id)arg1;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

