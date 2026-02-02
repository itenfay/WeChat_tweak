//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UILabel, WCFinderFeedContentTouchExpandTextView, WCFinderFeedContentVM, WCFinderMaskButton;
@protocol WCFinderFeedDescriptionViewDelegate;

@interface WCFinderPhotoFeedDetailDescriptionView : UIView
{
    id <WCFinderFeedDescriptionViewDelegate> _delegate;
    WCFinderFeedContentVM *_contentVM;
    WCFinderFeedContentTouchExpandTextView *_textView;
    WCFinderMaskButton *_eventButton;
    WCFinderMaskButton *_poiButton;
    WCFinderMaskButton *_redPacketLinkButton;
    WCFinderMaskButton *_collectionButton;
    UILabel *_ipRegionAndPostTimeLabel;
    struct CGPoint _hitPoint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *ipRegionAndPostTimeLabel; // @synthesize ipRegionAndPostTimeLabel=_ipRegionAndPostTimeLabel;
@property(retain, nonatomic) WCFinderMaskButton *collectionButton; // @synthesize collectionButton=_collectionButton;
@property(nonatomic) struct CGPoint hitPoint; // @synthesize hitPoint=_hitPoint;
@property(retain, nonatomic) WCFinderMaskButton *redPacketLinkButton; // @synthesize redPacketLinkButton=_redPacketLinkButton;
@property(retain, nonatomic) WCFinderMaskButton *poiButton; // @synthesize poiButton=_poiButton;
@property(retain, nonatomic) WCFinderMaskButton *eventButton; // @synthesize eventButton=_eventButton;
@property(retain, nonatomic) WCFinderFeedContentTouchExpandTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(nonatomic) __weak id <WCFinderFeedDescriptionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFeedContentTextView:(id)arg1 clickContentUserName:(id)arg2;
- (void)copyText:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)onFeedContentTextView:(id)arg1 clickMentionUsername:(id)arg2 nickname:(id)arg3;
- (void)onFeedContentTextView:(id)arg1 clickTopicText:(id)arg2;
- (void)onFeedContentTextView:(id)arg1 clickText:(id)arg2 withRect:(struct CGRect)arg3;
- (_Bool)resignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)onFeedContentTextView:(id)arg1 longPressedText:(id)arg2 withRect:(struct CGRect)arg3;
- (void)onFeedContentTextView:(id)arg1 clickReadMore:(_Bool)arg2 isTouchExpand:(_Bool)arg3;
- (void)clickCollectionAction:(id)arg1;
- (void)clickLinkAction:(id)arg1;
- (void)clickEventAction:(id)arg1;
- (void)clickPOIAction:(id)arg1;
- (_Bool)hasRedPacketLink;
- (void)resetTrucation;
- (void)updateWithContentVM:(id)arg1;
- (void)layoutView;
- (void)layoutSubviews;
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

