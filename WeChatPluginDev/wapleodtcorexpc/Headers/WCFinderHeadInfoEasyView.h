//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, MMWebImageView, NSMutableArray, NSString, UILabel, WCFinderAuthInfoIconView, WCFinderContact, WCFinderHeadContactInfoView, WCFinderHeadImageView, WCFinderJumpInfo;
@protocol WCFinderHeadInfoViewDelegate;

@interface WCFinderHeadInfoEasyView : UIView
{
    _Bool _enableShowFollowedLabel;
    _Bool _thisContentVMShouldShowFollowBtn;
    _Bool _hasJustBeenReset;
    _Bool _isFollowBtnDisplayingForBrandContact;
    id <WCFinderHeadInfoViewDelegate> _delegate;
    WCFinderJumpInfo *_avatarJumpInfo;
    WCFinderHeadImageView *_avatarView;
    UIView *_avatarViewCircle;
    UILabel *_avatarTextTipsLabel;
    WCFinderHeadContactInfoView *_nameInfoView;
    WCFinderAuthInfoIconView *_authView;
    UILabel *_followedLabel;
    UILabel *_descriptionLabel;
    MMUIButton *_followBtn;
    MMWebImageView *_brandLogoView;
    UIView *_gestureView;
    NSString *_descTipsStr;
    WCFinderContact *_contact;
    NSString *_brandLogoUrl;
    NSMutableArray *_elementsArray;
    NSMutableArray *_customeAccessibleElements;
}

+ (double)defaultHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *customeAccessibleElements; // @synthesize customeAccessibleElements=_customeAccessibleElements;
@property(retain, nonatomic) NSMutableArray *elementsArray; // @synthesize elementsArray=_elementsArray;
@property(retain, nonatomic) NSString *brandLogoUrl; // @synthesize brandLogoUrl=_brandLogoUrl;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(nonatomic) _Bool isFollowBtnDisplayingForBrandContact; // @synthesize isFollowBtnDisplayingForBrandContact=_isFollowBtnDisplayingForBrandContact;
@property(nonatomic) _Bool hasJustBeenReset; // @synthesize hasJustBeenReset=_hasJustBeenReset;
@property(nonatomic) _Bool thisContentVMShouldShowFollowBtn; // @synthesize thisContentVMShouldShowFollowBtn=_thisContentVMShouldShowFollowBtn;
@property(nonatomic) _Bool enableShowFollowedLabel; // @synthesize enableShowFollowedLabel=_enableShowFollowedLabel;
@property(copy, nonatomic) NSString *descTipsStr; // @synthesize descTipsStr=_descTipsStr;
@property(retain, nonatomic) UIView *gestureView; // @synthesize gestureView=_gestureView;
@property(retain, nonatomic) MMWebImageView *brandLogoView; // @synthesize brandLogoView=_brandLogoView;
@property(retain, nonatomic) MMUIButton *followBtn; // @synthesize followBtn=_followBtn;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *followedLabel; // @synthesize followedLabel=_followedLabel;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authView; // @synthesize authView=_authView;
@property(retain, nonatomic) WCFinderHeadContactInfoView *nameInfoView; // @synthesize nameInfoView=_nameInfoView;
@property(retain, nonatomic) UILabel *avatarTextTipsLabel; // @synthesize avatarTextTipsLabel=_avatarTextTipsLabel;
@property(retain, nonatomic) UIView *avatarViewCircle; // @synthesize avatarViewCircle=_avatarViewCircle;
@property(retain, nonatomic) WCFinderHeadImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) WCFinderJumpInfo *avatarJumpInfo; // @synthesize avatarJumpInfo=_avatarJumpInfo;
@property(nonatomic) __weak id <WCFinderHeadInfoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isEqualToMyContact:(id)arg1;
- (void)onClickFollowBtn:(id)arg1;
- (void)clickAvatorAndName:(id)arg1;
- (void)onFinderContactFollowStatusUpdateFailure:(id)arg1;
- (void)onFinderContactFollowStatusUpdate:(id)arg1;
- (void)onFinderContactUpdate:(id)arg1;
- (id)updateContactOneTimeFlag:(id)arg1;
- (int)showPosition;
- (id)jumpInfo;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (_Bool)hasBrandLogo;
- (_Bool)hasFollowBtn;
- (_Bool)hasDescriptionLabel;
- (_Bool)hasFollowedLabel;
- (void)addGestureView;
- (void)removeFollowBtn;
- (void)removeDescriptionLabel;
- (void)addAvatarViewWithSize:(struct CGSize)arg1 leftMargin:(double)arg2;
- (void)updateBrandLogoImageUrl:(id)arg1;
- (void)updateFollowedLabel;
- (void)showFollowBtn;
- (void)beginFollowBtnAnimation;
- (id)genAvatarCircleWithCircleSize:(struct CGSize)arg1;
- (void)setUpFullFeedContentSummaryHeaderViewLayout;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateAccessibility;
- (_Bool)canShowAuthInfo;
- (void)reloadHeaderWithContact;
- (struct CGRect)avatarFrame;
- (struct CGRect)followBtnFrame;
- (id)userAvatarSnapshot;
- (void)resetReuseState;
- (_Bool)canFollowBtnShow;
- (void)setIsFollowBtnDisplayingWhenBrandContact:(_Bool)arg1;
- (void)updateFollowBtn:(_Bool)arg1;
- (void)setShowFollowBtn:(_Bool)arg1;
- (void)setShouldShowFollowTips:(_Bool)arg1;
- (void)updateDescriptionLabel:(id)arg1;
- (void)updateConstraintsWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

