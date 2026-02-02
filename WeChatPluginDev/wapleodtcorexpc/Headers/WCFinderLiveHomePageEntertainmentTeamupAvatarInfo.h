//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCFinderContact;

@interface WCFinderLiveHomePageEntertainmentTeamupAvatarInfo : NSObject
{
    unsigned long long _type;
    WCFinderContact *_contact;
}

+ (id)infoWithType:(unsigned long long)arg1 contact:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;

@end

