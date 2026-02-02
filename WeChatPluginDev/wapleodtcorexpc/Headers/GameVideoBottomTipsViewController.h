//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView;

@interface GameVideoBottomTipsViewController
{
    UIView *_backgroundView;
}

- (void).cxx_destruct;
- (void)makePartCornerToView:(id)arg1 corner:(unsigned long long)arg2 radius:(double)arg3;
- (void)viewDidAppear:(_Bool)arg1;
- (void)closeWithCompletion:(CDUnknownBlockType)arg1;
- (void)close;
- (void)show:(id)arg1;
- (void)setupContentView:(id)arg1;
- (double)contentHeight;
- (_Bool)hideOkButton;
- (void)setupOkButton:(id)arg1;
- (_Bool)dismissWhenTapOutside;
- (void)doNothing;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

