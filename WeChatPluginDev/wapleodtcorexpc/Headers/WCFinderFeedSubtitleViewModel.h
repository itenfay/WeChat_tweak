//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableArray, NSSet, NSString;

@interface WCFinderFeedSubtitleViewModel : NSObject
{
    NSString *_tid;
    NSArray *_languageArray;
    NSSet *_displayLanguageSet;
    unsigned long long _subtitleId;
    NSData *_lastBuffer;
    unsigned long long _prefetchTimeInterval;
    NSMutableArray *_timeSectionArray;
    NSMutableArray *_requestingSectionArray;
    NSMutableArray *_sentenceArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *sentenceArray; // @synthesize sentenceArray=_sentenceArray;
@property(retain, nonatomic) NSMutableArray *requestingSectionArray; // @synthesize requestingSectionArray=_requestingSectionArray;
@property(retain, nonatomic) NSMutableArray *timeSectionArray; // @synthesize timeSectionArray=_timeSectionArray;
@property(nonatomic) unsigned long long prefetchTimeInterval; // @synthesize prefetchTimeInterval=_prefetchTimeInterval;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) unsigned long long subtitleId; // @synthesize subtitleId=_subtitleId;
@property(retain, nonatomic) NSSet *displayLanguageSet; // @synthesize displayLanguageSet=_displayLanguageSet;
@property(retain, nonatomic) NSArray *languageArray; // @synthesize languageArray=_languageArray;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
- (void)onFinderFeedSubtitleDisplayLanguageChanged:(id)arg1;
- (_Bool)isRequestingSubtitleAtTime:(unsigned long long)arg1;
- (struct _NSRange)indexOfTime:(unsigned long long)arg1 left:(long long)arg2 right:(long long)arg3;
- (void)addSentence:(id)arg1;
- (void)requestSubtitle:(unsigned long long)arg1 commentScene:(int)arg2;
- (struct _NSRange)timeLocationAtTimeSectionArray:(unsigned long long)arg1 left:(long long)arg2 right:(long long)arg3;
- (_Bool)updateRange:(id)arg1;
- (void)requestSubtitleIfNeeded:(unsigned long long)arg1 commentScene:(int)arg2;
- (id)getNextSentenceAtTime:(unsigned long long)arg1;
- (id)getSentenceAtTime:(unsigned long long)arg1;
- (void)addSubtitle:(id)arg1;
- (id)initWithTid:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

