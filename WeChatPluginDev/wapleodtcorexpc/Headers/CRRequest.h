//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString, NSURL;

@interface CRRequest : NSObject
{
    NSString *_method;
    NSURL *_URL;
    NSDictionary *_headers;
    NSData *_body;
}

+ (id)requestWithBuilderBlock:(CDUnknownBlockType)arg1;
+ (id)requestWithBuilder:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSData *body; // @synthesize body=_body;
@property(copy, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(copy, nonatomic) NSString *method; // @synthesize method=_method;
- (id)initWithBuilder:(id)arg1;

@end

