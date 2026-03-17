//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface glUSM3Fusion : NSObject
{
    unsigned int mFrameBuffer;
    unsigned int mTextureid;
    unsigned int mProgramHandle;
    int mWidth;
    int mHeight;
    int mInputFormat;
    int mSharpenMode;
    int mrate;
    unsigned int mpositionid;
    unsigned int mtexcoordid;
    unsigned int vertexBuffer;
    unsigned int vertexArray;
    unsigned int minputImageTextureid;
    unsigned int mresiduemapImageTextureid;
    unsigned int mblurredImageTexture1id;
    unsigned int mblurredImageTexture2id;
    unsigned int mblurredImageTexture3id;
    unsigned int mweightsid;
    long long scene;
}

- (unsigned int)process:(unsigned int)arg1 input2:(unsigned int)arg2 input3:(unsigned int)arg3 input4:(unsigned int)arg4 width:(int)arg5 height:(int)arg6 sharpenratio:(float)arg7;
- (unsigned int)process:(unsigned int)arg1 input2:(unsigned int)arg2 input3:(unsigned int)arg3 input4:(unsigned int)arg4 width:(int)arg5 height:(int)arg6;
- (void)setmode:(int)arg1;
- (void)setrate:(int)arg1;
- (void)setupVBOs;
- (void)updatebuffer:(int)arg1 height:(int)arg2;
- (_Bool)compileshaders;
- (unsigned int)complieshader:(const char *)arg1 strlen:(int)arg2 type:(unsigned int)arg3;
- (void)destroybuffers;
- (void)dealloc;
- (id)init:(int)arg1 scene:(long long)arg2;

@end

