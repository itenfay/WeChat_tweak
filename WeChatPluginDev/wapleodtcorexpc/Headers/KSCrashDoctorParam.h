//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface KSCrashDoctorParam : NSObject
{
    _Bool _isInstance;
    NSString *_className;
    NSString *_previousClassName;
    unsigned long long _address;
    NSString *_value;
    NSString *_type;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(nonatomic) unsigned long long address; // @synthesize address=_address;
@property(nonatomic) _Bool isInstance; // @synthesize isInstance=_isInstance;
@property(retain, nonatomic) NSString *previousClassName; // @synthesize previousClassName=_previousClassName;
@property(retain, nonatomic) NSString *className; // @synthesize className=_className;

@end

