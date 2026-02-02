//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIButton.h>

@class UIImageView, UIView, WCTagItemViewModel;

@interface WCTagItemView : UIButton
{
    WCTagItemViewModel *_viewModel;
    CDUnknownBlockType _clickAction;
    long long _lastType;
    UIImageView *_tagImageView;
    UIView *_customView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(retain, nonatomic) UIImageView *tagImageView; // @synthesize tagImageView=_tagImageView;
@property(nonatomic) long long lastType; // @synthesize lastType=_lastType;
@property(copy, nonatomic) CDUnknownBlockType clickAction; // @synthesize clickAction=_clickAction;
@property(retain, nonatomic) WCTagItemViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (_Bool)isAccessibilityElement;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithClickAction:(CDUnknownBlockType)arg1;

@end

