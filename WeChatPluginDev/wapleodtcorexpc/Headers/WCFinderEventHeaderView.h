//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class FinderEventInfo, MMUIButton, MMWebImageView, NSString, UIImageView, UILabel, UIView, WCFinderEventMiniTaskView, WCFinderFittingWidthRichView, WCFinderHeadImageView;
@protocol WCFinderEventHeaderViewDelegate;

@interface WCFinderEventHeaderView : UICollectionReusableView
{
    _Bool _hiddenNumber;
    id <WCFinderEventHeaderViewDelegate> _delegate;
    UIView *_miniAppView;
    FinderEventInfo *_eventInfo;
    UIView *_initiatorView;
    WCFinderHeadImageView *_avatarImageView;
    UILabel *_nicknameLabel;
    UILabel *_titleLabel;
    WCFinderFittingWidthRichView *_sizeableDescTextView;
    MMUIButton *_rightArrowButton;
    UILabel *_timeTipsLabel;
    UIView *_descriptionContactleadLine;
    UIView *_descriptionContactView;
    WCFinderHeadImageView *_descriptionContactImageView;
    UILabel *_descriptionContactLabel;
    MMWebImageView *_miniAppIconView;
    UILabel *_miniAppNameLabel;
    UIImageView *_rightArrowIconView;
    UILabel *_memberNumTipsLabel;
    MMUIButton *_joinButton;
    WCFinderEventMiniTaskView *_miniTaskContainer;
}

+ (_Bool)shouldShowExpiredTimeWithEventInfo:(id)arg1;
+ (id)getDescriptionWithEventInfo:(id)arg1;
+ (struct CGSize)joinButtonSizeWithEventInfo:(id)arg1;
+ (double)heightWithEventInfo:(id)arg1 andViewWidth:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderEventMiniTaskView *miniTaskContainer; // @synthesize miniTaskContainer=_miniTaskContainer;
@property(retain, nonatomic) MMUIButton *joinButton; // @synthesize joinButton=_joinButton;
@property(retain, nonatomic) UILabel *memberNumTipsLabel; // @synthesize memberNumTipsLabel=_memberNumTipsLabel;
@property(retain, nonatomic) UIImageView *rightArrowIconView; // @synthesize rightArrowIconView=_rightArrowIconView;
@property(retain, nonatomic) UILabel *miniAppNameLabel; // @synthesize miniAppNameLabel=_miniAppNameLabel;
@property(retain, nonatomic) MMWebImageView *miniAppIconView; // @synthesize miniAppIconView=_miniAppIconView;
@property(retain, nonatomic) UILabel *descriptionContactLabel; // @synthesize descriptionContactLabel=_descriptionContactLabel;
@property(retain, nonatomic) WCFinderHeadImageView *descriptionContactImageView; // @synthesize descriptionContactImageView=_descriptionContactImageView;
@property(retain, nonatomic) UIView *descriptionContactView; // @synthesize descriptionContactView=_descriptionContactView;
@property(retain, nonatomic) UIView *descriptionContactleadLine; // @synthesize descriptionContactleadLine=_descriptionContactleadLine;
@property(retain, nonatomic) UILabel *timeTipsLabel; // @synthesize timeTipsLabel=_timeTipsLabel;
@property(retain, nonatomic) MMUIButton *rightArrowButton; // @synthesize rightArrowButton=_rightArrowButton;
@property(retain, nonatomic) WCFinderFittingWidthRichView *sizeableDescTextView; // @synthesize sizeableDescTextView=_sizeableDescTextView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIView *initiatorView; // @synthesize initiatorView=_initiatorView;
@property(retain, nonatomic) FinderEventInfo *eventInfo; // @synthesize eventInfo=_eventInfo;
@property(nonatomic) _Bool hiddenNumber; // @synthesize hiddenNumber=_hiddenNumber;
@property(retain, nonatomic) UIView *miniAppView; // @synthesize miniAppView=_miniAppView;
@property(nonatomic) __weak id <WCFinderEventHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)openEventMiniApp;
- (void)joinButtonClicked;
- (void)onClickDescriptionContactAction;
- (void)displayMoreDescription;
- (void)onClickAuthorInfoAction;
- (void)eventMiniTaskEntranceDidClick;
- (void)onTextClicked:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (double)lineWidthAtY:(double)arg1 lineIndex:(long long)arg2 richTextView:(id)arg3;
- (_Bool)hasShowJoinButton;
- (_Bool)hasShowDescriptionContact;
- (_Bool)hasShowMoreDescriptionButton;
- (void)setToNormalMode;
- (id)getMemberNumberTextWithEventInfo:(id)arg1;
- (void)updateJoinButtonWithEventInfo:(id)arg1;
- (void)updateWithEventInfo:(id)arg1 showJoinButton:(_Bool)arg2;
- (void)layoutSubviews;
- (void)updateLayout;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

