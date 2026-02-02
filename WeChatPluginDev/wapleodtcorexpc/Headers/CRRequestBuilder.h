//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString, NSURL;

@interface CRRequestBuilder : NSObject
{
    _Bool _compressBody;
    NSString *_method;
    NSURL *_URL;
    NSString *_username;
    NSString *_password;
    NSData *_body;
    NSMutableDictionary *_headers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *headers; // @synthesize headers=_headers;
@property(nonatomic) _Bool compressBody; // @synthesize compressBody=_compressBody;
@property(copy, nonatomic) NSData *body; // @synthesize body=_body;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(copy, nonatomic) NSString *method; // @synthesize method=_method;
- (void)setValue:(id)arg1 forHeader:(id)arg2;
- (id)init;

@end

