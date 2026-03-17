//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WeVisGLFrameBuffer : NSObject
{
    unsigned int _fboId;
}

@property(nonatomic) unsigned int fboId; // @synthesize fboId=_fboId;
- (void)dealloc;
- (void)bind;
- (id)initWithColorTexture2D0:(unsigned int)arg1;

@end

