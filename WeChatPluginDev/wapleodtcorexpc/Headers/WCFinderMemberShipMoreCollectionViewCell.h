//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, RichTextView, UIView, WCFinderMemberShipMoreCollectionCoverView;
@protocol WCFinderMemberShipMoreCollectionViewCellDelegate;

@interface WCFinderMemberShipMoreCollectionViewCell : UICollectionViewCell
{
    id <WCFinderMemberShipMoreCollectionViewCellDelegate> _delegate;
    UIView *_containerView;
    RichTextView *_tipsTextView;
    RichTextView *_updateTimeTextView;
    WCFinderMemberShipMoreCollectionCoverView *_coverView;
    unsigned long long _viewTag;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long viewTag; // @synthesize viewTag=_viewTag;
@property(retain, nonatomic) WCFinderMemberShipMoreCollectionCoverView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) RichTextView *updateTimeTextView; // @synthesize updateTimeTextView=_updateTimeTextView;
@property(retain, nonatomic) RichTextView *tipsTextView; // @synthesize tipsTextView=_tipsTextView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <WCFinderMemberShipMoreCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)updateTips:(id)arg1 mediaWrapArray:(id)arg2 viewTag:(unsigned long long)arg3 updateTimeColor:(id)arg4 updateTimeContent:(id)arg5;
- (id)genRichTextView;
- (void)setContainerViewCornerRadius:(double)arg1;
- (id)genContainerView;
- (id)genCoverView;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

