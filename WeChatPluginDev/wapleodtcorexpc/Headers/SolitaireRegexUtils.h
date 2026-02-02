//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSRecursiveLock;

@interface SolitaireRegexUtils : NSObject
{
    NSRecursiveLock *_lock;
    NSRecursiveLock *_regexLock;
    NSMutableDictionary *_dicRegex;
}

+ (id)shareInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicRegex; // @synthesize dicRegex=_dicRegex;
@property(retain, nonatomic) NSRecursiveLock *regexLock; // @synthesize regexLock=_regexLock;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
- (id)replaceContent:(id)arg1 OccurrencesOfRegex:(id)arg2 withString:(id)arg3;
- (struct _NSRange)rangeMatchContent:(id)arg1 Regex:(id)arg2;
- (id)firstMatchContent:(id)arg1 Regex:(id)arg2;
- (_Bool)isMatchContent:(id)arg1 Regex:(id)arg2;
- (id)getRegularExpressionWithRegex:(id)arg1;
- (id)getRegexLock;
- (id)init;

@end

