//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class FinderWordsTopicExtInfo, MMUIButton, MMWebImageView, RichTextView, UIImageView, UILabel, UIView, WCFinderBriefCardView;
@protocol WCFinderTopicListSectionHeaderViewDelegate;

@interface WCFinderTopicListSectionHeaderView : UICollectionReusableView
{
    id <WCFinderTopicListSectionHeaderViewDelegate> _delegate;
    MMUIButton *_postBtn;
    MMWebImageView *_headerImageView;
    UIView *_wordContainer;
    UIView *_voiceOverView;
    RichTextView *_topicTitleLabel;
    UILabel *_topicSubTitleLabel;
    UILabel *_topicCountLabel;
    UIImageView *_arrowImageView;
    WCFinderBriefCardView *_musicBriefCard;
    FinderWordsTopicExtInfo *_wordsTopicExt;
    MMUIButton *_postNewLifeBtn;
    UIView *_btnContainer;
}

+ (id)generateBottomButtonWithSvgImageName:(id)arg1 title:(id)arg2;
+ (id)genTopicTitleWithType:(int)arg1 topicTitle:(id)arg2 topicLocation:(id)arg3 showHighlightTopic:(_Bool)arg4;
+ (double)getFadeInStartOffsetWithTopicType:(int)arg1 imageUrl:(id)arg2 topicTitle:(id)arg3 topicLocation:(id)arg4 topicDetailLocation:(id)arg5 topicCount:(unsigned long long)arg6 totalWatchCount:(unsigned long long)arg7;
+ (double)getTopicListSectionHeaderViewHeightWithTopicType:(int)arg1 imageUrl:(id)arg2 topicTitle:(id)arg3 topicLocation:(id)arg4 topicDetailLocation:(id)arg5 topicCount:(unsigned long long)arg6 totalWatchCount:(unsigned long long)arg7 width:(double)arg8 wordsTopicExt:(id)arg9 optionParams:(id)arg10;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *btnContainer; // @synthesize btnContainer=_btnContainer;
@property(retain, nonatomic) MMUIButton *postNewLifeBtn; // @synthesize postNewLifeBtn=_postNewLifeBtn;
@property(retain, nonatomic) FinderWordsTopicExtInfo *wordsTopicExt; // @synthesize wordsTopicExt=_wordsTopicExt;
@property(retain, nonatomic) WCFinderBriefCardView *musicBriefCard; // @synthesize musicBriefCard=_musicBriefCard;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *topicCountLabel; // @synthesize topicCountLabel=_topicCountLabel;
@property(retain, nonatomic) UILabel *topicSubTitleLabel; // @synthesize topicSubTitleLabel=_topicSubTitleLabel;
@property(retain, nonatomic) RichTextView *topicTitleLabel; // @synthesize topicTitleLabel=_topicTitleLabel;
@property(retain, nonatomic) UIView *voiceOverView; // @synthesize voiceOverView=_voiceOverView;
@property(retain, nonatomic) UIView *wordContainer; // @synthesize wordContainer=_wordContainer;
@property(retain, nonatomic) MMWebImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(retain, nonatomic) MMUIButton *postBtn; // @synthesize postBtn=_postBtn;
@property(nonatomic) __weak id <WCFinderTopicListSectionHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickPostNewLifeAction;
- (void)onClickPostAction;
- (void)setupSubviews;
- (void)setNewLifePostBtnReport:(id)arg1;
- (_Bool)needsShowLocationArrowWithType:(int)arg1 topicLocation:(id)arg2;
- (void)updateTopicType:(int)arg1 imageUrl:(id)arg2 topicTitle:(id)arg3 topicLocation:(id)arg4 topicDetailLocation:(id)arg5 topicCount:(unsigned long long)arg6 totalWatchCount:(unsigned long long)arg7 wordsTopicExt:(id)arg8 optionParams:(id)arg9;
- (id)accessibilityLabel;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

