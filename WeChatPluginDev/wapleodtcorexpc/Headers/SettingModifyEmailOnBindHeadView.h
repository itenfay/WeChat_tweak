//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel;

@interface SettingModifyEmailOnBindHeadView
{
    _Bool _showFullEmail;
    MMUILabel *_emailLabel;
    MMUIButton *_emailOperateButton;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showFullEmail; // @synthesize showFullEmail=_showFullEmail;
@property(retain, nonatomic) MMUIButton *emailOperateButton; // @synthesize emailOperateButton=_emailOperateButton;
@property(retain, nonatomic) MMUILabel *emailLabel; // @synthesize emailLabel=_emailLabel;
- (void)layoutUI;
- (void)updateViewWithTitle:(id)arg1 content:(id)arg2 email:(id)arg3 showEmail:(_Bool)arg4;

@end

