//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FlutterMethodCall : NSObject
{
    NSString *_method;
    id _arguments;
}

+ (id)methodCallWithMethodName:(id)arg1 arguments:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) id arguments; // @synthesize arguments=_arguments;
@property(readonly, nonatomic) NSString *method; // @synthesize method=_method;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithMethodName:(id)arg1 arguments:(id)arg2;

@end

