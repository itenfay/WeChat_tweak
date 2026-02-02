//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMHeadImageView, UIButton, UILabel;
@protocol WCFinderPublishHeadTableViewCellProtocol;

@interface WCFinderPublishHeadTableViewCell : UITableViewCell
{
    _Bool _isInDarkMode;
    id <WCFinderPublishHeadTableViewCellProtocol> _delegate;
    UIButton *_notifyButton;
    UILabel *_unReadLabel;
    MMHeadImageView *_headImageView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UILabel *unReadLabel; // @synthesize unReadLabel=_unReadLabel;
@property(retain, nonatomic) UIButton *notifyButton; // @synthesize notifyButton=_notifyButton;
@property(nonatomic) _Bool isInDarkMode; // @synthesize isInDarkMode=_isInDarkMode;
@property(nonatomic) __weak id <WCFinderPublishHeadTableViewCellProtocol> delegate; // @synthesize delegate=_delegate;
- (void)onClickNotificationMsgBtn;
- (void)adjustUIFrame;
- (void)updateNotifyButton;
- (void)setUpNotifyButton;
- (void)layoutSubviews;
- (void)updateContentViewBackgroundColor:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

