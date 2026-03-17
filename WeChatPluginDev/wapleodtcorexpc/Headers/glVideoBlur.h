//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface glVideoBlur : NSObject
{
    unsigned int mFrameBuffer[3];
    unsigned int mTextureid[3];
    unsigned int mProgramHandle;
    int mWidth;
    int mHeight;
    unsigned int mpositionid;
    unsigned int mtexcoordid;
    unsigned int vertexBuffer;
    unsigned int vertexArray;
    unsigned int minputImageTextureid;
    unsigned int mtexSizeid;
    unsigned int mOffsetid;
    long long scene;
}

- (unsigned int)getTex:(int)arg1;
- (void)process:(unsigned int)arg1 width:(int)arg2 height:(int)arg3;
- (void)setupVBOs;
- (void)updatebuffer:(int)arg1 height:(int)arg2;
- (_Bool)compileshaders;
- (unsigned int)complieshader:(const char *)arg1 strlen:(int)arg2 type:(unsigned int)arg3;
- (void)destroybuffers;
- (void)dealloc;
- (id)init:(long long)arg1;
- (id)init;

@end

