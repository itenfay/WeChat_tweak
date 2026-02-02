//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class NSString, RichTextView, UIImageView, WCFinderPreviewFeedHorizontallyView;
@protocol WCFinderOpenFinderFeedsTableViewCellDelegate;

@interface WCFinderOpenFinderFeedsTableViewCell : UITableViewCell
{
    id <WCFinderOpenFinderFeedsTableViewCellDelegate> _delegate;
    WCFinderPreviewFeedHorizontallyView *_feedHorizonView;
    RichTextView *_tipsTextView;
    UIImageView *_arrowImageView;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) RichTextView *tipsTextView; // @synthesize tipsTextView=_tipsTextView;
@property(retain, nonatomic) WCFinderPreviewFeedHorizontallyView *feedHorizonView; // @synthesize feedHorizonView=_feedHorizonView;
@property(nonatomic) __weak id <WCFinderOpenFinderFeedsTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)horizonViewClickItemWith:(id)arg1;
- (void)onClickContentAction;
- (void)layoutViews;
- (void)updateCellWithDataSource:(id)arg1 guideTips:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

