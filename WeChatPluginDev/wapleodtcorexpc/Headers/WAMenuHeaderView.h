//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, MMUIView, MMWebImageView, NSArray, NSString, UIButton, UIColor, UIFont, UIImage, UIImageView, WAHighLightedButton, WAMenuHeaderTagsView, WCTagsView;
@protocol IWARichTextViewHelper, IWCRichTextLabelProtocol, WAMenuHeaderViewDelegate;

@interface WAMenuHeaderView : UIView
{
    _Bool _showComment;
    _Bool _hasCommentJumpInfo;
    _Bool _highlightCommentModuleWhenAppear;
    _Bool _displayTopRightArrow;
    NSString *_descriptionTitle;
    NSString *_descriptionSub;
    UIImage *_topIconDefault;
    NSString *_topIconUrl;
    NSString *_topTitle;
    UIImage *_topRightImage;
    NSString *_topRightWording;
    UIColor *_topRightBgColor;
    UIFont *_topTitleFont;
    NSString *_regitserBody;
    double _averageScore;
    NSString *_hostWeAppName;
    NSString *_coverAdContent;
    NSString *_commentTitleText;
    NSString *_commentImageTitleUrl;
    NSString *_commentImageTitleInDarkModeUrl;
    NSString *_commentScoreStr;
    NSString *_commentRecommendStr;
    NSString *_commentMoreText;
    NSString *_commentInviteText;
    NSString *_commentInviteClickbleText;
    NSArray *_commentTagItemList;
    NSArray *_tagsArray;
    id <WAMenuHeaderViewDelegate> _delegate;
    MMUILabel<IWCRichTextLabelProtocol> *_subtitleLabel;
    MMWebImageView *_topIconView;
    MMUILabel *_topTitleLabel;
    UIImageView *_topArrowView;
    UIButton *_topButton;
    UIView *_topPrivacyView;
    WCTagsView *_tagsView;
    UIView *_topRightView;
    MMUILabel *_regitserBodyLabel;
    MMUILabel *_scoreLabel;
    MMUILabel *_hostWeAppLabel;
    WAHighLightedButton *_hostWeAppButton;
    MMUILabel *_coverAdContentLabel;
    WAHighLightedButton *_coverAdContentButton;
    WAMenuHeaderTagsView *_commentTagsView;
    MMUIView *_commentContentView;
    MMWebImageView *_commentTitleImageView;
    MMUILabel *_commentTitleLabel;
    MMUILabel *_commentScoreLabel;
    UIImageView *_commentArrowView;
    MMUILabel *_recommendLeadingLabel;
    id <IWARichTextViewHelper> _recommendRichTextHelper;
    id <IWARichTextViewHelper> _commentInviteRichTextHelper;
    UIView *_dividingLineView;
    UIView *_commentModuleHighlightView;
    double _contentY;
}

