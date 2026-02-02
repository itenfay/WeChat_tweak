//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface CameraScanGoodsItemPerformanceInfo : NSObject
{
    unsigned long long _detectDurantion;
    unsigned long long _imageCropDurantion;
    unsigned long long _compressDurantion;
    unsigned long long _encodeSize;
    unsigned long long _encodeType;
    unsigned long long _queueDurantion;
    unsigned long long _uploadDurantion;
    unsigned long long _exchangeDurantion;
    unsigned long long _frameIndex;
    unsigned long long _stableFrameIndex;
}

@property(nonatomic) unsigned long long stableFrameIndex; // @synthesize stableFrameIndex=_stableFrameIndex;
@property(nonatomic) unsigned long long frameIndex; // @synthesize frameIndex=_frameIndex;
@property(nonatomic) unsigned long long exchangeDurantion; // @synthesize exchangeDurantion=_exchangeDurantion;
@property(nonatomic) unsigned long long uploadDurantion; // @synthesize uploadDurantion=_uploadDurantion;
@property(nonatomic) unsigned long long queueDurantion; // @synthesize queueDurantion=_queueDurantion;
@property(nonatomic) unsigned long long encodeType; // @synthesize encodeType=_encodeType;
@property(nonatomic) unsigned long long encodeSize; // @synthesize encodeSize=_encodeSize;
@property(nonatomic) unsigned long long compressDurantion; // @synthesize compressDurantion=_compressDurantion;
@property(nonatomic) unsigned long long imageCropDurantion; // @synthesize imageCropDurantion=_imageCropDurantion;
@property(nonatomic) unsigned long long detectDurantion; // @synthesize detectDurantion=_detectDurantion;

@end

