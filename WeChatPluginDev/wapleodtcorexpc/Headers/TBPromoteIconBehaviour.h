//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TBPromoteIconBehaviour : NSObject
{
    NSString *_promoteID;
    unsigned long long _showCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long showCount; // @synthesize showCount=_showCount;
@property(copy, nonatomic) NSString *promoteID; // @synthesize promoteID=_promoteID;
- (id)descriptionDictionary;
- (id)description;

@end

