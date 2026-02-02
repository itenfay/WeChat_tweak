//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WeVisGLDrawQuad;

@interface WeVisByPassFS : NSObject
{
    WeVisGLDrawQuad *mQuadDrawerY;
    _Bool _isInitialized;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isInitialized; // @synthesize isInitialized=_isInitialized;
- (void)drawQuad:(unsigned int)arg1;
- (id)init;

@end

