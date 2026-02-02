//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, NSMutableArray, NSString, UILabel, WCFinderAuthInfoIconView, WCFinderCommentHeatUpTipsView, WCFinderCommentTranslateView, WCFinderFeedContentTouchExpandTextView, WCFinderFeedContentVM, WCFinderHeadImageView, WCFinderJumpInfoPanelView, WCFinderMaskButton;
@protocol WCFinderContentHeaderViewDelegate;

@interface WCFinderContentHeaderView : UIView
{
    _Bool _isShow;
    _Bool _isExpend;
    int _scene;
    id <WCFinderContentHeaderViewDelegate> _delegate;
    WCFinderFeedContentTouchExpandTextView *_textView;
    WCFinderJumpInfoPanelView *_linkJumpPanelView;
    WCFinderJumpInfoPanelView *_operatingPanelView;
    WCFinderJumpInfoPanelView *_rightPanelView;
    WCFinderMaskButton *_eventButton;
    WCFinderMaskButton *_poiButton;
    unsigned long long _viewerScene;
    WCFinderFeedContentVM *_contentVM;
    unsigned long long _translateType;
    NSString *_translateContent;
    NSString *_translateSource;
    WCFinderHeadImageView *_headerImageView;
    UILabel *_nickNameLabel;
    UILabel *_creatTimeAndIpRegionLabel;
    WCFinderAuthInfoIconView *_authorIcon;
    UILabel *_headerTagLabel;
    MMUIButton *_moreActionButton;
    WCFinderMaskButton *_linkButton;
    WCFinderMaskButton *_collectionButton;
    MMUIButton *_rightTipsBtn;
    NSMutableArray *_textViewElementAccessibilityViews;
    WCFinderCommentHeatUpTipsView *_heatUpTipsView;
    WCFinderCommentTranslateView *_translateView;
    WCFinderMaskButton *_modFeedButton;
    struct CGPoint _hitPoint;
}

+ (unsigned long long)headerContentFlagByContentVM:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderMaskButton *modFeedButton; // @synthesize modFeedButton=_modFeedButton;
@property(retain, nonatomic) WCFinderCommentTranslateView *translateView; // @synthesize translateView=_translateView;
@property(retain, nonatomic) WCFinderCommentHeatUpTipsView *heatUpTipsView; // @synthesize heatUpTipsView=_heatUpTipsView;
@property(retain, nonatomic) NSMutableArray *textViewElementAccessibilityViews; // @synthesize textViewElementAccessibilityViews=_textViewElementAccessibilityViews;
@property(nonatomic) _Bool isExpend; // @synthesize isExpend=_isExpend;
@property(retain, nonatomic) MMUIButton *rightTipsBtn; // @synthesize rightTipsBtn=_rightTipsBtn;
@property(retain, nonatomic) WCFinderMaskButton *collectionButton; // @synthesize collectionButton=_collectionButton;
@property(retain, nonatomic) WCFinderMaskButton *linkButton; // @synthesize linkButton=_linkButton;
@property(retain, nonatomic) MMUIButton *moreActionButton; // @synthesize moreActionButton=_moreActionButton;
@property(retain, nonatomic) UILabel *headerTagLabel; // @synthesize headerTagLabel=_headerTagLabel;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authorIcon; // @synthesize authorIcon=_authorIcon;
@property(retain, nonatomic) UILabel *creatTimeAndIpRegionLabel; // @synthesize creatTimeAndIpRegionLabel=_creatTimeAndIpRegionLabel;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(copy, nonatomic) NSString *translateSource; // @synthesize translateSource=_translateSource;
@property(copy, nonatomic) NSString *translateContent; // @synthesize translateContent=_translateContent;
@property(nonatomic) unsigned long long translateType; // @synthesize translateType=_translateType;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(nonatomic) unsigned long long viewerScene; // @synthesize viewerScene=_viewerScene;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(retain, nonatomic) WCFinderMaskButton *poiButton; // @synthesize poiButton=_poiButton;
@property(retain, nonatomic) WCFinderMaskButton *eventButton; // @synthesize eventButton=_eventButton;
@property(retain, nonatomic) WCFinderJumpInfoPanelView *rightPanelView; // @synthesize rightPanelView=_rightPanelView;
@property(retain, nonatomic) WCFinderJumpInfoPanelView *operatingPanelView; // @synthesize operatingPanelView=_operatingPanelView;
@property(retain, nonatomic) WCFinderJumpInfoPanelView *linkJumpPanelView; // @synthesize linkJumpPanelView=_linkJumpPanelView;
@property(nonatomic) struct CGPoint hitPoint; // @synthesize hitPoint=_hitPoint;
@property(retain, nonatomic) WCFinderFeedContentTouchExpandTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak id <WCFinderContentHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int scene; // @synthesize scene=_scene;
- (void)onClickMoreAction;
- (void)onFeedContentTextView:(id)arg1 clickContentUserName:(id)arg2;
- (id)videoTid;
- (_Bool)videoPauseState;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)onFeedContentTextView:(id)arg1 clickMentionUsername:(id)arg2 nickname:(id)arg3;
- (void)onFeedContentTextView:(id)arg1 clickTopicText:(id)arg2;
- (void)updateTranslateType:(unsigned long long)arg1;
- (void)onFeedContentTextView:(id)arg1 clickReadMore:(_Bool)arg2 isTouchExpand:(_Bool)arg3;
- (void)onFinderJumpInfoViewDidClick:(id)arg1 inArea:(unsigned long long)arg2;
- (void)onFinderJumpInfoViewDidClick:(id)arg1;
- (void)clickCollectionAction;
- (void)clickLinkAction;
- (void)clickEventAction:(id)arg1;
- (void)clickModFeedButtonAction:(id)arg1;
- (void)clickPOIAction:(id)arg1;
- (void)clickHeaderNickname:(id)arg1;
- (void)clickHeaderAvatar:(id)arg1;
- (void)updateTranslateView;
- (void)changeExpandStatus:(_Bool)arg1;
- (void)refreshAuthor;
- (void)resetTrucation;
- (void)handleMusicFilterSwitch:(id)arg1;
- (id)createTimeAndIpRegionText;
- (_Bool)updatePromotion;
- (_Bool)updateJumpInfoContainerWithContentVM:(id)arg1;
- (void)bindCommentJumpPanelSessionReport;
- (void)updateWithContentVM:(id)arg1;
- (_Bool)hasJumpInfoViewWithBusinessType:(int)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutView;
- (void)layoutSubviews;
- (void)onClickRightTipsTextViewAction;
- (void)longPressAction:(id)arg1;
- (void)setupUI;
- (_Bool)canBecomeFirstResponder;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

