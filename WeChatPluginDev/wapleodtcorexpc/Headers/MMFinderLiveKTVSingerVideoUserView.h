//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveKTVSingerVideoUserInfoView;

@interface MMFinderLiveKTVSingerVideoUserView : UIView
{
    MMFinderLiveKTVSingerVideoUserInfoView *_userInfoView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveKTVSingerVideoUserInfoView *userInfoView; // @synthesize userInfoView=_userInfoView;
- (void)updateSingerUserInfo:(id)arg1;
- (void)addSubview:(id)arg1;
- (void)createUserInfoViewWithUserInfo:(id)arg1 taskId:(id)arg2;
- (id)initWithSingerUserInfo:(id)arg1 taskId:(id)arg2;

@end

