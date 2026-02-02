//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, UIView;
@protocol WCFinderRecommendTagTableViewCellDelegate;

@interface WCFinderRecommendTagTableViewCell
{
    id <WCFinderRecommendTagTableViewCellDelegate> _delegate;
    UIView *_seperateLine;
    MMUILabel *_topicLabel;
    MMUILabel *_topicNumberLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *topicNumberLabel; // @synthesize topicNumberLabel=_topicNumberLabel;
@property(retain, nonatomic) MMUILabel *topicLabel; // @synthesize topicLabel=_topicLabel;
@property(retain, nonatomic) UIView *seperateLine; // @synthesize seperateLine=_seperateLine;
@property(nonatomic) __weak id <WCFinderRecommendTagTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickTagCell;
- (void)updateWithModel:(id)arg1 width:(double)arg2;
- (void)initTopicHotNumberLabel;
- (void)initTopicLabel;
- (void)initSeperateLine;
- (void)setUpUI;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

