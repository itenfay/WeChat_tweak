//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMCPLabel, MMHeadImageView, NSString, RichTextView, UIView, WCStoryComment;
@protocol WCStoryFriendCommmentHeadCellDelegate;

@interface WCStoryFriendCommentHeadCell : UITableViewCell
{
    id <WCStoryFriendCommmentHeadCellDelegate> _delegate;
    WCStoryComment *_comment;
    MMHeadImageView *_headImageView;
    MMCPLabel *_userNameLabel;
    RichTextView *_commentView;
    UIView *_separateLine;
}

+ (id)getRichTextViewFont;
+ (unsigned long long)getRichTextViewParserType;
+ (double)heightForComment:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separateLine; // @synthesize separateLine=_separateLine;
@property(retain, nonatomic) RichTextView *commentView; // @synthesize commentView=_commentView;
@property(retain, nonatomic) MMCPLabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) WCStoryComment *comment; // @synthesize comment=_comment;
@property(nonatomic) __weak id <WCStoryFriendCommmentHeadCellDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)onHeadViewDidClick;
- (void)onContentViewDidClick;
- (id)getUserLabelText;
- (void)setupGesture;
- (void)setupSubviews;
- (void)setup;
- (void)updateUI;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

