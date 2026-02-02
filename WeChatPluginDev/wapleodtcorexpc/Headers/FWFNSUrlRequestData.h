//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterStandardTypedData, NSDictionary, NSString;

@interface FWFNSUrlRequestData : NSObject
{
    NSString *_url;
    NSString *_httpMethod;
    FlutterStandardTypedData *_httpBody;
    NSDictionary *_allHttpHeaderFields;
}

+ (id)fromMap:(id)arg1;
+ (id)makeWithUrl:(id)arg1 httpMethod:(id)arg2 httpBody:(id)arg3 allHttpHeaderFields:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *allHttpHeaderFields; // @synthesize allHttpHeaderFields=_allHttpHeaderFields;
@property(retain, nonatomic) FlutterStandardTypedData *httpBody; // @synthesize httpBody=_httpBody;
@property(copy, nonatomic) NSString *httpMethod; // @synthesize httpMethod=_httpMethod;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (id)toMap;

@end

