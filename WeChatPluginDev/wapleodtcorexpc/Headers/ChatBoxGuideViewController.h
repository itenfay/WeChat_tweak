//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSString, UIButton, UILabel, UIView;

@interface ChatBoxGuideViewController
{
    NSString *_chatroomUsername;
    UILabel *_titleLabel;
    UIView *_animateView;
    UIButton *_confirmButton;
    MMUIButton *_goButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *goButton; // @synthesize goButton=_goButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIView *animateView; // @synthesize animateView=_animateView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *chatroomUsername; // @synthesize chatroomUsername=_chatroomUsername;
- (void)onClickGoButton:(id)arg1;
- (void)onClickConfirmButton:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

