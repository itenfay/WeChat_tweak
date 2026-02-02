//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSData, NSString;

@interface ScanBookMgr
{
    unsigned int _scanBookId;
    unsigned int _sessionId;
    unsigned int _opCode;
    NSData *_dataToSend;
    unsigned int _totalLen;
    unsigned int _offset;
    unsigned int _lastPackLen;
    int _imageType;
    int _uploadAction;
    _Bool _isUploading;
    MMTimer *_uploadTimer;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)saveProductItem:(id)arg1;
- (id)getLocalProductItemById:(id)arg1;
- (void)checkUpload;
- (void)stop;
- (void)start;
- (id)getProductItemById:(id)arg1 Scence:(unsigned int)arg2 QRCodeUrl:(id)arg3;
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

