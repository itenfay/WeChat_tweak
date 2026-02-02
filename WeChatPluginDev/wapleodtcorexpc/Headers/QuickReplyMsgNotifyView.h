//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMHeadImageView, MMUIButton, MMUILabel, QuickReplyNotifyItem, UIPanGestureRecognizer;
@protocol QuickReplyMsgNotifyViewDelegate;

@interface QuickReplyMsgNotifyView : UIView
{
    _Bool _isReplying;
    _Bool _isPreviewEnable;
    _Bool _showMoreSetting;
    _Bool _triggerDragToReply;
    _Bool _isPaning;
    id <QuickReplyMsgNotifyViewDelegate> _delegate;
    QuickReplyNotifyItem *_notifyItem;
    UIView *_maskContainerView;
    UIView *_contentView;
    MMHeadImageView *_headImageView;
    MMUILabel *_titleLabel;
    MMUILabel *_messageLabel;
    MMUIButton *_moreButton;
    MMUIButton *_notifySettingButton;
    UIView *_moreSettingView;
    UIPanGestureRecognizer *_panGesture;
    double _panStartHeight;
    double _contentLeftMargin;
    long long _currDragType;
    struct CGPoint _lastPanPostion;
    struct CGPoint _panStartPos;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPaning; // @synthesize isPaning=_isPaning;
@property(nonatomic) _Bool triggerDragToReply; // @synthesize triggerDragToReply=_triggerDragToReply;
@property(nonatomic) long long currDragType; // @synthesize currDragType=_currDragType;
@property(nonatomic) double contentLeftMargin; // @synthesize contentLeftMargin=_contentLeftMargin;
@property(nonatomic) double panStartHeight; // @synthesize panStartHeight=_panStartHeight;
@property(nonatomic) struct CGPoint panStartPos; // @synthesize panStartPos=_panStartPos;
@property(nonatomic) struct CGPoint lastPanPostion; // @synthesize lastPanPostion=_lastPanPostion;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(retain, nonatomic) UIView *moreSettingView; // @synthesize moreSettingView=_moreSettingView;
@property(retain, nonatomic) MMUIButton *notifySettingButton; // @synthesize notifySettingButton=_notifySettingButton;
@property(retain, nonatomic) MMUIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) MMUILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *maskContainerView; // @synthesize maskContainerView=_maskContainerView;
@property(nonatomic) _Bool showMoreSetting; // @synthesize showMoreSetting=_showMoreSetting;
@property(nonatomic) _Bool isPreviewEnable; // @synthesize isPreviewEnable=_isPreviewEnable;
@property(nonatomic) _Bool isReplying; // @synthesize isReplying=_isReplying;
@property(retain, nonatomic) QuickReplyNotifyItem *notifyItem; // @synthesize notifyItem=_notifyItem;
@property(nonatomic) __weak id <QuickReplyMsgNotifyViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reportCustomEvent:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)didSelectSettingButton;
- (void)didSelectJumpToChat;
- (void)didSelectAtCloseNotifyToday;
- (void)didSelectAtTemporaryCloseNotify;
- (void)didSelectAtMoreButton;
- (void)updateRoundCornerMask;
- (void)lightShock;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)setupPanGesture;
- (id)genAnimateTransitionView:(id)arg1;
- (void)setupLayout;
- (void)initUI;
- (void)dismissNotifyView;
- (void)beginReply;
- (void)sizeToFitWidth:(double)arg1;
- (void)updateMaxWidth:(double)arg1;
- (void)updateWithItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

