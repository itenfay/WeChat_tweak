//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WapPayParameter : NSObject
{
    NSString *_url;
    NSString *_bundleID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;

@end

