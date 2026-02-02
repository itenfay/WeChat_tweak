//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDictionary, NSString;

@interface _TtC6WeChat7GCEntry : NSObject
{
    MISSING_TYPE *urlStr;
    MISSING_TYPE *MIMEType;
    MISSING_TYPE *expectedContentLength;
    MISSING_TYPE *statusCode;
    MISSING_TYPE *textEncodingName;
    MISSING_TYPE *dataStr;
    MISSING_TYPE *headerFileds;
}

- (void).cxx_destruct;
@property(nonatomic, copy) NSDictionary *headerFileds;
@property(nonatomic, copy) NSString *dataStr;
@property(nonatomic, copy) NSString *textEncodingName;
@property(nonatomic) long long statusCode; // @synthesize statusCode;
@property(nonatomic) long long expectedContentLength; // @synthesize expectedContentLength;
@property(nonatomic, copy) NSString *MIMEType;
@property(nonatomic, copy) NSString *urlStr;
- (id)init;

@end

