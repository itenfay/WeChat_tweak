//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class TXCGlFrameBuffer;
@protocol TXCCustomVideoProcessDelegate, TXICustomProcessConverter, TXIGlContext;

@interface TXCCustomConvertFilter
{
    id <TXIGlContext> _context;
    id <TXICustomProcessConverter> _converter;
    id <TXCCustomVideoProcessDelegate> _delegate;
    unsigned long long _bufferType;
    unsigned long long _format;
    TXCGlFrameBuffer *_srcBuffer;
    TXCGlFrameBuffer *_dstBuffer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TXCGlFrameBuffer *dstBuffer; // @synthesize dstBuffer=_dstBuffer;
@property(retain, nonatomic) TXCGlFrameBuffer *srcBuffer; // @synthesize srcBuffer=_srcBuffer;
@property(nonatomic) unsigned long long format; // @synthesize format=_format;
@property(nonatomic) unsigned long long bufferType; // @synthesize bufferType=_bufferType;
@property(nonatomic) __weak id <TXCCustomVideoProcessDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <TXICustomProcessConverter> converter; // @synthesize converter=_converter;
@property(readonly, nonatomic) id <TXIGlContext> context; // @synthesize context=_context;
- (void)processVideoFrame:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (_Bool)createGlObjectsIfNeeded;
- (void)dealloc;
- (_Bool)needsYuvInput;
- (id)initWithContext:(id)arg1 delegate:(id)arg2 format:(unsigned long long)arg3 bufferType:(unsigned long long)arg4;

@end

