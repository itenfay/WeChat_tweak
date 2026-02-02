//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCFinderContact;

@interface WCFinderAdContactCache : NSObject
{
    WCFinderContact *_contact;
    unsigned long long _refreshTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;

@end

