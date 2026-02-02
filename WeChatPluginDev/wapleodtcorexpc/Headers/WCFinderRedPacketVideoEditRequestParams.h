//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSURL;

@interface WCFinderRedPacketVideoEditRequestParams : NSObject
{
    _Bool _isPendantView;
    NSURL *_videoUrl;
    long long _minSeconds;
    long long _maxSeconds;
}

- (void).cxx_destruct;
@property(nonatomic) long long maxSeconds; // @synthesize maxSeconds=_maxSeconds;
@property(nonatomic) long long minSeconds; // @synthesize minSeconds=_minSeconds;
@property(nonatomic) _Bool isPendantView; // @synthesize isPendantView=_isPendantView;
@property(retain, nonatomic) NSURL *videoUrl; // @synthesize videoUrl=_videoUrl;
- (id)init;

@end

