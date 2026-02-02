//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString;

@interface MMFinderLiveKTVSongResourceParseResult : NSObject
{
    NSArray *_sentenceList;
    NSArray *_sentenceTimeList;
    NSData *_noteData;
    NSString *_songPath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *songPath; // @synthesize songPath=_songPath;
@property(retain, nonatomic) NSData *noteData; // @synthesize noteData=_noteData;
@property(retain, nonatomic) NSArray *sentenceTimeList; // @synthesize sentenceTimeList=_sentenceTimeList;
@property(retain, nonatomic) NSArray *sentenceList; // @synthesize sentenceList=_sentenceList;

@end

