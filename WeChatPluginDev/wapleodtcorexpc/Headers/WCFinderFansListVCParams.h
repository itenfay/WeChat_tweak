//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCFinderContact;

@interface WCFinderFansListVCParams : NSObject
{
    WCFinderContact *_contact;
    unsigned long long _totalFansCount;
}

+ (id)paramsWithContact:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long totalFansCount; // @synthesize totalFansCount=_totalFansCount;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;

@end

