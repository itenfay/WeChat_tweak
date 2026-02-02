//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSError, NSMutableArray, NSMutableData;

@interface KSJSONCodec : NSObject
{
    _Bool _prettyPrint;
    _Bool _sorted;
    _Bool _ignoreNullsInArrays;
    _Bool _ignoreNullsInObjects;
    id _topLevelContainer;
    id _currentContainer;
    NSMutableArray *_containerStack;
    struct KSJSONDecodeCallbacks *_callbacks;
    NSMutableData *_serializedData;
    NSError *_error;
}

+ (id)decode:(id)arg1 options:(int)arg2 error:(id *)arg3;
+ (id)encode:(id)arg1 options:(int)arg2 error:(id *)arg3;
+ (id)codecWithEncodeOptions:(int)arg1 decodeOptions:(int)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool ignoreNullsInObjects; // @synthesize ignoreNullsInObjects=_ignoreNullsInObjects;
@property(nonatomic) _Bool ignoreNullsInArrays; // @synthesize ignoreNullsInArrays=_ignoreNullsInArrays;
@property(nonatomic) _Bool sorted; // @synthesize sorted=_sorted;
@property(nonatomic) _Bool prettyPrint; // @synthesize prettyPrint=_prettyPrint;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSMutableData *serializedData; // @synthesize serializedData=_serializedData;
@property(nonatomic) struct KSJSONDecodeCallbacks *callbacks; // @synthesize callbacks=_callbacks;
@property(retain, nonatomic) NSMutableArray *containerStack; // @synthesize containerStack=_containerStack;
@property(nonatomic) id currentContainer; // @synthesize currentContainer=_currentContainer;
@property(retain, nonatomic) id topLevelContainer; // @synthesize topLevelContainer=_topLevelContainer;
- (void)dealloc;
- (id)initWithEncodeOptions:(int)arg1 decodeOptions:(int)arg2;

@end

