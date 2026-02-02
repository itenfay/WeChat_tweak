//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCADVideoPlayInfo;

@interface WCAdBreakFrameReportInfo : NSObject
{
    unsigned int _videoSeekCount;
    WCADVideoPlayInfo *_playInfo;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int videoSeekCount; // @synthesize videoSeekCount=_videoSeekCount;
@property(retain, nonatomic) WCADVideoPlayInfo *playInfo; // @synthesize playInfo=_playInfo;
- (id)init;

@end

