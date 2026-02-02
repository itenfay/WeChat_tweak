//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface PLzmaSDKInStream : NSObject
{
    struct SharedPtr<plzma::InStream> _inStream;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithStreams:(id)arg1;
- (id)initWithDataNoCopy:(id)arg1;
- (id)initWithDataCopy:(id)arg1;
- (id)initWithPath:(id)arg1;
- (_Bool)erase:(unsigned char)arg1;
@property(readonly, nonatomic) _Bool opened;
@property(readonly, nonatomic) const void *inStreamSPtr;

@end

