//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIStackView.h>

@class MMUILabel, UIImageView, UISlider, UISwitch;

@interface GeneralHStack : UIStackView
{
    MMUILabel *_titleLabel;
    MMUILabel *_detailLabel;
    UISwitch *_uiSwitch;
    UISlider *_uiSlider;
    UIImageView *_imageView;
    UIImageView *_accessoryView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UISlider *uiSlider; // @synthesize uiSlider=_uiSlider;
@property(retain, nonatomic) UISwitch *uiSwitch; // @synthesize uiSwitch=_uiSwitch;
@property(retain, nonatomic) MMUILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (id)init;

@end

