//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface CTFrameWrap : NSObject
{
    struct __CTFrame *_frameRef;
    struct CGSize _frameSize;
}

@property(nonatomic) struct CGSize frameSize; // @synthesize frameSize=_frameSize;
@property(nonatomic) struct __CTFrame *frameRef; // @synthesize frameRef=_frameRef;
- (void)dealloc;
- (id)initWithFrameRef:(struct __CTFrame *)arg1;

@end

