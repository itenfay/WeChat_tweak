//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableString;

@interface RTEContentStorage
{
    NSMutableString *_textContent;
    NSMutableArray *_attributes;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) NSMutableString *textContent; // @synthesize textContent=_textContent;
- (_Bool)isAttribute:(id)arg1 extendableAtIndex:(unsigned long long)arg2 isPreNode:(_Bool)arg3;
- (id)buildAttributedStringForRange:(struct _NSRange)arg1;
- (void)insertText:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)appendContentAndClear:(id)arg1;
- (void)insertContent:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)copyContentStorageAtRange:(struct _NSRange)arg1;
- (void)setAttribute:(id)arg1 atRange:(struct _NSRange)arg2;
- (void)deleteCententAtRange:(struct _NSRange)arg1;
- (unsigned long long)minimumIdenticalAttributeIntervalLengthSinceIndex:(unsigned long long)arg1;
- (void)enumerateAttribute:(unsigned int)arg1 inRange:(struct _NSRange)arg2 isBackward:(_Bool)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (_Bool)findAttributeInList:(unsigned int)arg1 inRange:(struct _NSRange)arg2 withMatcher:(CDUnknownBlockType)arg3;
- (id)getAttributeOfType:(unsigned int)arg1 atLocation:(unsigned long long)arg2;
- (id)getAttributeListOfType:(unsigned int)arg1;
- (struct _NSRange)rangeOfAttribute:(id)arg1;
- (void)updateCacheToIndex:(unsigned long long)arg1;
- (_Bool)checkRangeValid:(struct _NSRange)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)length;
- (id)description;
- (id)initWithText:(id)arg1 attributes:(id)arg2;

@end

