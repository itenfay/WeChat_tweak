//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class glUSM3Fusion, glVideoBlur;

@interface glVideoSharpen : NSObject
{
    glVideoBlur *mBlurFilter;
    glUSM3Fusion *mUSM3FusionFilter;
    int mInputFormat;
    int mSharpenMode;
    long long mSharpenScene;
    int mrate;
}

- (void).cxx_destruct;
- (unsigned int)process:(unsigned int)arg1 width:(int)arg2 height:(int)arg3 mode:(long long)arg4 sharpenratio:(float)arg5;
- (unsigned int)process:(unsigned int)arg1 width:(int)arg2 height:(int)arg3 mode:(long long)arg4;
- (void)setrate:(int)arg1;
- (void)updatebuffer:(int)arg1 height:(int)arg2;
- (void)destroybuffers;
- (void)dealloc;
- (id)init:(int)arg1 scene:(long long)arg2;

@end

