//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface WARemoteDebugMaskView : UIView
{
    _Bool _isShowing;
    UILabel *_label;
    UIButton *_stopButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *stopButton; // @synthesize stopButton=_stopButton;
- (void)dismiss;
- (void)showWithString:(id)arg1;
- (id)init;

@end

