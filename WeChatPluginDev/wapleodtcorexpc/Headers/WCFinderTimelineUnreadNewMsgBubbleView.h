//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMHeadImageView, RichTextView, UIButton, UIImageView;
@protocol WCFinderTimelineUnreadNewMsgBubbleViewProtocol;

@interface WCFinderTimelineUnreadNewMsgBubbleView
{
    id <WCFinderTimelineUnreadNewMsgBubbleViewProtocol> _delegate;
    unsigned long long _unReadMsgCount;
    UIButton *_notifyButton;
    RichTextView *_textView;
    MMHeadImageView *_headImageView;
    UIImageView *_arrowImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) RichTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIButton *notifyButton; // @synthesize notifyButton=_notifyButton;
@property(nonatomic) unsigned long long unReadMsgCount; // @synthesize unReadMsgCount=_unReadMsgCount;
@property(nonatomic) __weak id <WCFinderTimelineUnreadNewMsgBubbleViewProtocol> delegate; // @synthesize delegate=_delegate;
- (id)getBubbleBtn;
- (void)onClickNotificationMsgBtn;
- (void)adjustButtonWidth:(double)arg1;
- (void)adjustUIFrame;
- (double)configButtonWidth;
- (double)maxTextWidth;
- (void)updateNotifyButton;
- (void)setUpNotifyButton;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

