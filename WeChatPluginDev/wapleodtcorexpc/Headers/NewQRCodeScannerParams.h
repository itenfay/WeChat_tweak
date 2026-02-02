//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CameraScannerViewWrapper;

@interface NewQRCodeScannerParams : NSObject
{
    _Bool _isUseSmallCropArea;
    _Bool _isSupportMultiCodes;
    _Bool _shouldSetBlacklistDelayedFrames;
    int _codeType;
    CameraScannerViewWrapper *_wrapper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CameraScannerViewWrapper *wrapper; // @synthesize wrapper=_wrapper;
@property(nonatomic) _Bool shouldSetBlacklistDelayedFrames; // @synthesize shouldSetBlacklistDelayedFrames=_shouldSetBlacklistDelayedFrames;
@property(nonatomic) _Bool isSupportMultiCodes; // @synthesize isSupportMultiCodes=_isSupportMultiCodes;
@property(nonatomic) _Bool isUseSmallCropArea; // @synthesize isUseSmallCropArea=_isUseSmallCropArea;
@property(nonatomic) int codeType; // @synthesize codeType=_codeType;
- (id)initWithCodeType:(int)arg1 isUseSmallCropArea:(_Bool)arg2 shouldSetBlacklistDelayedFrames:(_Bool)arg3 wrapper:(id)arg4;
- (id)initWithCodeType:(int)arg1 isUseSmallCropArea:(_Bool)arg2;
- (id)initWithCodeType:(int)arg1;

@end

