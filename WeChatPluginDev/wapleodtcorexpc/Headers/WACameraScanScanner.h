//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, WACameraQRCodeScannerDelegate;

@interface WACameraScanScanner : NSObject
{
    char *_sendImage;
    int _sendImageBufferSize;
    basic_string_5909a4e2 _decodeData;
    basic_string_5909a4e2 _decodeType;
    basic_string_5909a4e2 _decodeCharset;
    struct QBAR_REPORT_MSG _reportMsg;
    struct QBar *_qbar;
    int _scanCodeType;
    NSObject<OS_dispatch_queue> *_scanQueue;
    unsigned int _scanIndex;
    id <WACameraQRCodeScannerDelegate> _delegate;
    NSString *_resultData;
    NSString *_resultType;
    double _scanFreq;
    double _lastScanTime;
    struct CGRect _cropRegion;
    struct CGRect _scanRegion;
    struct CGRect _cameraViewRect;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) double lastScanTime; // @synthesize lastScanTime=_lastScanTime;
@property(nonatomic) unsigned int scanIndex; // @synthesize scanIndex=_scanIndex;
@property(nonatomic) struct CGRect cameraViewRect; // @synthesize cameraViewRect=_cameraViewRect;
@property(nonatomic) double scanFreq; // @synthesize scanFreq=_scanFreq;
@property(nonatomic) struct CGRect scanRegion; // @synthesize scanRegion=_scanRegion;
@property(nonatomic) struct CGRect cropRegion; // @synthesize cropRegion=_cropRegion;
@property(retain, nonatomic) NSString *resultType; // @synthesize resultType=_resultType;
@property(retain, nonatomic) NSString *resultData; // @synthesize resultData=_resultData;
@property(nonatomic) __weak id <WACameraQRCodeScannerDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGRect)getImageRectBySearchResult:(vector_d4107ee0)arg1 outSize:(struct CGSize)arg2 angel:(double)arg3;
- (void)dealloc;
- (void)notifyGotScanResult:(id)arg1;
- (id)getStringFromUTF8Bytes:(const char *)arg1 LENGTH:(int)arg2;
- (_Bool)doScanCode:(char *)arg1 outSize:(struct CGSize)arg2 scanRect:(struct CGRect)arg3 scanOffset:(struct CGPoint)arg4 angel:(double)arg5;
- (void)internalProcessSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)internalProcessSampleBuffer_iOS174:(struct opaqueCMSampleBuffer *)arg1;
- (void)willOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (id)initWithDelegate:(id)arg1 CodeType:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

