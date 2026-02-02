//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol TAVSourceSoftEncoderFactory;

@interface MAVExportOptionalParam : NSObject
{
    _Bool _useHevcEncode;
    _Bool _useHDREncode;
    _Bool _useSoftHEVCEncode;
    _Bool _useSoftEncNewThreadsControl;
    _Bool _useHDRToSDR;
    _Bool _keepsProcessInBackground;
    int _vcodec2Preset;
    float _crf;
    int _vbvBufferSize;
    int _bitrateUp;
    int _bitrateDown;
    id <TAVSourceSoftEncoderFactory> _encoderFactory;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool keepsProcessInBackground; // @synthesize keepsProcessInBackground=_keepsProcessInBackground;
@property(retain, nonatomic) id <TAVSourceSoftEncoderFactory> encoderFactory; // @synthesize encoderFactory=_encoderFactory;
@property(nonatomic, getter=isUseHDRToSDR) _Bool useHDRToSDR; // @synthesize useHDRToSDR=_useHDRToSDR;
@property(nonatomic) int bitrateDown; // @synthesize bitrateDown=_bitrateDown;
@property(nonatomic) int bitrateUp; // @synthesize bitrateUp=_bitrateUp;
@property(nonatomic, getter=vbvBufferSize) int vbvBufferSize; // @synthesize vbvBufferSize=_vbvBufferSize;
@property(nonatomic, getter=crf) float crf; // @synthesize crf=_crf;
@property(nonatomic, getter=vcodec2Preset) int vcodec2Preset; // @synthesize vcodec2Preset=_vcodec2Preset;
@property(nonatomic, getter=useSoftEncNewThreadsControl) _Bool useSoftEncNewThreadsControl; // @synthesize useSoftEncNewThreadsControl=_useSoftEncNewThreadsControl;
@property(nonatomic, getter=isUseSoftHEVCEncode) _Bool useSoftHEVCEncode; // @synthesize useSoftHEVCEncode=_useSoftHEVCEncode;
@property(nonatomic, getter=isUseHDREncode) _Bool useHDREncode; // @synthesize useHDREncode=_useHDREncode;
@property(nonatomic, getter=isUseHevcEncode) _Bool useHevcEncode; // @synthesize useHevcEncode=_useHevcEncode;

@end

