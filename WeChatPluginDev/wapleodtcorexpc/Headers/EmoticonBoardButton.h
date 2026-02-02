//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMBadgeView, UIImage, UIImageView;

@interface EmoticonBoardButton
{
    MMBadgeView *m_badgeView;
    UIImageView *m_effectView;
    UIImage *m_buttonImage;
    unsigned long long m_type;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long type; // @synthesize type=m_type;
@property(retain, nonatomic) UIImage *buttonImage; // @synthesize buttonImage=m_buttonImage;
- (id)accessibilityLabel;
- (void)hideNewYearEffect;
- (void)showNewYearEffect;
- (void)updateDesc;
- (void)configBadge;
- (void)hidePreview;
- (void)hideFocusView;
- (void)showFocusView;
- (void)showPreview;
- (void)initView;

@end

