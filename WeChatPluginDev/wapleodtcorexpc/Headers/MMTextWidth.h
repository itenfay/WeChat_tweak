//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMTextWidth : NSObject
{
}

+ (_Bool)isFontValid:(struct __CTFont *)arg1;
+ (struct CGSize)sizeWithAttributes:(id)arg1 string:(id)arg2;
+ (struct CGSize)boundingRectWithSize:(struct CGSize)arg1 attributes:(id)arg2 string:(id)arg3;
+ (unsigned short *)tlsBuffer;
+ (long long)stringHashLimit;
+ (void)setChecksumCallback:(CDUnknownFunctionPointerType)arg1;
+ (void)setEnableEmojiGroupCandidate:(_Bool)arg1;
+ (void)clear;
+ (void)reset;
+ (void)fontDidChanged:(id)arg1;
+ (void)localeDidChanged:(id)arg1;
+ (void)didEnterBackground:(id)arg1;
+ (void)willEnterForeground:(id)arg1;
+ (void)setup;
+ (void)update;
+ (_Bool)isAvailable;
+ (_Bool)isReady;
+ (_Bool)isEnable;
+ (void)setTextMeasureCallback:(CDUnknownFunctionPointerType)arg1;
+ (void)setEnable:(_Bool)arg1;
+ (_Bool)isEnableFastPingFang;
+ (void)setEnableFastPingFang:(_Bool)arg1;

@end

