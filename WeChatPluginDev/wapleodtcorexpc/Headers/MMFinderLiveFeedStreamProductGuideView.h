//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderWindowProductInfo, NSString, PAGView, UILabel, UIView;
@protocol MMFinderLiveFeedStreamProductGuideViewDelegate;

@interface MMFinderLiveFeedStreamProductGuideView
{
    id <MMFinderLiveFeedStreamProductGuideViewDelegate> _delegate;
    FinderWindowProductInfo *_productInfo;
    NSString *_recommendTag;
    unsigned long long _tagType;
    UIView *_containerView;
    UILabel *_recommendTagView;
    UIView *_splitLineView;
    PAGView *_playingIconView;
    UILabel *_guideLabel;
    UILabel *_productTitleLabel;
}

+ (double)defaultHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *productTitleLabel; // @synthesize productTitleLabel=_productTitleLabel;
@property(retain, nonatomic) UILabel *guideLabel; // @synthesize guideLabel=_guideLabel;
@property(retain, nonatomic) PAGView *playingIconView; // @synthesize playingIconView=_playingIconView;
@property(retain, nonatomic) UIView *splitLineView; // @synthesize splitLineView=_splitLineView;
@property(retain, nonatomic) UILabel *recommendTagView; // @synthesize recommendTagView=_recommendTagView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) unsigned long long tagType; // @synthesize tagType=_tagType;
@property(retain, nonatomic) NSString *recommendTag; // @synthesize recommendTag=_recommendTag;
@property(retain, nonatomic) FinderWindowProductInfo *productInfo; // @synthesize productInfo=_productInfo;
@property(nonatomic) __weak id <MMFinderLiveFeedStreamProductGuideViewDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)endExposeAction;
- (void)startExposeAction;
- (void)prepareForReuse;
- (void)setTaskId:(id)arg1;
- (void)dealloc;
- (void)onActionButtonDidClick;
- (id)initWithFrame:(struct CGRect)arg1;

@end

