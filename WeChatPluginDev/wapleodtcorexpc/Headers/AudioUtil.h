//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface AudioUtil : NSObject
{
}

+ (_Bool)useAudioUnit;
+ (void)reportIDKeyWithStart:(int)arg1 allCost:(unsigned long long)arg2;
+ (id)getReportJson:(id)arg1;
+ (void)reportStartRecordCost:(id)arg1;
+ (unsigned int)calcSilkVoiceTime:(id)arg1;
+ (unsigned int)calcVoiceTime:(unsigned int)arg1 VoiceFormat:(unsigned int)arg2;

@end

