//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL;

@interface TPPlayerSlice : NSObject
{
    NSURL *_url;
    NSDictionary *_httpHeader;
    long long _durationUs;
}

+ (id)build:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long durationUs; // @synthesize durationUs=_durationUs;
@property(retain, nonatomic) NSDictionary *httpHeader; // @synthesize httpHeader=_httpHeader;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

