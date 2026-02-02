//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class Lyric;

@interface QrcLyricParser : NSObject
{
    Lyric *_qrcLyric;
    CDUnknownBlockType _sentenceFilterBlock;
}

+ (_Bool)hasValidSentencesWithQrcFilePath:(id)arg1;
+ (id)getSentencesWithQrcFilePath:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType sentenceFilterBlock; // @synthesize sentenceFilterBlock=_sentenceFilterBlock;
@property(retain, nonatomic) Lyric *qrcLyric; // @synthesize qrcLyric=_qrcLyric;
- (_Bool)_isDigitString:(id)arg1;
- (void)fillEmptySegmentsIfNeed;
- (void)splitBySpaceCharacter;
- (void)parseLineToSentenceFromQQMusic:(id)arg1;
- (void)parseLineToSentence:(id)arg1;
- (void)parseSentence:(id)arg1;
- (int)lengthOfNewlineStr:(id)arg1;
- (id)newlineStr:(id)arg1;
- (void)parseLyricContent:(id)arg1;
- (void)loadStr:(id)arg1 isTolerant:(_Bool)arg2 error:(id *)arg3;
- (void)loadStr:(id)arg1 error:(id *)arg2;
- (void)loadStr:(id)arg1;
- (void)loadFile:(id)arg1 isTolerant:(_Bool)arg2 error:(id *)arg3;
- (void)loadFile:(id)arg1 error:(id *)arg2;
- (void)loadFile:(id)arg1;

@end

