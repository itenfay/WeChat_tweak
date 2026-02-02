//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MJVoiceInputScentenceParser : NSObject
{
}

+ (id)expandLeftForCaptionGroups:(id)arg1;
+ (id)expandRightForCaptionItems:(id)arg1 nextTime:(CDStruct_1b6d18a9)arg2;
+ (id)expandLeftForCaptionItems:(id)arg1;
+ (id)expandLeftForCaptionItems:(id)arg1 previousTime:(CDStruct_1b6d18a9)arg2;
+ (CDStruct_e83c9415)expandRightForTimeRange:(CDStruct_e83c9415)arg1 nextStartTime:(CDStruct_1b6d18a9)arg2 expandSeconds:(double)arg3;
+ (CDStruct_e83c9415)expandLeftForTimeRange:(CDStruct_e83c9415)arg1 previousEndTime:(CDStruct_1b6d18a9)arg2 expandSeconds:(double)arg3;
+ (id)parseScentenceTimeRangesWithWordInfos:(id)arg1 wholeText:(id)arg2 splittingType:(unsigned long long)arg3;
+ (id)changeCaptionItemsTimeRangeToRelative:(id)arg1 groupStartTime:(CDStruct_1b6d18a9)arg2;
+ (id)createCaptionGroupsFromMainCaptionItems:(id)arg1 mainLanguage:(id)arg2;
+ (id)parseLongSpeechRecognitionScentencesFromResponse:(id)arg1;
+ (id)parseFullSpeechRecognitionScentencesFromResponse:(id)arg1;
+ (id)parseSpeechRecognitionScentencesFromResponse:(id)arg1;

@end

