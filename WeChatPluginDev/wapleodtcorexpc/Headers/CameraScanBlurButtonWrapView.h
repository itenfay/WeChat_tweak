//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, UIButton;

@interface CameraScanBlurButtonWrapView : UIView
{
    UIButton *_topButton;
    UIView *_bottomView;
    UIView *_middleView;
    MMUILabel *_introLbl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *introLbl; // @synthesize introLbl=_introLbl;
@property(retain, nonatomic) UIView *middleView; // @synthesize middleView=_middleView;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIButton *topButton; // @synthesize topButton=_topButton;
- (void)updateButtonIntroText:(id)arg1;
- (id)curIntroFont;
- (void)setupSubviews;
- (id)init;

@end

