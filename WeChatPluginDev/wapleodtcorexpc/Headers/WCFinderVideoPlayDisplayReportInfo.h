//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCPlayerPlaybackInfo;

@interface WCFinderVideoPlayDisplayReportInfo : NSObject
{
    _Bool _showBulletAnimating;
    NSString *_tid;
    WCPlayerPlaybackInfo *_playbackInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showBulletAnimating; // @synthesize showBulletAnimating=_showBulletAnimating;
@property(retain, nonatomic) WCPlayerPlaybackInfo *playbackInfo; // @synthesize playbackInfo=_playbackInfo;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;

@end

