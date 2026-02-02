//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, TSKMidiParam, TSKModelParam, TSKMultiParam;

@interface TSKScorerConfig : NSObject
{
    _Bool _seekAsync;
    _Bool _enablePitch;
    TSKMidiParam *_midiParam;
    TSKMultiParam *_multiParam;
    NSArray *_sectionInfoArr;
    NSString *_roleName;
    TSKModelParam *_modelParam;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TSKModelParam *modelParam; // @synthesize modelParam=_modelParam;
@property(retain, nonatomic) NSString *roleName; // @synthesize roleName=_roleName;
@property(retain, nonatomic) NSArray *sectionInfoArr; // @synthesize sectionInfoArr=_sectionInfoArr;
@property(retain, nonatomic) TSKMultiParam *multiParam; // @synthesize multiParam=_multiParam;
@property(retain, nonatomic) TSKMidiParam *midiParam; // @synthesize midiParam=_midiParam;
@property(nonatomic) _Bool enablePitch; // @synthesize enablePitch=_enablePitch;
@property(nonatomic) _Bool seekAsync; // @synthesize seekAsync=_seekAsync;
- (id)init;

@end

