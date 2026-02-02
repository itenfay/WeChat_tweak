//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface OfflinePageA8KeyData : NSObject
{
    NSString *_originalUrl;
    NSString *_a8KeyFullUrl;
    NSArray *_a8KeyHeaders;
    id _webViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id webViewController; // @synthesize webViewController=_webViewController;
@property(retain, nonatomic) NSArray *a8KeyHeaders; // @synthesize a8KeyHeaders=_a8KeyHeaders;
@property(retain, nonatomic) NSString *a8KeyFullUrl; // @synthesize a8KeyFullUrl=_a8KeyFullUrl;
@property(retain, nonatomic) NSString *originalUrl; // @synthesize originalUrl=_originalUrl;

@end

