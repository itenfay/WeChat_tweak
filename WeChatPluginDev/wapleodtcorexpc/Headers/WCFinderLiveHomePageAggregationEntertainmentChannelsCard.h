//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CADisplayLink, MMLiveColorfulLabel, NSArray, UIView;

@interface WCFinderLiveHomePageAggregationEntertainmentChannelsCard
{
    MMLiveColorfulLabel *_titleLabel;
    MMLiveColorfulLabel *_subTitleLabel;
    UIView *_containerCollectionView;
    NSArray *_collectionViews;
    CADisplayLink *_displayLink;
    double _layoutHeight;
    unsigned long long _calculateLineCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long calculateLineCount; // @synthesize calculateLineCount=_calculateLineCount;
@property(nonatomic) double layoutHeight; // @synthesize layoutHeight=_layoutHeight;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) NSArray *collectionViews; // @synthesize collectionViews=_collectionViews;
@property(retain, nonatomic) UIView *containerCollectionView; // @synthesize containerCollectionView=_containerCollectionView;
@property(retain, nonatomic) MMLiveColorfulLabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) MMLiveColorfulLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)updateInitialOffset;
- (void)stopScroll;
- (void)startScroll;
- (void)didEndDisplay;
- (void)willDisplay;
- (id)currentGroupEntryBuffer;
- (void)layoutSubviews;
- (void)handleScroll;
- (void)reloadCollectionView;
- (void)updateWithCard:(id)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (void)recreateCollectionView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

