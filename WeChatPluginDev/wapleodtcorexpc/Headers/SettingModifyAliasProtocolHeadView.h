//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMCopyLabel;
@protocol SettingModifyAliasProtocolHeadViewDelegate;

@interface SettingModifyAliasProtocolHeadView
{
    MMCopyLabel *_m_aliasLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMCopyLabel *m_aliasLabel; // @synthesize m_aliasLabel=_m_aliasLabel;
- (void)onLabelLongPress:(id)arg1 withRect:(struct CGRect)arg2;
- (void)updateViewWithLogoSVGImage:(id)arg1 headContact:(id)arg2 headTitle:(id)arg3 headContent:(id)arg4;

// Remaining properties
@property(nonatomic) __weak id <SettingModifyAliasProtocolHeadViewDelegate> m_delegate;

@end

