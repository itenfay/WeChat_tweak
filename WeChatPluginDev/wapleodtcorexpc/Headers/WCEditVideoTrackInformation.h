//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface WCEditVideoTrackInformation : NSObject
{
    double _bitrate;
    double _framerate;
    NSArray *_formatDescriptions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *formatDescriptions; // @synthesize formatDescriptions=_formatDescriptions;
@property(nonatomic) double framerate; // @synthesize framerate=_framerate;
@property(nonatomic) double bitrate; // @synthesize bitrate=_bitrate;

@end

