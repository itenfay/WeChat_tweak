//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveCDNPlayerSingleAudioMicUserView, MMFinderLiveConnectMicUser, UIImageView;

@interface MMFinderLiveCDNPlayerMicUserViewInfo : NSObject
{
    MMFinderLiveConnectMicUser *_userInfo;
    MMFinderLiveCDNPlayerSingleAudioMicUserView *_userView;
    UIImageView *_coverImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) MMFinderLiveCDNPlayerSingleAudioMicUserView *userView; // @synthesize userView=_userView;
@property(retain, nonatomic) MMFinderLiveConnectMicUser *userInfo; // @synthesize userInfo=_userInfo;
- (void)clearAllViews;
- (void)createOrUpdateCoverImageViewWithUrl:(id)arg1;

@end

