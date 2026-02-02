//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderJumpInfo_CardStyle, FinderJumpInfo_Style, MMTimer, MMUIButton, MMWebImageView, NSString, UILabel, WCFinderJumpInfo;
@protocol WCFinderJumpInfoCardDelegate;

@interface WCFinderJumpInfoCard : UIView
{
    int _showPosition;
    id <WCFinderJumpInfoCardDelegate> _delegate;
    WCFinderJumpInfo *_jumpInfo;
    FinderJumpInfo_Style *_jumpInfoStyle;
    FinderJumpInfo_CardStyle *_cardConfig;
    unsigned long long _cardStyle;
    MMWebImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UILabel *_infoLabel;
    MMWebImageView *_infoIconView;
    MMUIButton *_actionButton;
    double _maxWidth;
    MMTimer *_timer;
    unsigned long long _currentUIStyle;
    struct CGRect _titleFrame;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long currentUIStyle; // @synthesize currentUIStyle=_currentUIStyle;
@property(nonatomic) struct CGRect titleFrame; // @synthesize titleFrame=_titleFrame;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(retain, nonatomic) MMUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) __weak MMWebImageView *infoIconView; // @synthesize infoIconView=_infoIconView;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) unsigned long long cardStyle; // @synthesize cardStyle=_cardStyle;
@property(retain, nonatomic) FinderJumpInfo_CardStyle *cardConfig; // @synthesize cardConfig=_cardConfig;
@property(retain, nonatomic) FinderJumpInfo_Style *jumpInfoStyle; // @synthesize jumpInfoStyle=_jumpInfoStyle;
@property(nonatomic) int showPosition; // @synthesize showPosition=_showPosition;
@property(retain, nonatomic) WCFinderJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(nonatomic) __weak id <WCFinderJumpInfoCardDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLoadImageFail:(id)arg1 extraInfo:(id)arg2;
- (void)onLoadImageOK:(id)arg1;
- (void)notifyToShow;
- (void)layoutUI;
- (int)imageSizeType;
- (int)buttonType;
- (void)updateUIInfo;
- (void)onActionButtonDidClick;
- (void)endExposeAction;
- (void)startExposeAction;
- (void)showJumpInfoViewForCompletePlayIfNeeded;
- (void)changeToShow:(_Bool)arg1;
- (void)updateWithJumpInfo:(id)arg1 style:(id)arg2;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)updateActionButtonStyle;
- (void)setUIStyle:(unsigned long long)arg1;
- (void)changeToAnimationFinishState;
- (void)changeToAnimationStartStateWithTitleFrame:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (id)initWithCardStyle:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

