//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCFinderChangeSet;

@interface WCFinderSectionChanges : NSObject
{
    long long _type;
    long long _section;
    WCFinderChangeSet *_changes;
}

+ (id)changeWithSection:(long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderChangeSet *changes; // @synthesize changes=_changes;
@property(nonatomic) long long section; // @synthesize section=_section;
@property(nonatomic) long long type; // @synthesize type=_type;

@end

