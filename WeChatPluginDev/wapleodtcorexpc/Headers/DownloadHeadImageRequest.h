//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface DownloadHeadImageRequest : NSObject
{
    unsigned char category;
    _Bool isUseWxpc;
    unsigned int requestCount;
    NSString *userName;
    NSString *url;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isUseWxpc; // @synthesize isUseWxpc;
@property(nonatomic) unsigned char category; // @synthesize category;
@property(nonatomic) unsigned int requestCount; // @synthesize requestCount;
@property(retain, nonatomic) NSString *url; // @synthesize url;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;
- (id)init;

@end

