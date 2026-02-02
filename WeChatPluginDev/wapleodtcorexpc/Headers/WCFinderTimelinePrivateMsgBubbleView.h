//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, UIImageView, UILabel, WCFinderContact, WCFinderHeadImageView;
@protocol WCFinderTimelinePrivateMsgBubbleViewDelegate;

@interface WCFinderTimelinePrivateMsgBubbleView
{
    id <WCFinderTimelinePrivateMsgBubbleViewDelegate> _delegate;
    UIButton *_notifyButton;
    UILabel *_unReadLabel;
    WCFinderHeadImageView *_headImageView;
    NSString *_currentMsgUsername;
    WCFinderContact *_finderContact;
    UIImageView *_arrowImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) WCFinderContact *finderContact; // @synthesize finderContact=_finderContact;
@property(copy, nonatomic) NSString *currentMsgUsername; // @synthesize currentMsgUsername=_currentMsgUsername;
@property(retain, nonatomic) WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UILabel *unReadLabel; // @synthesize unReadLabel=_unReadLabel;
@property(retain, nonatomic) UIButton *notifyButton; // @synthesize notifyButton=_notifyButton;
@property(nonatomic) __weak id <WCFinderTimelinePrivateMsgBubbleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getBubbleBtn;
- (void)onFinderContactUpdate:(id)arg1;
- (void)onClickNotificationMsgBtn;
- (void)adjustButtonWidth:(double)arg1;
- (void)adjustUIFrame;
- (void)updateNotifyButton;
- (void)setUpNotifyButton;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

