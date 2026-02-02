//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MAVPagTransitionEffect, NSString;

@interface MVVideoTransition : NSObject
{
    long long _beginPts;
    long long _duration;
    MAVPagTransitionEffect *_transitionEffect;
    NSString *_transtionPath;
    long long _videoIdBeforeTransition;
    long long _videoIdAfterTransition;
}

- (void).cxx_destruct;
@property(nonatomic) long long videoIdAfterTransition; // @synthesize videoIdAfterTransition=_videoIdAfterTransition;
@property(nonatomic) long long videoIdBeforeTransition; // @synthesize videoIdBeforeTransition=_videoIdBeforeTransition;
@property(retain, nonatomic) NSString *transtionPath; // @synthesize transtionPath=_transtionPath;
@property(retain, nonatomic) MAVPagTransitionEffect *transitionEffect; // @synthesize transitionEffect=_transitionEffect;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(nonatomic) long long beginPts; // @synthesize beginPts=_beginPts;
- (_Bool)containsPts:(long long)arg1;

@end

