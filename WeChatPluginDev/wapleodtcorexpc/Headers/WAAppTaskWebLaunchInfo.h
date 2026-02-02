//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAAppTaskWebLaunchInfo : NSObject
{
    NSString *_referrerAppID;
    NSString *_url;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *referrerAppID; // @synthesize referrerAppID=_referrerAppID;
- (id)description;

@end

