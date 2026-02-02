//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface Result : NSObject
{
    _Bool _result;
    NSDictionary *_params;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(nonatomic) _Bool result; // @synthesize result=_result;
- (id)initWithResult:(_Bool)arg1 params:(id)arg2;

@end

