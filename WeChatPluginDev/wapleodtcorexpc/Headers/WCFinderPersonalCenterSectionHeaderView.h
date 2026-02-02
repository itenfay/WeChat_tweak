//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class MMUIButton, NSString, UIButton, UILabel, WCFinderAccountSelectedButton;
@protocol WCFinderPersonalCenterSectionHeaderViewDelegate;

@interface WCFinderPersonalCenterSectionHeaderView : UICollectionReusableView
{
    id <WCFinderPersonalCenterSectionHeaderViewDelegate> _delegate;
    UILabel *_titleLabel;
    MMUIButton *_identityHintButton;
    WCFinderAccountSelectedButton *_accountSelectButton;
    unsigned long long _style;
    UIButton *_settingButton;
}

+ (double)headerViewHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *settingButton; // @synthesize settingButton=_settingButton;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) WCFinderAccountSelectedButton *accountSelectButton; // @synthesize accountSelectButton=_accountSelectButton;
@property(retain, nonatomic) MMUIButton *identityHintButton; // @synthesize identityHintButton=_identityHintButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <WCFinderPersonalCenterSectionHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFinderNotifyMemberUnreadMentionCountNeedReload;
- (void)onFinderNotifyUnreadMentionCountNeedReload;
- (void)selectAccountButtonDidClick;
- (void)identityHintButtonDidClick;
- (void)_layoutSettingButton;
- (void)layoutSubviews;
- (void)setupSubviews;
- (void)enableSetting:(id)arg1 action:(SEL)arg2;
- (void)enableIdentityHint;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

