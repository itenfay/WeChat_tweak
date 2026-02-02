//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIImageView, UILabel, WCFinderAuthInfoIconView, WCFinderHeadImageView, WCFinderReuseQueue;

@interface WCFinderPersonalCenterContactView : UIView
{
    WCFinderHeadImageView *_avatarView;
    UILabel *_nicknameLabel;
    WCFinderAuthInfoIconView *_authIconView;
    UILabel *_fansLabel;
    UILabel *_reviewLabel;
    UILabel *_logoutTips;
    UIImageView *_arrowView;
    UILabel *_settingRedTextView;
    UIView *_settingRedDotView;
    WCFinderReuseQueue *_previewViewReuseQueue;
    NSMutableArray *_previewViews;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *previewViews; // @synthesize previewViews=_previewViews;
@property(retain, nonatomic) WCFinderReuseQueue *previewViewReuseQueue; // @synthesize previewViewReuseQueue=_previewViewReuseQueue;
@property(retain, nonatomic) UIView *settingRedDotView; // @synthesize settingRedDotView=_settingRedDotView;
@property(retain, nonatomic) UILabel *settingRedTextView; // @synthesize settingRedTextView=_settingRedTextView;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UILabel *logoutTips; // @synthesize logoutTips=_logoutTips;
@property(retain, nonatomic) UILabel *reviewLabel; // @synthesize reviewLabel=_reviewLabel;
@property(retain, nonatomic) UILabel *fansLabel; // @synthesize fansLabel=_fansLabel;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authIconView; // @synthesize authIconView=_authIconView;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *avatarView; // @synthesize avatarView=_avatarView;
- (id)accessibilityLabelForContact:(id)arg1;
- (unsigned long long)accessibilityTraits;
- (void)_setupPreviewViews:(id)arg1;
- (void)updateContact:(id)arg1 prepare:(id)arg2 settingRedDot:(id)arg3 newPreviewStyle:(_Bool)arg4 previewData:(id)arg5;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)_applyLayout;
- (void)_setupLayout;
- (void)_setupArrow;
- (void)_setupLogoutTip;
- (void)_setupSettingViews;
- (void)_setupFansLabel;
- (void)_setupReviewLabel;
- (void)_setupAuthIcon;
- (void)_setupNickname;
- (void)_setupAvatar;
- (void)_setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

