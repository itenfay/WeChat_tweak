//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface FlutterSpellCheckResult : NSObject
{
    NSArray *_suggestions;
    struct _NSRange _misspelledRange;
}

@property(readonly, nonatomic) struct _NSRange misspelledRange; // @synthesize misspelledRange=_misspelledRange;
@property(readonly, copy, nonatomic) NSArray *suggestions; // @synthesize suggestions=_suggestions;
- (void)dealloc;
- (id)toDictionary;
- (id)initWithMisspelledRange:(struct _NSRange)arg1 suggestions:(id)arg2;

@end

