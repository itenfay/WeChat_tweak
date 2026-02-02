//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveConnectMicUser, UIView;
@protocol MMFinderLiveConnectMicOperationViewBase;

@interface MMFinderLiveConnectMicUserUIWrap : NSObject
{
    _Bool _useVideo;
    MMFinderLiveConnectMicUser *_userInfo;
    UIView<MMFinderLiveConnectMicOperationViewBase> *_userView;
    unsigned long long _index;
    unsigned long long _totalCount;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useVideo; // @synthesize useVideo=_useVideo;
@property(nonatomic) unsigned long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(retain, nonatomic) UIView<MMFinderLiveConnectMicOperationViewBase> *userView; // @synthesize userView=_userView;
@property(retain, nonatomic) MMFinderLiveConnectMicUser *userInfo; // @synthesize userInfo=_userInfo;

@end

