//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIButton;
@protocol WNActionButtonDelegate;

@interface WNActionButton : UIView
{
    _Bool _isShowBorder;
    long long _dataSourceType;
    id <WNActionButtonDelegate> _delegate;
    UIButton *_button;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isShowBorder; // @synthesize isShowBorder=_isShowBorder;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(nonatomic) __weak id <WNActionButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long dataSourceType; // @synthesize dataSourceType=_dataSourceType;
- (void)onLabelClick:(id)arg1;
- (id)generateSystemButtonWithTitle:(id)arg1 andImage:(id)arg2 andType:(long long)arg3;
- (id)generateStandButtonWithTitle:(id)arg1 andImage:(id)arg2 andFont:(id)arg3 andWidth:(double)arg4 andType:(long long)arg5;
- (id)initButtonWithInfo:(id)arg1;

@end

