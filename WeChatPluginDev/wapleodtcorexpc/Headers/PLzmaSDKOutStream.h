//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData;

@interface PLzmaSDKOutStream : NSObject
{
    struct SharedPtr<plzma::OutStream> _outStream;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithPath:(id)arg1;
- (id)initWithOutStreamMTh:(void *)arg1;
- (id)initWithOutStreamM:(void *)arg1;
- (_Bool)erase:(unsigned char)arg1;
@property(readonly, nonatomic) NSData *copyContent;
@property(readonly, nonatomic) _Bool opened;
@property(readonly, nonatomic) _Bool isMulti;
@property(readonly, nonatomic) const void *outStreamSPtr;

@end

