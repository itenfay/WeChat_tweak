//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMWebViewMpInfoModelVideoInfo : NSObject
{
    unsigned int _videoWidth;
    unsigned int _videoHeight;
    unsigned int _duration;
    NSString *_vid;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned int videoHeight; // @synthesize videoHeight=_videoHeight;
@property(nonatomic) unsigned int videoWidth; // @synthesize videoWidth=_videoWidth;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;

@end

