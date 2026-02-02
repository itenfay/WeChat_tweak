//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMMuiscLiveCommentCommonContentView, MMMusicLiveCommentBaseViewModel, MMMusicLiveCommentCellDetailView, UIView;
@protocol MMusicLiveCommentCommonDelegate;

@interface MMMusicLiveCommentCommonCell : UITableViewCell
{
    MMMusicLiveCommentBaseViewModel *_viewModel;
    id <MMusicLiveCommentCommonDelegate> _delegate;
    UIView *_commentBgView;
    MMMuiscLiveCommentCommonContentView *_commentView;
    UIView *_separator;
    MMMusicLiveCommentCellDetailView *_detailView;
}

+ (double)calculateHeight:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMMusicLiveCommentCellDetailView *detailView; // @synthesize detailView=_detailView;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) MMMuiscLiveCommentCommonContentView *commentView; // @synthesize commentView=_commentView;
@property(retain, nonatomic) UIView *commentBgView; // @synthesize commentBgView=_commentBgView;
@property(nonatomic) __weak id <MMusicLiveCommentCommonDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMMusicLiveCommentBaseViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)onCommentDetailViewClicked;
- (void)onCommentClicked;
- (void)longPressToExpose;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

