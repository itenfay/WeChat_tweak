//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WxamImageConvert : NSObject
{
}

+ (id)covertWxAmToPicShuffle:(id)arg1 useWxDecrypt:(_Bool)arg2 scene:(unsigned long long)arg3;
+ (_Bool)decodeWxAmToPic:(id)arg1 wxamPath:(id)arg2 picType:(unsigned int)arg3 scene:(unsigned long long)arg4;
+ (_Bool)decodeWxAmToPic:(id)arg1 wxamPath:(id)arg2 scene:(unsigned long long)arg3;
+ (_Bool)isWxamFormatData:(id)arg1;
+ (_Bool)isWxamFormat:(id)arg1;
+ (_Bool)encodePicToWxAM:(id)arg1 wxamPath:(id)arg2 scene:(unsigned long long)arg3;
+ (id)decodeWxAM:(id)arg1 picType:(unsigned int)arg2 scene:(unsigned long long)arg3;
+ (id)decodeWxAMToJpg:(id)arg1 scene:(unsigned long long)arg2;
+ (id)decodeWxAMToHeif:(id)arg1 scene:(unsigned long long)arg2;
+ (id)encodeToWxAM:(id)arg1 preferQP:(int)arg2 scene:(unsigned long long)arg3 useWxAM3:(_Bool)arg4;
+ (id)encodeToWxAM:(id)arg1 preferQP:(int)arg2 scene:(unsigned long long)arg3;
+ (id)encodeUIImageToWxAM:(id)arg1 preferQP:(int)arg2 scene:(unsigned long long)arg3;

@end

