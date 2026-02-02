//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMCPLabel, MMHeadImageView, MMUIView, WCStoryComment;

@interface WCStoryFriendVisitTableViewCell
{
    WCStoryComment *_comment;
    MMHeadImageView *_headView;
    MMUIView *_headBackGroundView;
    MMCPLabel *_nickNameLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMCPLabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) MMUIView *headBackGroundView; // @synthesize headBackGroundView=_headBackGroundView;
@property(retain, nonatomic) MMHeadImageView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) WCStoryComment *comment; // @synthesize comment=_comment;
- (void)onHeadImageViewDidClick:(id)arg1;
- (void)customLayoutSubviews;
- (void)setup;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

