//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveConnectMicUser, UILabel, WCFinderHeadImageView;

@interface MMFinderLiveReplayCompactMicUserInfoOperationView : UIView
{
    MMFinderLiveConnectMicUser *_micUser;
    WCFinderHeadImageView *_headImageView;
    UILabel *_nicknameLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) MMFinderLiveConnectMicUser *micUser; // @synthesize micUser=_micUser;
- (void)layoutSubviews;
- (id)initWithMicUser:(id)arg1;

@end

