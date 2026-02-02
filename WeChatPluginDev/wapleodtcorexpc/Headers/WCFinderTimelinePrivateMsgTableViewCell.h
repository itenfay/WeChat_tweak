//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIButton, UILabel, WCFinderContact, WCFinderHeadImageView;
@protocol WCFinderTimelinePrivateMsgTableViewCellDelegate;

@interface WCFinderTimelinePrivateMsgTableViewCell : UITableViewCell
{
    _Bool _isInDarkMode;
    id <WCFinderTimelinePrivateMsgTableViewCellDelegate> _delegate;
    UIButton *_notifyButton;
    UILabel *_unReadLabel;
    WCFinderHeadImageView *_headImageView;
    NSString *_currentMsgUsername;
    WCFinderContact *_finderContact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderContact *finderContact; // @synthesize finderContact=_finderContact;
@property(copy, nonatomic) NSString *currentMsgUsername; // @synthesize currentMsgUsername=_currentMsgUsername;
@property(nonatomic) __weak WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UILabel *unReadLabel; // @synthesize unReadLabel=_unReadLabel;
@property(retain, nonatomic) UIButton *notifyButton; // @synthesize notifyButton=_notifyButton;
@property(nonatomic) _Bool isInDarkMode; // @synthesize isInDarkMode=_isInDarkMode;
@property(nonatomic) __weak id <WCFinderTimelinePrivateMsgTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFinderContactUpdate:(id)arg1;
- (void)onClickNotificationMsgBtn;
- (void)adjustUIFrame;
- (void)updateNotifyButton;
- (void)setUpNotifyButton;
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

