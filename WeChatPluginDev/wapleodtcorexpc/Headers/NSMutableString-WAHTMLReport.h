//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSMutableString.h>

@interface NSMutableString (WAHTMLReport)
- (_Bool)isHasAppend;
- (void)setIsHasAppend:(_Bool)arg1;
- (void)appendHTMLReportInteger:(long long)arg1;
- (void)appendHTMLReportString:(id)arg1;
- (void)safeAppendString:(id)arg1;
- (long long)replaceOccurrencesOfRegex:(id)arg1 options:(unsigned int)arg2 inRange:(struct _NSRange)arg3 error:(id *)arg4 enumerationOptions:(unsigned long long)arg5 usingBlock:(CDUnknownBlockType)arg6;
- (long long)replaceOccurrencesOfRegex:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (long long)replaceOccurrencesOfRegex:(id)arg1 withString:(id)arg2 options:(unsigned int)arg3 range:(struct _NSRange)arg4 error:(id *)arg5;
- (long long)replaceOccurrencesOfRegex:(id)arg1 withString:(id)arg2 range:(struct _NSRange)arg3;
- (long long)replaceOccurrencesOfRegex:(id)arg1 withString:(id)arg2;
@end

