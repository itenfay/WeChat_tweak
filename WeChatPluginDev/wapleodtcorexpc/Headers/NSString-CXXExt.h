//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSString.h>

@interface NSString (CXXExt)
+ (id)sc_stringWithSTDString:(const void *)arg1;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>>)sc_stdString;
@end

