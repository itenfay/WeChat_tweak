//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveConnectMicUsersInfo, NSMutableDictionary;

@interface MMFinderLiveReplayCompactMicUserInfoView : UIView
{
    MMFinderLiveConnectMicUsersInfo *_allMicUsersInfo;
    NSMutableDictionary *_userViews;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *userViews; // @synthesize userViews=_userViews;
@property(retain, nonatomic) MMFinderLiveConnectMicUsersInfo *allMicUsersInfo; // @synthesize allMicUsersInfo=_allMicUsersInfo;
- (void)updateSubviewsWithMicUserInfo:(id)arg1;
- (void)layoutSubviews;
- (void)clearAndHide;
- (void)showWithConnectMicUsersInfo:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

