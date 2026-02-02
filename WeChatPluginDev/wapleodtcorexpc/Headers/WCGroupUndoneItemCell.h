//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class ChatRoomToolMessageEventInfo, MMUIButton, MMUILabel, MMWebImageView, NSString, UIImageView, UIView;
@protocol WCGroupUndoneItemCellDelegate;

@interface WCGroupUndoneItemCell : UICollectionViewCell
{
    MMUIButton *_roundedContainer;
    MMWebImageView *_headView;
    MMUILabel *_titleLabel;
    UIView *_divLine;
    MMUIButton *_completeButton;
    UIImageView *_memberImageView;
    MMUILabel *_numLabel;
    NSString *_lastImageUrl;
    ChatRoomToolMessageEventInfo *_model;
    id <WCGroupUndoneItemCellDelegate> _delegate;
}

+ (double)CellHeight;
+ (struct CGSize)SizeToFitModel:(id)arg1;
+ (double)WidthToFitReplyTitle:(id)arg1;
+ (double)WidthToFitCompleteTitle:(id)arg1;
+ (double)WidthToFitTitle:(id)arg1;
+ (id)ReplyLabelFont;
+ (id)CompleteLabelFont;
+ (id)LabelFont;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WCGroupUndoneItemCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ChatRoomToolMessageEventInfo *model; // @synthesize model=_model;
- (void)onComplete:(id)arg1;
- (void)onTapContainer:(id)arg1;
- (void)onClose:(id)arg1;
- (void)layoutSubviews;
- (void)onDelete:(id)arg1;
- (void)onRevoke:(id)arg1;
- (void)onLongPress:(id)arg1;
- (void)handleMenuControllerWillHideMenuNotification:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)showMenus;
- (void)updateWithModel:(id)arg1;
- (void)initViews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

