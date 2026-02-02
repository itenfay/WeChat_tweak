//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WADynamicBackgroundGLContext;

@interface WADynamicBackgroundGLObject : NSObject
{
    WADynamicBackgroundGLContext *_context;
    union _GLKMatrix4 _modelMatrix;
}

- (void).cxx_destruct;
@property(nonatomic) union _GLKMatrix4 modelMatrix; // @synthesize modelMatrix=_modelMatrix;
@property(retain, nonatomic) WADynamicBackgroundGLContext *context; // @synthesize context=_context;
- (void)draw:(id)arg1;
- (void)update:(double)arg1;
- (id)initWithGLContext:(id)arg1;

@end

