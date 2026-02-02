//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSString.h>

@interface NSString (GTMNSStringHTMLAdditions)
- (id)gtm_stringByUnescapingFromHTML;
- (id)gtm_stringByEscapingForXML;
- (id)gtm_stringByEscapingForHTML;
- (id)gtm_stringByEscapingHTMLUsingTable:(CDStruct_6a59ab51 *)arg1 ofSize:(unsigned long long)arg2 escapingUnicode:(_Bool)arg3;
@end

