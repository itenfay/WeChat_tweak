//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, SettingModifyEmailOnBindHeadView, UIButton;

@interface SettingModifyEmailOnBindViewController
{
    SettingModifyEmailOnBindHeadView *m_commonHeadView;
    UIButton *_unbindEmailButton;
    NSString *_currentEmail;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *currentEmail; // @synthesize currentEmail=_currentEmail;
@property(retain, nonatomic) UIButton *unbindEmailButton; // @synthesize unbindEmailButton=_unbindEmailButton;
@property(retain, nonatomic) SettingModifyEmailOnBindHeadView *m_commonHeadView; // @synthesize m_commonHeadView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithEmailLogic:(id)arg1;

@end

