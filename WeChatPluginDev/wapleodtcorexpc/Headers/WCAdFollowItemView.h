//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, NSString;
@protocol WCAdFollowItemViewDelegate;

@interface WCAdFollowItemView
{
    _Bool _isFollowed;
    NSString *_title;
    NSString *_desc;
    MMUIButton *_followButton;
    MMUILabel *_followTitle;
    MMUILabel *_followDesc;
    MMUILabel *_followedTips;
    id <WCAdFollowItemViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCAdFollowItemViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMUILabel *followedTips; // @synthesize followedTips=_followedTips;
@property(retain, nonatomic) MMUILabel *followDesc; // @synthesize followDesc=_followDesc;
@property(retain, nonatomic) MMUILabel *followTitle; // @synthesize followTitle=_followTitle;
@property(retain, nonatomic) MMUIButton *followButton; // @synthesize followButton=_followButton;
@property(nonatomic) _Bool isFollowed; // @synthesize isFollowed=_isFollowed;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (_Bool)isUserSelected;
- (void)onCheckBoxClick:(id)arg1;
- (void)initSubview;
- (id)initWithTitle:(id)arg1 desc:(id)arg2 isFollowed:(_Bool)arg3;

@end

