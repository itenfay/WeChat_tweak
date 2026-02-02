//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UILabel, UIView;

@interface VideoHintFullViewController
{
    UIView *_backgroundView;
    UILabel *_controlLabel;
    UIView *_line;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UILabel *controlLabel; // @synthesize controlLabel=_controlLabel;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void)animationForControlHide;
- (void)animationForControlShow;
- (void)onBack:(id)arg1;
- (void)initView;
- (void)viewDidLoad;

@end

