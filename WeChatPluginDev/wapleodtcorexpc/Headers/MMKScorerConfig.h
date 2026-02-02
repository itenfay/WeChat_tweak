//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSData;

@interface MMKScorerConfig : NSObject
{
    NSData *_noteData;
    NSArray *_sentenceTimeArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *sentenceTimeArray; // @synthesize sentenceTimeArray=_sentenceTimeArray;
@property(retain, nonatomic) NSData *noteData; // @synthesize noteData=_noteData;

@end

