//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TXCPixelBufferPool : NSObject
{
    _Bool _metalCompatible;
    unsigned long long _format;
    struct __CFString *_yCbCrMatrixKey;
    struct __CVPixelBufferPool *_pool;
    struct CGSize _size;
}

@property(nonatomic) struct __CVPixelBufferPool *pool; // @synthesize pool=_pool;
@property(nonatomic) struct __CFString *yCbCrMatrixKey; // @synthesize yCbCrMatrixKey=_yCbCrMatrixKey;
@property(nonatomic) _Bool metalCompatible; // @synthesize metalCompatible=_metalCompatible;
@property(nonatomic) unsigned long long format; // @synthesize format=_format;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
- (void)releaseBufferPool;
- (void)createBufferPool;
- (struct __CVBuffer *)createPixelBuffer;
- (void)resetBufferPool;
- (void)dealloc;
- (id)initWithVideoFormat:(unsigned long long)arg1;

@end

