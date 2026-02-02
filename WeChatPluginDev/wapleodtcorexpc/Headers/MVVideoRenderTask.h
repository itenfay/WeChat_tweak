//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MVVideoRenderTask : NSObject
{
    NSMutableArray *_pixelBuffers;
    long long _pts;
}

- (void).cxx_destruct;
@property(nonatomic) long long pts; // @synthesize pts=_pts;
@property(retain, nonatomic) NSMutableArray *pixelBuffers; // @synthesize pixelBuffers=_pixelBuffers;

@end

