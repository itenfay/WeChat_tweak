//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC9WeAppCore6Semver : NSObject
{
    MISSING_TYPE *originalStr;
    MISSING_TYPE *isValid;
    MISSING_TYPE *arrVersion;
    MISSING_TYPE *$__lazy_storage_$_major;
    MISSING_TYPE *$__lazy_storage_$_minor;
    MISSING_TYPE *$__lazy_storage_$_patch;
}

- (void).cxx_destruct;
- (id)init;
- (_Bool)isSatisfiedBy:(id)arg1;
- (id)initWithVersionStr:(id)arg1;
@property(nonatomic) _Bool isValid; // @synthesize isValid;
@property(nonatomic, readonly) NSString *originalStr;

@end

