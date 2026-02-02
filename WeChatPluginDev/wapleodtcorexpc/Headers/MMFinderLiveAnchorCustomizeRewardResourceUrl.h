//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveAnchorCustomizeRewardResourceUrl : NSObject
{
    NSString *_url;
    NSString *_md5Hash;
}

+ (_Bool)isResourceUrlEmpty:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *md5Hash; // @synthesize md5Hash=_md5Hash;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (id)initWithUrl:(id)arg1 md5:(id)arg2;
- (id)initWithPBResourceUrl:(id)arg1;

@end

