//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView, WCMomentsPostShareButton, WCTimelineFooterViewModel;
@protocol WCTimelineFooterCellDelegate;

@interface WCTimelineFooterCell
{
    WCTimelineFooterViewModel *_viewModel;
    id <WCTimelineFooterCellDelegate> _delegate;
    WCMomentsPostShareButton *_postShareButton;
    UIView *_seperatorLine;
}

+ (double)heightForViewModel:(id)arg1 inTableView:(id)arg2;
+ (double)defaultHeight;
+ (double)separatorHeight;
+ (id)defaultIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *seperatorLine; // @synthesize seperatorLine=_seperatorLine;
@property(retain, nonatomic) WCMomentsPostShareButton *postShareButton; // @synthesize postShareButton=_postShareButton;
@property(nonatomic) __weak id <WCTimelineFooterCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCTimelineFooterViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)postShareButtonClicked:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

