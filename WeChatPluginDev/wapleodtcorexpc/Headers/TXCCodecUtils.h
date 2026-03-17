//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TXCCodecUtils : NSObject
{
}

+ (long long)h265NalTypeFromValue:(const char *)arg1;
+ (long long)h264NalTypeFromValue:(const char *)arg1;
+ (const char *)searchNalStartFrom:(const char *)arg1 length:(long long)arg2 startCodeLen:(long long *)arg3;
+ (id)annexBNalusFrom:(const char *)arg1 length:(unsigned long long)arg2;
+ (struct opaqueCMSampleBuffer *)avccBufferFromEncodedNals:(id)arg1 format:(struct opaqueCMFormatDescription *)arg2 pts:(unsigned long long)arg3;
+ (_Bool)isParameterSetsComplete:(id)arg1 forHevc:(_Bool)arg2;
+ (id)parameterSetsFromNalus:(id)arg1 forHevc:(_Bool)arg2;
+ (id)parameterSetDataFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 isAnnexB:(_Bool)arg2 isHevc:(_Bool)arg3;
+ (id)encodedDataFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 isIFrame:(_Bool)arg2 isAnnexB:(_Bool)arg3 isHevc:(_Bool)arg4;
+ (_Bool)isIFrame:(struct opaqueCMSampleBuffer *)arg1;

@end

