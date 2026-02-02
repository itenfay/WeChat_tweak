//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveNewCustomGiftItemResourceURL : NSObject
{
    NSString *_url;
    NSString *_md5;
}

+ (_Bool)isResourceURLPBValid:(id)arg1 business:(id)arg2;
+ (id)transferFromResourceUrlPB:(id)arg1 business:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

