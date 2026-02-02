//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCAdRandomPickCardView, WCDataItem;

@interface WCAdRandomPickCardContainerView
{
    WCDataItem *_dataItem;
    unsigned long long _contentItemScene;
    WCAdRandomPickCardView *_weakPickCardView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak WCAdRandomPickCardView *weakPickCardView; // @synthesize weakPickCardView=_weakPickCardView;
@property(nonatomic) unsigned long long contentItemScene; // @synthesize contentItemScene=_contentItemScene;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)refreshRandomPickCardView;
- (void)cleanUpRandomPickCardView;
- (void)layoutPickCardView;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)generateSubviews;
- (id)initWithFrame:(struct CGRect)arg1 dataItem:(id)arg2 scene:(unsigned long long)arg3;

@end

