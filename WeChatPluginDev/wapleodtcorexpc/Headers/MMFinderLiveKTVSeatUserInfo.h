//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveConnectMicUser;

@interface MMFinderLiveKTVSeatUserInfo : NSObject
{
    _Bool _isPreparing;
    int _score;
    MMFinderLiveConnectMicUser *_userInfo;
}

- (void).cxx_destruct;
@property(nonatomic) int score; // @synthesize score=_score;
@property(nonatomic) _Bool isPreparing; // @synthesize isPreparing=_isPreparing;
@property(retain, nonatomic) MMFinderLiveConnectMicUser *userInfo; // @synthesize userInfo=_userInfo;

@end

