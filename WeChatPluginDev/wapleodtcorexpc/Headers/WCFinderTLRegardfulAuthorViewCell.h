//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UILabel, UIView, WCFinderHeadImageView, WCFinderTLRegardfulAuthorCellViewModel;

@interface WCFinderTLRegardfulAuthorViewCell
{
    WCFinderTLRegardfulAuthorCellViewModel *_viewModel;
    CDUnknownBlockType _exposeCallback;
    WCFinderHeadImageView *_headImageView;
    UILabel *_nicknameLabel;
    UIView *_redDotView;
    UIView *_avatarViewCircle;
    UILabel *_avatarTextTipsLabel;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *avatarTextTipsLabel; // @synthesize avatarTextTipsLabel=_avatarTextTipsLabel;
@property(retain, nonatomic) UIView *avatarViewCircle; // @synthesize avatarViewCircle=_avatarViewCircle;
@property(nonatomic) __weak UIView *redDotView; // @synthesize redDotView=_redDotView;
@property(nonatomic) __weak UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(nonatomic) __weak WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(copy, nonatomic) CDUnknownBlockType exposeCallback; // @synthesize exposeCallback=_exposeCallback;
@property(retain, nonatomic) WCFinderTLRegardfulAuthorCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (id)accessibilityLabel;
- (void)setHighlighted:(_Bool)arg1;
- (id)genAvatarCircleWithCircleSize:(struct CGSize)arg1;
- (void)showLiveView:(_Bool)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)updateRedDotViewAndLiveStatus;
- (void)updateWithViewModel:(id)arg1;
- (void)setUpUI;
- (unsigned long long)entranceRdStatus;
- (void)clickActionReport;
- (id)initWithFrame:(struct CGRect)arg1;

@end

