//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSString.h>

@interface NSString (SUExt)
+ (id)stringWithStdString:(const void *)arg1;
- (_Bool)equalsIgnoreCase:(id)arg1;
- (const char *)utf8CString;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>>)utf8StdString;
- (unsigned int)u32Value;
@end

