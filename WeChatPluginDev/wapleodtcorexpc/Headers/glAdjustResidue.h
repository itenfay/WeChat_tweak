//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface glAdjustResidue : NSObject
{
    unsigned int mFrameBuffer;
    unsigned int mTextureid;
    unsigned int mProgramHandle;
    int mWidth;
    int mHeight;
    unsigned int mpositionid;
    unsigned int mtexcoordid;
    unsigned int minputImageTextureid;
    unsigned int mblurredImageTexture1id;
    unsigned int mblurredImageTexture3id;
}

- (unsigned int)process:(unsigned int)arg1 input2:(unsigned int)arg2 input3:(unsigned int)arg3 width:(int)arg4 height:(int)arg5;
- (void)setupVBOs;
- (void)updatebuffer:(int)arg1 height:(int)arg2;
- (_Bool)compileshaders;
- (unsigned int)complieshader:(const char *)arg1 strlen:(int)arg2 type:(unsigned int)arg3;
- (void)destroybuffers;
- (void)dealloc;
- (id)init;

@end

