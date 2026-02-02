//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface YYTextBackedString : NSObject
{
    NSString *_string;
}

+ (id)stringWithString:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *string; // @synthesize string=_string;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

