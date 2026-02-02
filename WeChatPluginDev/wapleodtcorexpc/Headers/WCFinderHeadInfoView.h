//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, MMWebImageView, NSMutableArray, NSMutableDictionary, NSString, RichTextView, UILabel, WCFinderAuthInfoIconView, WCFinderContact, WCFinderFollowedLabel, WCFinderHeadImageView, WCFinderJumpInfo;
@protocol WCFinderHeadInfoViewDelegate;

@interface WCFinderHeadInfoView : UIView
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
    RichTextView *_nameLabel;
    WCFinderAuthInfoIconView *_authView;
    WCFinderFollowedLabel *_followedLabel;
    UILabel *_descriptionLabel;
    MMUIButton *_followBtn;
    MMWebImageView *_brandLogoView;
    UIView *_elementContentView;
    UIView *_gestureView;
    WCFinderContact *_contact;
    NSString *_brandLogoUrl;
    NSMutableArray *_elementsArray;
    UIView *_currentElement;
    UIView *_preViousElement;
    UIView *_lastElement;
    UIView *_benchMarkElement;
    NSMutableDictionary *_ele_layoutMap;
    NSMutableArray *_customeAccessibleElements;
}

+ (double)defaultHeight;
+ (_Bool)useRefactorView;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *customeAccessibleElements; // @synthesize customeAccessibleElements=_customeAccessibleElements;
@property(retain, nonatomic) NSMutableDictionary *ele_layoutMap; // @synthesize ele_layoutMap=_ele_layoutMap;
@property(retain, nonatomic) UIView *benchMarkElement; // @synthesize benchMarkElement=_benchMarkElement;
@property(retain, nonatomic) UIView *lastElement; // @synthesize lastElement=_lastElement;
@property(retain, nonatomic) UIView *preViousElement; // @synthesize preViousElement=_preViousElement;
@property(retain, nonatomic) UIView *currentElement; // @synthesize currentElement=_currentElement;
@property(retain, nonatomic) NSMutableArray *elementsArray; // @synthesize elementsArray=_elementsArray;
@property(retain, nonatomic) NSString *brandLogoUrl; // @synthesize brandLogoUrl=_brandLogoUrl;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(nonatomic) _Bool isFollowBtnDisplayingForBrandContact; // @synthesize isFollowBtnDisplayingForBrandContact=_isFollowBtnDisplayingForBrandContact;
@property(nonatomic) _Bool hasJustBeenReset; // @synthesize hasJustBeenReset=_hasJustBeenReset;
@property(nonatomic) _Bool thisContentVMShouldShowFollowBtn; // @synthesize thisContentVMShouldShowFollowBtn=_thisContentVMShouldShowFollowBtn;
@property(nonatomic) _Bool enableShowFollowedLabel; // @synthesize enableShowFollowedLabel=_enableShowFollowedLabel;
@property(retain, nonatomic) UIView *gestureView; // @synthesize gestureView=_gestureView;
@property(retain, nonatomic) UIView *elementContentView; // @synthesize elementContentView=_elementContentView;
@property(retain, nonatomic) MMWebImageView *brandLogoView; // @synthesize brandLogoView=_brandLogoView;
@property(retain, nonatomic) MMUIButton *followBtn; // @synthesize followBtn=_followBtn;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) WCFinderFollowedLabel *followedLabel; // @synthesize followedLabel=_followedLabel;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authView; // @synthesize authView=_authView;
@property(retain, nonatomic) RichTextView *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *avatarTextTipsLabel; // @synthesize avatarTextTipsLabel=_avatarTextTipsLabel;
@property(retain, nonatomic) UIView *avatarViewCircle; // @synthesize avatarViewCircle=_avatarViewCircle;
@property(retain, nonatomic) WCFinderHeadImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) WCFinderJumpInfo *avatarJumpInfo; // @synthesize avatarJumpInfo=_avatarJumpInfo;
@property(nonatomic) __weak id <WCFinderHeadInfoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (_Bool)isAccessibilityElement;
- (struct CGRect)avatarFrame;
- (struct CGRect)followBtnFrame;
- (id)userAvatarSnapshot;
- (void)setIsFollowBtnDisplayingWhenBrandContact:(_Bool)arg1;
- (_Bool)isFollowBtnDisplayingWhenBrandContact;
- (id)genGradientMaskView;
- (id)genAvatarCircleWithCircleSize:(struct CGSize)arg1;
- (void)moveDownBenchMarkViewIfCan;
- (_Bool)isEqualToMyContact:(id)arg1;
- (void)nameLabelSizeToFit;
- (double)getNameLabelLastLineCenterY;
- (double)getNameLabelLastLineRight;
- (void)restoreNameLabelFontSize;
- (void)reduceNameLabelFontSize;
- (void)resortElements;
- (void)showElement:(id)arg1;
- (id)layoutOfElement:(id)arg1;
- (id)lastElementFirstLine;
- (_Bool)isElementInFirstLine:(id)arg1;
- (double)lineDownOffset;
- (double)lineUpOffset;
- (_Bool)isNameOneLine;
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
- (_Bool)hasAuthView;
- (void)removeFollowedLabel;
- (void)removeAuthIcon;
- (void)addGestureView;
- (void)removeDescriptionLabel;
- (void)showDescriptionLabel;
- (void)setFollowedLabelLayoutWithLeftMargin:(double)arg1;
- (void)setAuthIconLayoutWithSize:(struct CGSize)arg1 LeftMargin:(double)arg2;
- (void)addNameLabelWithLeftMargin:(double)arg1 UpOffset:(double)arg2 DownOffset:(double)arg3 FontSize:(long long)arg4 SmallFontSize:(long long)arg5;
- (void)addAvatarViewWithSize:(struct CGSize)arg1 leftMargin:(double)arg2;
- (void)putBrandLogoOnSecondLine;
- (void)removeBrandLogo;
- (void)updateBrandLogoImageUrl:(id)arg1;
- (void)setBrandLogoViewLayoutWithSize:(struct CGSize)arg1 leftMargin:(double)arg2;
- (void)showFollowBtn;
- (void)setFollowBtnLayoutWithLeftMargin:(double)arg1;
- (void)removeFollowBtn;
- (void)beginFollowBtnAnimation;
- (void)putNewAddedElementToTheRightOfTheNameInSecondLine;
- (void)putNewAddedElementAtTheBeginingOfSecondLine;
- (void)putAuthIconOnSecondLine;
- (void)putFollowBtnOnTheRightSide;
- (void)putFollowBtnAfterView:(id)arg1;
- (void)moveDownbenchMarkElement;
- (void)moveUpbenchMarkElementWithUpOffset:(double)arg1;
- (void)remakeConstrainsInElementArrayWithIndex:(long long)arg1 removeIndexElement:(_Bool)arg2;
- (void)removeElementWithView:(id)arg1;
- (void)adjustConstrainsWhenAddingFollowBtn;
- (void)adjustNewAddedElementConstrains;
- (void)resetReuseState;
- (_Bool)canFollowBtnShow;
- (void)updateAccessibility;
- (void)updateFollowBtn:(_Bool)arg1;
- (void)updateFollowedLabel;
- (void)updateDescriptionLabel:(id)arg1;
- (void)updateAuthIcon;
- (void)updateNameLabel;
- (void)updateAvatarView;
- (void)reloadHeaderWithContact;
- (void)layoutSubviews;
- (void)updateConstraintsWithContact:(id)arg1;
- (void)setShowLivingView:(_Bool)arg1;
- (void)setShouldShowFollowTips:(_Bool)arg1;
- (void)setShowFollowBtn:(_Bool)arg1;
- (void)setUpFullFeedContentSummaryHeaderViewLayout;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

