//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMHDHeadImageView, NSString, SettingMyAccountExtInfoLogic;

@interface SettingHeadImgViewController
{
    MMHDHeadImageView *m_hdHeadImageView;
    SettingMyAccountExtInfoLogic *m_infoLogic;
    _Bool _operateDirectly;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool operateDirectly; // @synthesize operateDirectly=_operateDirectly;
- (void)onImgChangeEnd:(_Bool)arg1 withError:(id)arg2;
- (void)onImgBeginChange:(id)arg1;
- (void)onInfoChange;
- (void)viewDidLayoutSubviews;
- (void)Operate:(id)arg1;
- (void)onImgSave;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)shouldRestrictContentViewSize;
- (_Bool)useTransparentNavibar;
- (id)initWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

