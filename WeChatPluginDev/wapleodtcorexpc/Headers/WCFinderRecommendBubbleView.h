//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIImageView, UILabel;

@interface WCFinderRecommendBubbleView
{
    UIImageView *_leftImageView;
    UILabel *_recommendTipsLabel;
    UILabel *_nextTipsLabel;
    double _maxWidth;
    NSString *_railTips;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *railTips; // @synthesize railTips=_railTips;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(retain, nonatomic) UILabel *nextTipsLabel; // @synthesize nextTipsLabel=_nextTipsLabel;
@property(retain, nonatomic) UILabel *recommendTipsLabel; // @synthesize recommendTipsLabel=_recommendTipsLabel;
@property(retain, nonatomic) UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
- (void)layoutAllSubviews;
- (void)updateWithLeftIcon:(id)arg1 recommendTips:(id)arg2 nextTips:(id)arg3 nextBlock:(CDUnknownBlockType)arg4;
- (id)initWithFrame:(struct CGRect)arg1 maxWidth:(double)arg2 railTips:(id)arg3;

@end

