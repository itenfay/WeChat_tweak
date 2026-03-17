//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface RKLBlockEnumerationHelper : NSObject
{
    struct {
        struct __CFString *regexString;
        unsigned long long regexHash;
        unsigned int options;
        struct uregex *icu_regex;
        long long captureCount;
        struct __CFString *setToString;
        unsigned long long setToHash;
        long long setToLength;
        unsigned int setToIsImmutable:1;
        unsigned int setToNeedsConversion:1;
        unsigned short *setToUniChar;
        struct _NSRange setToRange;
        struct _NSRange lastFindRange;
        struct _NSRange lastMatchRange;
        CDStruct_183601bc *buffer;
    } cachedRegex;
    struct {
        struct __CFString *string;
        unsigned long long hash;
        long long length;
        unsigned short *uniChar;
    } buffer;
    void *scratchBuffer[5];
    unsigned int needToFreeBufferUniChar:1;
}

- (void)dealloc;
- (id)initWithRegex:(id)arg1 options:(unsigned int)arg2 string:(id)arg3 range:(struct _NSRange)arg4 error:(id *)arg5;

@end

