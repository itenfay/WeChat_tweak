//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandProfileTopicViewModel, MMUIButton, NSMutableArray;
@protocol BrandProfileTopicViewDelegate;

@interface BrandProfileTopicView
{
    id <BrandProfileTopicViewDelegate> _delegate;
    BrandProfileTopicViewModel *_viewModel;
    MMUIButton *_unfoldButton;
    NSMutableArray *_topicButtonList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *topicButtonList; // @synthesize topicButtonList=_topicButtonList;
@property(retain, nonatomic) MMUIButton *unfoldButton; // @synthesize unfoldButton=_unfoldButton;
@property(retain, nonatomic) BrandProfileTopicViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <BrandProfileTopicViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onUnfoldButtonClicked:(id)arg1;
- (void)onTopicButtonClicked:(id)arg1;
- (void)updateSubviewsUseViewModel;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)initWithViewModel:(id)arg1;

@end

