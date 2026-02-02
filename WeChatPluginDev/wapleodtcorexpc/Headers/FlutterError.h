//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FlutterError : NSObject
{
    NSString *_code;
    NSString *_message;
    id _details;
}

+ (id)errorWithCode:(id)arg1 message:(id)arg2 details:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) id details; // @synthesize details=_details;
@property(readonly, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) NSString *code; // @synthesize code=_code;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCode:(id)arg1 message:(id)arg2 details:(id)arg3;

@end

