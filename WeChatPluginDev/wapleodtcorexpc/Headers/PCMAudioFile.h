//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface PCMAudioFile : NSObject
{
    struct AudioStreamBasicDescription mDataFormat;
    struct OpaqueAudioFileID *mAudioFile;
    NSString *mFileName;
    unsigned int mCurrentPacket;
}

- (void).cxx_destruct;
- (_Bool)writeBytes:(void *)arg1 len:(unsigned int)arg2;
- (_Bool)openByName:(id)arg1;
- (void)setDataFormat:(struct AudioStreamBasicDescription)arg1;
- (void)dealloc;
- (id)init;
- (void)createAudioFile_WAVE:(id)arg1;

@end

