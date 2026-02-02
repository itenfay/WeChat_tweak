//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface VoiceRecognitionResult : NSObject
{
    NSArray *_texts;
    NSArray *_voiceIdSet;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithTexts:(id)arg1 voiceIdSet:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *voiceIdSet; // @synthesize voiceIdSet=_voiceIdSet;
@property(copy, nonatomic) NSArray *texts; // @synthesize texts=_texts;
- (id)toList;

@end

