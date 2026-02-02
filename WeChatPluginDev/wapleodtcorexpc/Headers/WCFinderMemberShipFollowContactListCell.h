//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIImageView, UILabel, UIView, WCFinderContact, WCFinderHeadImageView;
@protocol WCFinderMemberShipFollowContactListCellDelegate;

@interface WCFinderMemberShipFollowContactListCell : UITableViewCell
{
    id <WCFinderMemberShipFollowContactListCellDelegate> _delegate;
    UIView *_containerView;
    WCFinderHeadImageView *_headImageView;
    UILabel *_nickName;
    UILabel *_expireTime;
    WCFinderContact *_contact;
    UIImageView *_arrowImageView;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) UILabel *expireTime; // @synthesize expireTime=_expireTime;
@property(retain, nonatomic) UILabel *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <WCFinderMemberShipFollowContactListCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFinderMemberShipVisitorStatusHasChanged:(unsigned long long)arg1;
- (id)formatTimeString:(double)arg1;
- (void)updateWithContact:(id)arg1;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