- (void).cxx_destruct;
@property(nonatomic) double contentY; // @synthesize contentY=_contentY;
@property(retain, nonatomic) UIView *commentModuleHighlightView; // @synthesize commentModuleHighlightView=_commentModuleHighlightView;
@property(retain, nonatomic) UIView *dividingLineView; // @synthesize dividingLineView=_dividingLineView;
@property(retain, nonatomic) id <IWARichTextViewHelper> commentInviteRichTextHelper; // @synthesize commentInviteRichTextHelper=_commentInviteRichTextHelper;
@property(retain, nonatomic) id <IWARichTextViewHelper> recommendRichTextHelper; // @synthesize recommendRichTextHelper=_recommendRichTextHelper;
@property(retain, nonatomic) MMUILabel *recommendLeadingLabel; // @synthesize recommendLeadingLabel=_recommendLeadingLabel;
@property(retain, nonatomic) UIImageView *commentArrowView; // @synthesize commentArrowView=_commentArrowView;
@property(retain, nonatomic) MMUILabel *commentScoreLabel; // @synthesize commentScoreLabel=_commentScoreLabel;
@property(retain, nonatomic) MMUILabel *commentTitleLabel; // @synthesize commentTitleLabel=_commentTitleLabel;
@property(retain, nonatomic) MMWebImageView *commentTitleImageView; // @synthesize commentTitleImageView=_commentTitleImageView;
@property(retain, nonatomic) MMUIView *commentContentView; // @synthesize commentContentView=_commentContentView;
@property(retain, nonatomic) WAMenuHeaderTagsView *commentTagsView; // @synthesize commentTagsView=_commentTagsView;
@property(retain, nonatomic) WAHighLightedButton *coverAdContentButton; // @synthesize coverAdContentButton=_coverAdContentButton;
@property(retain, nonatomic) MMUILabel *coverAdContentLabel; // @synthesize coverAdContentLabel=_coverAdContentLabel;
@property(retain, nonatomic) WAHighLightedButton *hostWeAppButton; // @synthesize hostWeAppButton=_hostWeAppButton;
@property(retain, nonatomic) MMUILabel *hostWeAppLabel; // @synthesize hostWeAppLabel=_hostWeAppLabel;
@property(retain, nonatomic) MMUILabel *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
@property(retain, nonatomic) MMUILabel *regitserBodyLabel; // @synthesize regitserBodyLabel=_regitserBodyLabel;
@property(retain, nonatomic) UIView *topRightView; // @synthesize topRightView=_topRightView;
@property(retain, nonatomic) WCTagsView *tagsView; // @synthesize tagsView=_tagsView;
@property(retain, nonatomic) UIView *topPrivacyView; // @synthesize topPrivacyView=_topPrivacyView;
@property(retain, nonatomic) UIButton *topButton; // @synthesize topButton=_topButton;
@property(retain, nonatomic) UIImageView *topArrowView; // @synthesize topArrowView=_topArrowView;
@property(retain, nonatomic) MMUILabel *topTitleLabel; // @synthesize topTitleLabel=_topTitleLabel;
@property(retain, nonatomic) MMWebImageView *topIconView; // @synthesize topIconView=_topIconView;
@property(retain, nonatomic) MMUILabel<IWCRichTextLabelProtocol> *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(nonatomic) __weak id <WAMenuHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool displayTopRightArrow; // @synthesize displayTopRightArrow=_displayTopRightArrow;
@property(retain, nonatomic) NSArray *tagsArray; // @synthesize tagsArray=_tagsArray;
@property(nonatomic) _Bool highlightCommentModuleWhenAppear; // @synthesize highlightCommentModuleWhenAppear=_highlightCommentModuleWhenAppear;
@property(retain, nonatomic) NSArray *commentTagItemList; // @synthesize commentTagItemList=_commentTagItemList;
@property(copy, nonatomic) NSString *commentInviteClickbleText; // @synthesize commentInviteClickbleText=_commentInviteClickbleText;
@property(copy, nonatomic) NSString *commentInviteText; // @synthesize commentInviteText=_commentInviteText;
@property(nonatomic) _Bool hasCommentJumpInfo; // @synthesize hasCommentJumpInfo=_hasCommentJumpInfo;
@property(copy, nonatomic) NSString *commentMoreText; // @synthesize commentMoreText=_commentMoreText;
@property(copy, nonatomic) NSString *commentRecommendStr; // @synthesize commentRecommendStr=_commentRecommendStr;
@property(copy, nonatomic) NSString *commentScoreStr; // @synthesize commentScoreStr=_commentScoreStr;
@property(copy, nonatomic) NSString *commentImageTitleInDarkModeUrl; // @synthesize commentImageTitleInDarkModeUrl=_commentImageTitleInDarkModeUrl;
@property(copy, nonatomic) NSString *commentImageTitleUrl; // @synthesize commentImageTitleUrl=_commentImageTitleUrl;
@property(copy, nonatomic) NSString *commentTitleText; // @synthesize commentTitleText=_commentTitleText;
@property(nonatomic) _Bool showComment; // @synthesize showComment=_showComment;
@property(copy, nonatomic) NSString *coverAdContent; // @synthesize coverAdContent=_coverAdContent;
@property(copy, nonatomic) NSString *hostWeAppName; // @synthesize hostWeAppName=_hostWeAppName;
@property(nonatomic) double averageScore; // @synthesize averageScore=_averageScore;
@property(retain, nonatomic) NSString *regitserBody; // @synthesize regitserBody=_regitserBody;
@property(retain, nonatomic) UIFont *topTitleFont; // @synthesize topTitleFont=_topTitleFont;
@property(retain, nonatomic) UIColor *topRightBgColor; // @synthesize topRightBgColor=_topRightBgColor;
@property(retain, nonatomic) NSString *topRightWording; // @synthesize topRightWording=_topRightWording;
@property(retain, nonatomic) UIImage *topRightImage; // @synthesize topRightImage=_topRightImage;
@property(retain, nonatomic) NSString *topTitle; // @synthesize topTitle=_topTitle;
@property(retain, nonatomic) NSString *topIconUrl; // @synthesize topIconUrl=_topIconUrl;
@property(retain, nonatomic) UIImage *topIconDefault; // @synthesize topIconDefault=_topIconDefault;
@property(retain, nonatomic) NSString *descriptionSub; // @synthesize descriptionSub=_descriptionSub;
@property(retain, nonatomic) NSString *descriptionTitle; // @synthesize descriptionTitle=_descriptionTitle;
- (void)onTagButtonExposed:(id)arg1;
- (void)onTagButtonClicked:(id)arg1;
- (void)onCommentSecondButtonTaped;
- (void)onCommentShown:(unsigned int)arg1 actionNote:(id)arg2;
- (void)onCommentShown:(unsigned int)arg1;
- (void)onCommentTaped:(unsigned int)arg1 actionNote:(id)arg2;
- (void)onCommentTaped:(unsigned int)arg1;
- (void)onCoverAd;
- (void)onHostWeApp;
- (void)onPrivacyTaped;
- (void)onTopTaped;
- (void)onCommentTagsViewTaped;
- (void)onLoadImageOK:(id)arg1;
- (void)onTextClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkClicked:(id)arg1 linkRect:(struct CGRect)arg2;
- (id)generateScoreAttributedStr;
- (double)contentHeight;
- (void)updateCommentInvite;
- (void)updateRecommendContent;
- (id)getAverageScoreText;
- (void)highlightCommentModuleView;
- (void)layoutContentView;
- (void)relayoutForUpdate;
- (void)loadView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

