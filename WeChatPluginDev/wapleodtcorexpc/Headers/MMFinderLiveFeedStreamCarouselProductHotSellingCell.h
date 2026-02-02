//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveFeedStreamProductStyleView, NSString;

@interface MMFinderLiveFeedStreamCarouselProductHotSellingCell
{
    MMFinderLiveFeedStreamProductStyleView *_hotSellingStyleView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveFeedStreamProductStyleView *hotSellingStyleView; // @synthesize hotSellingStyleView=_hotSellingStyleView;
- (void)onLiveFeedStreamProductStyleViewClicked:(id)arg1 jump2Type:(unsigned long long)arg2 productInfo:(id)arg3;
- (void)setTaskId:(id)arg1;
- (void)endExposeAction;
- (void)startExposeAction;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layout;
- (void)layoutSubviews;
- (void)reload;
- (void)prepareForReuse;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

