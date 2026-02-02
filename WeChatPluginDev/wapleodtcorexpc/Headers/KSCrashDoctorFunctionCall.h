//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface KSCrashDoctorFunctionCall : NSObject
{
    NSString *_name;
    NSArray *_params;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)descriptionWithParamCount:(int)arg1;
- (id)descriptionForObjCCall;

@end

