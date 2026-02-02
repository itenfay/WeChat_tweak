//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WCCSSStyleExecuter : NSObject
{
    NSMutableDictionary *_dicStyleRule;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicStyleRule; // @synthesize dicStyleRule=_dicStyleRule;
- (void)applyRuleWithTarget:(id)arg1 value:(id)arg2 PropertySetter:(CDUnknownBlockType)arg3;
- (void)executeWithTarget:(id)arg1 cssStyles:(id)arg2;
- (id)init;

@end

