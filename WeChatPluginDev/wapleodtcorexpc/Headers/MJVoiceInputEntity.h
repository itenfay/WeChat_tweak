//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJVoiceInputRecognizer, NSArray, NSString;

@interface MJVoiceInputEntity : NSObject
{
    _Bool _isCancelled;
    unsigned int _captionsIndex;
    NSString *_identifier;
    MJVoiceInputRecognizer *_recognizer;
    NSArray *_captions;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int captionsIndex; // @synthesize captionsIndex=_captionsIndex;
@property(retain, nonatomic) NSArray *captions; // @synthesize captions=_captions;
@property(nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(readonly, nonatomic) MJVoiceInputRecognizer *recognizer; // @synthesize recognizer=_recognizer;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)setCaptions:(id)arg1 withIndex:(unsigned int)arg2;
@property(readonly, nonatomic) unsigned long long state;
- (id)initWithIdentifier:(id)arg1 recognizer:(id)arg2;

@end

