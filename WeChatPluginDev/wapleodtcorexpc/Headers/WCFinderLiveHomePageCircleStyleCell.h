//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIImageView, UILabel, UIView, WCFinderHeadImageView, WCFinderLiveGenericFeedVM;

@interface WCFinderLiveHomePageCircleStyleCell
{
    WCFinderLiveGenericFeedVM *_feedVM;
    WCFinderHeadImageView *_headImageView;
    UILabel *_nicknameLabel;
    UIImageView *_avatarViewCircleStatic;
    UIView *_avatarTextTipsContainer;
    UILabel *_avatarTextTipsLabel;
}

+ (id)cellIdentifier;
+ (double)cellWidth;
+ (double)cellHeightInWidth:(double)arg1 styleInfo:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *avatarTextTipsLabel; // @synthesize avatarTextTipsLabel=_avatarTextTipsLabel;
@property(retain, nonatomic) UIView *avatarTextTipsContainer; // @synthesize avatarTextTipsContainer=_avatarTextTipsContainer;
@property(retain, nonatomic) UIImageView *avatarViewCircleStatic; // @synthesize avatarViewCircleStatic=_avatarViewCircleStatic;
@property(nonatomic) __weak UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(nonatomic) __weak WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) WCFinderLiveGenericFeedVM *feedVM; // @synthesize feedVM=_feedVM;
- (id)displayContact;
- (id)displayTipsBlurColor;
- (id)outlinedSvgImageWithSize:(struct CGSize)arg1;
- (id)displayTipsBackgroundColor;
- (id)displayTipsTextColor;
- (id)displayTips;
- (id)accessibilityLabel;
- (void)layoutSubviews;
- (void)initSubviews;
- (void)updateWithFeedVM:(id)arg1;
- (void)prepareForReuse;
- (void)initViewsIfNeeded;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

