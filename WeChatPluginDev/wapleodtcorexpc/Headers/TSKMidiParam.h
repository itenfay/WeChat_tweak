//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSData;

@interface TSKMidiParam : NSObject
{
    NSData *_noteData;
    NSArray *_sentenceArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *sentenceArray; // @synthesize sentenceArray=_sentenceArray;
@property(retain, nonatomic) NSData *noteData; // @synthesize noteData=_noteData;

@end

