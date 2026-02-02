//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSFileHandle, NSString;

@interface AudioFile : NSObject
{
    NSFileHandle *m_fhFile;
    unsigned int m_uiDataWrited;
}

- (void).cxx_destruct;
- (void)flush;
- (_Bool)writeBytes:(unsigned int)arg1 len:(unsigned int)arg2 buffer:(void *)arg3 sync:(_Bool)arg4;
- (_Bool)writeBytes:(unsigned int)arg1 len:(unsigned int)arg2 buffer:(void *)arg3;
- (_Bool)readBytes:(unsigned int)arg1 len:(unsigned int *)arg2 buffer:(void *)arg3;
- (unsigned int)getLength;
- (unsigned int)seekToEnd;
- (void)close;
- (_Bool)read:(id)arg1;
- (_Bool)open:(id)arg1;
- (_Bool)create:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

