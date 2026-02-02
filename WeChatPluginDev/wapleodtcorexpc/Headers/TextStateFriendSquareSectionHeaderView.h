//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class MMUILabel, MMWebImageView, NSString, TextStateTopicModel, UIView;

@interface TextStateFriendSquareSectionHeaderView : UICollectionReusableView
{
    NSString *_ownTopicId;
    TextStateTopicModel *_friendTopic;
    MMWebImageView *_iconImageView;
    MMUILabel *_clusterLabel;
    long long _section;
    UIView *_bottomView;
}

+ (double)heightForSection:(long long)arg1;
+ (double)alignX;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) long long section; // @synthesize section=_section;
@property(retain, nonatomic) MMUILabel *clusterLabel; // @synthesize clusterLabel=_clusterLabel;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) TextStateTopicModel *friendTopic; // @synthesize friendTopic=_friendTopic;
@property(retain, nonatomic) NSString *ownTopicId; // @synthesize ownTopicId=_ownTopicId;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setOwnTopicId:(id)arg1 friendTopic:(id)arg2 section:(long long)arg3;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)initLayout;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

