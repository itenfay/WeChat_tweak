//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMCPLabel, MMHeadImageView, NSString, UILabel, UIView;

@interface WCStoryTimelineEntranceCollectionViewCell : UICollectionViewCell
{
    UIView *_headBackGroundView;
    UILabel *_blueTipView;
    MMHeadImageView *_headImageView;
    MMCPLabel *_nickNameLabel;
    NSString *_userName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) MMCPLabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UILabel *blueTipView; // @synthesize blueTipView=_blueTipView;
@property(retain, nonatomic) UIView *headBackGroundView; // @synthesize headBackGroundView=_headBackGroundView;
- (void)layoutCustomSubViews;
- (void)setUserName:(id)arg1 hasUnreadComment:(_Bool)arg2 unreadCommentCount:(unsigned long long)arg3;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

