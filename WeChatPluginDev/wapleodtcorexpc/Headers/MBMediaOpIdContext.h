//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface MBMediaOpIdContext : NSObject
{
    int _canvasId;
    NSNumber *_containerId;
    NSString *_videoPath;
    NSString *_videoThumbPath;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *videoThumbPath; // @synthesize videoThumbPath=_videoThumbPath;
@property(copy, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
@property(nonatomic) int canvasId; // @synthesize canvasId=_canvasId;
@property(retain, nonatomic) NSNumber *containerId; // @synthesize containerId=_containerId;

@end

