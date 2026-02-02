//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class DeviceFollowItem, MMHeadImageView, UILabel;

@interface BraceletFocusContentView : UIView
{
    UILabel *_scoreLabel;
    UILabel *_nickNameLabel;
    MMHeadImageView *_headImageView;
    DeviceFollowItem *_followItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) DeviceFollowItem *followItem; // @synthesize followItem=_followItem;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) UILabel *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 followItem:(id)arg2;

@end

