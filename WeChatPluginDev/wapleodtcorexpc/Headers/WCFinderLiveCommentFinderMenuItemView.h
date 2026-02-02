//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMHeadImageView, MMLiveCommentDataItem, MMUILabel, NSString, UIImageView, WCFinderContact, WCFinderHeadImageView;

@interface WCFinderLiveCommentFinderMenuItemView : UIView
{
    WCFinderContact *_contact;
    MMLiveCommentDataItem *_commentItem;
    WCFinderHeadImageView *_headImageView;
    MMHeadImageView *_likeHeadImageView;
    MMUILabel *_nameLabel;
    UIImageView *_rightArrowImgView;
    UIImageView *_roleImgView;
}

+ (double)finderMenuItemStandardHeight;
+ (double)finderMenuItemMinWidth;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *roleImgView; // @synthesize roleImgView=_roleImgView;
@property(retain, nonatomic) UIImageView *rightArrowImgView; // @synthesize rightArrowImgView=_rightArrowImgView;
@property(retain, nonatomic) MMUILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMHeadImageView *likeHeadImageView; // @synthesize likeHeadImageView=_likeHeadImageView;
@property(retain, nonatomic) WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) MMLiveCommentDataItem *commentItem; // @synthesize commentItem=_commentItem;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
- (void)updateNameLabelWidth;
- (void)layoutRoleImgView;
- (void)layoutRightArrowImgView;
- (void)layoutNameLabel;
- (void)layoutlikeHeadImageView;
- (void)layoutHeaderImageView;
- (void)layoutUI;
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

