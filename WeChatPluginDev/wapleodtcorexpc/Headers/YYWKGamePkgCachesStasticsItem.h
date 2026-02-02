//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface YYWKGamePkgCachesStasticsItem : NSObject
{
    NSString *_mainUrl;
    NSString *_resourceUrl;
    NSData *_data;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *resourceUrl; // @synthesize resourceUrl=_resourceUrl;
@property(retain, nonatomic) NSString *mainUrl; // @synthesize mainUrl=_mainUrl;
- (id)initWithResourceUrl:(id)arg1 mainUrl:(id)arg2 data:(id)arg3;

@end

