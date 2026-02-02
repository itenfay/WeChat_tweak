//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BTNotifySectionData, MMHeadImageView, UIButton;
@protocol BTNotifyMsgCellViewDelegate;

@interface BTNotifyMsgCellView
{
    id <BTNotifyMsgCellViewDelegate> _delegate;
    BTNotifySectionData *_viewModel;
    UIButton *_messageTipsVew;
    MMHeadImageView *_headerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMHeadImageView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIButton *messageTipsVew; // @synthesize messageTipsVew=_messageTipsVew;
@property(retain, nonatomic) BTNotifySectionData *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <BTNotifyMsgCellViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClick;
- (void)layoutSubviews;
- (void)updateWithMsg:(id)arg1 unreadCount:(unsigned int)arg2;
- (void)initSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

