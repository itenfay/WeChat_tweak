//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveConnectMicUser, WCFinderSearchInfo;

@interface MMFinderLiveConnectMicSearchUserInfo : NSObject
{
    MMFinderLiveConnectMicUser *_user;
    WCFinderSearchInfo *_searchInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderSearchInfo *searchInfo; // @synthesize searchInfo=_searchInfo;
@property(retain, nonatomic) MMFinderLiveConnectMicUser *user; // @synthesize user=_user;

@end

