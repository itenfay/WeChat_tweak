//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSObject;
@protocol MMQRCodeScannerDelegate;

@interface MMQRCodeScanner
{
    int m_inputWidth;
    int m_inputHeight;
    char *m_scanBuffer;
    struct QBar *_qbar;
    _Bool _active;
    NSObject<MMQRCodeScannerDelegate> *_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSObject<MMQRCodeScannerDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool active; // @synthesize active=_active;
- (void)printArray:(vector_d4107ee0)arg1;
- (id)getStringFromUTF8Bytes:(const char *)arg1 LENGTH:(int)arg2;
- (void)scanVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)stopQRScan;
- (void)startQRScan;
- (void)setOutputWidth:(float)arg1 andHeight:(float)arg2;
- (void)dealloc;
- (id)init;

@end

