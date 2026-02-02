//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIButton;
@protocol WCLabSettingDetailFooterViewDelegate;

@interface WCLabSettingDetailFooterView : UIView
{
    UIButton *_exposeButton;
    id <WCLabSettingDetailFooterViewDelegate> _delegate;
}

+ (double)height;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WCLabSettingDetailFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)initExposeButton;
- (void)onClickExposeButton:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

