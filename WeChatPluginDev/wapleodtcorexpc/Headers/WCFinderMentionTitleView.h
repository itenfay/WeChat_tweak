//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, RichTextView, UIImageView, UILabel, WCFinderAggregatedTitleView, WCFinderInteractionLabelGroupView, WCFinderMentionTitleModel;
@protocol WCFinderMentionTitleViewDelegate;

@interface WCFinderMentionTitleView : UIView
{
    id <WCFinderMentionTitleViewDelegate> _delegate;
    WCFinderAggregatedTitleView *_titleView;
    RichTextView *_aggregatedContactTitleView;
    UILabel *_aggregatedCountLabel;
    UILabel *_timestampLabel;
    UIImageView *_logoImageView;
    WCFinderInteractionLabelGroupView *_aboveInteractionLabel;
    WCFinderInteractionLabelGroupView *_belowInteractionLabel;
    MMUIButton *_followButton;
    WCFinderMentionTitleModel *_model;
    double _layoutWidth;
    double _intrinsicHeight;
}

+ (double)titleMinWidthWithModel:(id)arg1;
+ (id)followBtnBgColor;
+ (double)titleHeightWithModel:(id)arg1 width:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) double intrinsicHeight; // @synthesize intrinsicHeight=_intrinsicHeight;
@property(nonatomic) double layoutWidth; // @synthesize layoutWidth=_layoutWidth;
@property(retain, nonatomic) WCFinderMentionTitleModel *model; // @synthesize model=_model;
@property(nonatomic) __weak MMUIButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) WCFinderInteractionLabelGroupView *belowInteractionLabel; // @synthesize belowInteractionLabel=_belowInteractionLabel;
@property(retain, nonatomic) WCFinderInteractionLabelGroupView *aboveInteractionLabel; // @synthesize aboveInteractionLabel=_aboveInteractionLabel;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) UILabel *timestampLabel; // @synthesize timestampLabel=_timestampLabel;
@property(retain, nonatomic) UILabel *aggregatedCountLabel; // @synthesize aggregatedCountLabel=_aggregatedCountLabel;
@property(retain, nonatomic) RichTextView *aggregatedContactTitleView; // @synthesize aggregatedContactTitleView=_aggregatedContactTitleView;
@property(retain, nonatomic) WCFinderAggregatedTitleView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) __weak id <WCFinderMentionTitleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)followButtonClicked;
- (void)clickUserRelationshipTag;
- (id)aggregatedContactDisplayContent:(id)arg1;
- (id)aggregatedSuffixContentWithEllipsis:(_Bool)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)updateHeight:(double)arg1;
- (void)layoutUIWhenAggregated;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)updateInteractionLabel;
- (void)updateWithModel:(id)arg1;
- (void)prepareForReuse;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

