//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UITextChecker;

@interface FlutterSpellCheckPlugin : NSObject
{
    UITextChecker *_textChecker;
}

@property(retain, nonatomic) UITextChecker *textChecker; // @synthesize textChecker=_textChecker;
- (void)dealloc;
- (id)findSpellCheckSuggestionsForText:(id)arg1 inLanguage:(id)arg2 startingOffset:(long long)arg3;
- (id)findAllSpellCheckSuggestionsForText:(id)arg1 inLanguage:(id)arg2;
- (void)handleMethodCall:(id)arg1 result:(CDUnknownBlockType)arg2;

@end

