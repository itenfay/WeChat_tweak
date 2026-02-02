//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMFinderVideoUtil : NSObject
{
}

+ (const char *)searchNalStartFrom:(const char *)arg1 length:(long long)arg2 startCodeLen:(long long *)arg3;
+ (id)getAVCCFrameFromAnnexB:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)annexBNalusFrom:(const char *)arg1 length:(unsigned long long)arg2;
+ (_Bool)isParameterSetsComplete:(id)arg1 forHevc:(_Bool)arg2;
+ (long long)h264NalTypeFromValue:(const char *)arg1;
+ (id)parameterSetsFromNalus:(id)arg1 forHevc:(_Bool)arg2;
+ (CDStruct_1ef3fb1f)calculateDiemnsDividedByTwo:(int)arg1 andHeight:(int)arg2;

@end

