//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CADisplayLink;

@interface MMLiveDisplayLinkDispatchItem : NSObject
{
    CADisplayLink *_displayLink;
    CDUnknownBlockType _block;
    double _beginTime;
}

- (void).cxx_destruct;
@property(nonatomic) double beginTime; // @synthesize beginTime=_beginTime;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
- (void)displayLinkCallback:(id)arg1;
- (void)start;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end

