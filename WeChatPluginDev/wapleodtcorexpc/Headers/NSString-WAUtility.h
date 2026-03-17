//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSString.h>

@interface NSString (WAUtility)
- (id)validJSONString;
- (id)SHA1;
- (id)MD5;
- (id)wa_formatChinaPhoneString:(id)arg1;
- (_Bool)containsRegex:(id)arg1;
- (_Bool)containsAppStoreLinkString;
- (id)scheme;
- (id)stringByTruncatingToWidth:(double)arg1 withFont:(id)arg2;
- (id)stringByTruncatingAtString:(id)arg1 toWidth:(double)arg2 withFont:(id)arg3;
- (id)stringByOmitPrefixAndSuffix:(id)arg1;
- (id)stringByOmitSuffix:(id)arg1;
- (id)stringByReplacingJavaScriptUnsupportString:(_Bool)arg1;
- (id)stringByReplacingJavaScriptUnsupportString;
- (id)stringByOmitPrefix:(id)arg1;
- (unsigned long long)characterLengthOfComposedCharacter;
- (id)stringWithMaxLength:(unsigned long long)arg1;
@end

