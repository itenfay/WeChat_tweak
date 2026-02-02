//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSString.h>

@interface NSString (IntConverter)
+ (id)stringFromUInt32:(unsigned int)arg1;
+ (id)stringFromUInt64:(unsigned long long)arg1;
- (unsigned int)uInt32Value;
- (unsigned long long)uInt64Value;
@end

