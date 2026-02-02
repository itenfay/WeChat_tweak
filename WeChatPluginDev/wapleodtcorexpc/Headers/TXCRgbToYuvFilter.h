//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class TXCGlFrameBuffer, TXCGlProgram, TXCPixelBufferPool;
@protocol TXCPixelTransferSession, TXIGlContext;

@interface TXCRgbToYuvFilter
{
    unsigned long long _outputFormat;
    id <TXIGlContext> _context;
    TXCGlFrameBuffer *_frameBuffer;
    TXCGlProgram *_program;
    TXCPixelBufferPool *_bufferPool;
    id <TXCPixelTransferSession> _pixelTransferSession;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <TXCPixelTransferSession> pixelTransferSession; // @synthesize pixelTransferSession=_pixelTransferSession;
@property(retain, nonatomic) TXCPixelBufferPool *bufferPool; // @synthesize bufferPool=_bufferPool;
@property(retain, nonatomic) TXCGlProgram *program; // @synthesize program=_program;
@property(retain, nonatomic) TXCGlFrameBuffer *frameBuffer; // @synthesize frameBuffer=_frameBuffer;
@property(readonly, nonatomic) id <TXIGlContext> context; // @synthesize context=_context;
@property(nonatomic) unsigned long long outputFormat; // @synthesize outputFormat=_outputFormat;
- (void)drawTextureToFrameBuffer:(id)arg1;
- (void)setupProgram;
- (void)processVideoFrame:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (_Bool)createGlObjectsIfNeeded;
- (id)initWithContext:(id)arg1 outputFormat:(unsigned long long)arg2;

@end

