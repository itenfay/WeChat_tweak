//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAShapeLayer, CContact, MMHeadImageView, MMUIButton, MMUILabel, NSString, RichTextView, UIPanGestureRecognizer, UIVisualEffectView;

@interface MMGroupLiveOnlineUserProfileView : UIView
{
    _Bool _isAnchor;
    _Bool _isSelf;
    _Bool _isAdmin;
    _Bool _isOpening;
    CDUnknownBlockType _complaintCallback;
    CDUnknownBlockType _kickoutCallback;
    CDUnknownBlockType _cutLiveCallback;
    CDUnknownBlockType _openedCallback;
    CDUnknownBlockType _closedCallback;
    UIView *_contentView;
    UIView *_profileDetailView;
    UIView *_maskView;
    CAShapeLayer *_shapeLayer;
    UIVisualEffectView *_visualEfView;
    MMHeadImageView *_headImageView;
    MMUILabel *_displayNameLabel;
    MMUILabel *_genderLabel;
    MMUILabel *_placeLabel;
    RichTextView *_signatureLabel;
    MMUIButton *_comlaintButton;
    MMUIButton *_kickoutButton;
    MMUIButton *_cutLiveButton;
    MMUIButton *_closeButton;
    NSString *_userName;
    NSString *_roomId;
    CContact *_contact;
    UIPanGestureRecognizer *_panGestureRecognizer;
    double _viewTopAtPanBegin;
    double _previousPanPositionY;
}

- (void).cxx_destruct;
@property(nonatomic) double previousPanPositionY; // @synthesize previousPanPositionY=_previousPanPositionY;
@property(nonatomic) double viewTopAtPanBegin; // @synthesize viewTopAtPanBegin=_viewTopAtPanBegin;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(nonatomic) _Bool isOpening; // @synthesize isOpening=_isOpening;
@property(nonatomic) _Bool isAdmin; // @synthesize isAdmin=_isAdmin;
@property(nonatomic) _Bool isSelf; // @synthesize isSelf=_isSelf;
@property(nonatomic) _Bool isAnchor; // @synthesize isAnchor=_isAnchor;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) MMUIButton *cutLiveButton; // @synthesize cutLiveButton=_cutLiveButton;
@property(retain, nonatomic) MMUIButton *kickoutButton; // @synthesize kickoutButton=_kickoutButton;
@property(retain, nonatomic) MMUIButton *comlaintButton; // @synthesize comlaintButton=_comlaintButton;
@property(retain, nonatomic) RichTextView *signatureLabel; // @synthesize signatureLabel=_signatureLabel;
@property(retain, nonatomic) MMUILabel *placeLabel; // @synthesize placeLabel=_placeLabel;
@property(retain, nonatomic) MMUILabel *genderLabel; // @synthesize genderLabel=_genderLabel;
@property(retain, nonatomic) MMUILabel *displayNameLabel; // @synthesize displayNameLabel=_displayNameLabel;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIVisualEffectView *visualEfView; // @synthesize visualEfView=_visualEfView;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIView *profileDetailView; // @synthesize profileDetailView=_profileDetailView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) CDUnknownBlockType closedCallback; // @synthesize closedCallback=_closedCallback;
@property(copy, nonatomic) CDUnknownBlockType openedCallback; // @synthesize openedCallback=_openedCallback;
@property(copy, nonatomic) CDUnknownBlockType cutLiveCallback; // @synthesize cutLiveCallback=_cutLiveCallback;
@property(copy, nonatomic) CDUnknownBlockType kickoutCallback; // @synthesize kickoutCallback=_kickoutCallback;
@property(copy, nonatomic) CDUnknownBlockType complaintCallback; // @synthesize complaintCallback=_complaintCallback;
- (void)handleContentViewPanGesture:(id)arg1;
- (void)onCutLiveButtonClicked;
- (void)onKickoutButtonClicked;
- (void)onComlaintButtonClicked;
- (void)openWithAnimation:(_Bool)arg1;
- (void)closeWithAnimation:(_Bool)arg1;
- (void)close;
- (void)updateWithUserName:(id)arg1 roomId:(id)arg2 isAnchor:(_Bool)arg3 isAnchorHeadClicked:(_Bool)arg4;
- (struct CGRect)contentViewFrame;
- (double)contentViewHeight;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

