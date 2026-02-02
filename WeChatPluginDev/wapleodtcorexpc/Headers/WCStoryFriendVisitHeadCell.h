//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMCPLabel, MMHeadImageView, WCStoryComment;
@protocol WCStoryFriendVisitHeadCellDelegate;

@interface WCStoryFriendVisitHeadCell : UICollectionViewCell
{
    id <WCStoryFriendVisitHeadCellDelegate> _delegate;
    WCStoryComment *_comment;
    MMHeadImageView *_headImageView;
    MMCPLabel *_userNameLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMCPLabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) WCStoryComment *comment; // @synthesize comment=_comment;
@property(nonatomic) __weak id <WCStoryFriendVisitHeadCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickHeadView;
- (void)updateUI;
- (void)setup;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

