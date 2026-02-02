//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface Sentence : NSObject
{
    long long _since;
    long long _startTime;
    long long _duration;
    NSMutableArray *_charactersArray;
    NSString *_text;
    NSMutableDictionary *_textWithDic;
    NSMutableArray *_segmentsArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *segmentsArray; // @synthesize segmentsArray=_segmentsArray;
@property(retain, nonatomic) NSMutableDictionary *textWidthDic; // @synthesize textWidthDic=_textWithDic;
@property(nonatomic) long long since; // @synthesize since=_since;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSMutableArray *charactersArray; // @synthesize charactersArray=_charactersArray;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

