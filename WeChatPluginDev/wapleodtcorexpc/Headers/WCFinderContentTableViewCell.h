//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class InteractionLabel, NSString, UIButton, UIImageView, WCFinderFeedContentTouchExpandTextView, WCFinderFeedContentVM;
@protocol WCFinderContentTableViewCellDelegate;

@interface WCFinderContentTableViewCell
{
    int _scene;
    id <WCFinderContentTableViewCellDelegate> _delegate;
    WCFinderFeedContentTouchExpandTextView *_textView;
    WCFinderFeedContentVM *_contentVM;
    InteractionLabel *_linkLabel;
    InteractionLabel *_POILabel;
    InteractionLabel *_eventLabel;
    UIButton *_longEntry;
    UIButton *_longEntryBubble;
    UIImageView *_locationImageView;
    UIImageView *_eventImageView;
    UIImageView *_linkImageView;
    CDUnknownBlockType _delayRefreshWork;
}

+ (struct CGSize)cellIconSize;
+ (double)constTextHeightWith:(id)arg1 width:(double)arg2;
+ (double)cellHeightWith:(id)arg1 width:(double)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType delayRefreshWork; // @synthesize delayRefreshWork=_delayRefreshWork;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) UIImageView *linkImageView; // @synthesize linkImageView=_linkImageView;
@property(retain, nonatomic) UIImageView *eventImageView; // @synthesize eventImageView=_eventImageView;
@property(retain, nonatomic) UIImageView *locationImageView; // @synthesize locationImageView=_locationImageView;
@property(retain, nonatomic) UIButton *longEntryBubble; // @synthesize longEntryBubble=_longEntryBubble;
@property(retain, nonatomic) UIButton *longEntry; // @synthesize longEntry=_longEntry;
@property(retain, nonatomic) InteractionLabel *eventLabel; // @synthesize eventLabel=_eventLabel;
@property(retain, nonatomic) InteractionLabel *POILabel; // @synthesize POILabel=_POILabel;
@property(retain, nonatomic) InteractionLabel *linkLabel; // @synthesize linkLabel=_linkLabel;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) WCFinderFeedContentTouchExpandTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak id <WCFinderContentTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)finderFeedEventIllegalWithEventId:(id)arg1;
- (void)onFeedContentTextView:(id)arg1 clickContentUserName:(id)arg2;
- (void)copyText;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)onFeedContentTextView:(id)arg1 clickMentionUsername:(id)arg2 nickname:(id)arg3;
- (void)onFeedContentTextView:(id)arg1 clickTopicText:(id)arg2;
- (void)onFeedContentTextView:(id)arg1 longPressedText:(id)arg2 withRect:(struct CGRect)arg3;
- (void)onFeedContentTextView:(id)arg1 clickReadMore:(_Bool)arg2 isTouchExpand:(_Bool)arg3;
- (void)resetLongEntry;
- (void)hideLongEntryBubbleIfPossible;
- (void)showLongEntryBubbleIfPossible;
- (void)clickEventAction:(id)arg1;
- (void)clickPOIAction:(id)arg1;
- (void)clickLinkAction;
- (void)showTextMenuWithRect:(struct CGRect)arg1;
- (_Bool)canBecomeFirstResponder;
- (void)leaveTriggerArea;
- (void)enterTriggerArea;
- (void)onEntry;
- (void)cellStartExposeReportAction;
- (void)updateContentWith:(id)arg1 scene:(int)arg2;
- (void)onMenuControllerWillHide:(id)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

