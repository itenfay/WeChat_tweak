//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class GCChannelTitleView, GCMultiMessageViewModel, NSMutableArray, NSString, UIScrollView;

@interface GCMultiChannelContainerView : UIView
{
    UIScrollView *_scrollView;
    GCChannelTitleView *_channelTitleView;
    GCMultiMessageViewModel *_viewModel;
    NSMutableArray *_msgViewModelConfigArray;
    UIView *_scrollContainerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *scrollContainerView; // @synthesize scrollContainerView=_scrollContainerView;
@property(retain, nonatomic) NSMutableArray *msgViewModelConfigArray; // @synthesize msgViewModelConfigArray=_msgViewModelConfigArray;
@property(nonatomic) __weak GCMultiMessageViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) GCChannelTitleView *channelTitleView; // @synthesize channelTitleView=_channelTitleView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)initScrollView:(id)arg1;
- (void)handleScrollViewEnd:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)didSelectChannelAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (void)relayoutViewWhenSizeChange;
- (void)onChangeToIndex:(unsigned long long)arg1;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void)initTitleView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 viewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

