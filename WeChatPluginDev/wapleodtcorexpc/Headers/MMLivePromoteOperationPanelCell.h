//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIButton.h>

@class NSString, UIImageView, UILabel, UIView;

@interface MMLivePromoteOperationPanelCell : UIButton
{
    _Bool _isCellViewDisabled;
    NSString *_title;
    NSString *_svgIconName;
    NSString *_stateText;
    unsigned long long _uiStyle;
    UIView *_customizedBackgroundView;
    UIImageView *_customizedUIImageView;
    UILabel *_customizedTitleLabel;
    UILabel *_customizedStateTextLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *customizedStateTextLabel; // @synthesize customizedStateTextLabel=_customizedStateTextLabel;
@property(retain, nonatomic) UILabel *customizedTitleLabel; // @synthesize customizedTitleLabel=_customizedTitleLabel;
@property(retain, nonatomic) UIImageView *customizedUIImageView; // @synthesize customizedUIImageView=_customizedUIImageView;
@property(retain, nonatomic) UIView *customizedBackgroundView; // @synthesize customizedBackgroundView=_customizedBackgroundView;
@property(nonatomic) unsigned long long uiStyle; // @synthesize uiStyle=_uiStyle;
@property(nonatomic) _Bool isCellViewDisabled; // @synthesize isCellViewDisabled=_isCellViewDisabled;
@property(readonly, copy, nonatomic) NSString *stateText; // @synthesize stateText=_stateText;
@property(readonly, copy, nonatomic) NSString *svgIconName; // @synthesize svgIconName=_svgIconName;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (_Bool)updateStateText:(id)arg1;
- (void)layoutSubviews;
- (id)initWithTitle:(id)arg1 svgIconName:(id)arg2 stateText:(id)arg3;
- (id)initWithTitle:(id)arg1 svgIconName:(id)arg2;

@end

