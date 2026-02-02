//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EAGLContext;

@interface EJStatusHolder : NSObject
{
    EAGLContext *currContext;
    int currActiveTexture;
    int currTextureId;
    int currFrameBuffer;
    int currRenderBuffer;
    int currProgram;
    int curVAO;
    int curVBO;
    int curEBO;
    int currArrayBuffer;
    int currElementArrayBuffer;
    int currVertexArray;
    int currViewPort[4];
}

- (void)leave;
- (void)join:(id)arg1;
- (void)dealloc;

@end

