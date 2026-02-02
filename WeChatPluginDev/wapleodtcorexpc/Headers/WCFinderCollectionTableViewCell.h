//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMUIButton, NSString, RichTextView, UILabel, UIView, WCFinderCollectionFeedCellConfig, WCFinderFeedContentVM, WCFinderFeedImageCDNView, WCFinderGradientView, WCFinderLinearView;

@interface WCFinderCollectionTableViewCell : UITableViewCell
{
    WCFinderFeedImageCDNView *_coverView;
    UILabel *_episodeLabel;
    RichTextView *_textView;
    WCFinderLinearView *_descLineContainer;
    MMUIButton *_likeCountBtn;
    MMUIButton *_memberFlagButton;
    UIView *_separatorView;
    UILabel *_durationLabel;
    UILabel *_watchProgressLabel;
    UIView *_playingMaskView;
    WCFinderGradientView *_coverGradient;
    UILabel *_needPayTag;
    WCFinderFeedContentVM *_contentVM;
    double _layoutWidth;
    WCFinderCollectionFeedCellConfig *_config;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderCollectionFeedCellConfig *config; // @synthesize config=_config;
@property(nonatomic) double layoutWidth; // @synthesize layoutWidth=_layoutWidth;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) UILabel *needPayTag; // @synthesize needPayTag=_needPayTag;
@property(retain, nonatomic) WCFinderGradientView *coverGradient; // @synthesize coverGradient=_coverGradient;
@property(retain, nonatomic) UIView *playingMaskView; // @synthesize playingMaskView=_playingMaskView;
@property(retain, nonatomic) UILabel *watchProgressLabel; // @synthesize watchProgressLabel=_watchProgressLabel;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) MMUIButton *memberFlagButton; // @synthesize memberFlagButton=_memberFlagButton;
@property(retain, nonatomic) MMUIButton *likeCountBtn; // @synthesize likeCountBtn=_likeCountBtn;
@property(retain, nonatomic) WCFinderLinearView *descLineContainer; // @synthesize descLineContainer=_descLineContainer;
@property(retain, nonatomic) RichTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UILabel *episodeLabel; // @synthesize episodeLabel=_episodeLabel;
@property(retain, nonatomic) WCFinderFeedImageCDNView *coverView; // @synthesize coverView=_coverView;
- (void)onFeedContent:(id)arg1 likedDataChanged:(id)arg2;
- (_Bool)shouldShowNeedPayTag;
- (void)showHighlightAnimation;
- (void)layoutUI;
- (void)updateLikeCountBtnIfNeed;
- (void)updateLikeCountBtn;
- (void)updateDescLines;
- (void)updateWithContentVM:(id)arg1 config:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setupSubUIs;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

