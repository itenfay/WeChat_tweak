//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WAFileSpaceStatusAppItem;

@interface WAFileStorageStatusSortAppItem : NSObject
{
    NSString *_appID;
    WAFileSpaceStatusAppItem *_appItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAFileSpaceStatusAppItem *appItem; // @synthesize appItem=_appItem;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (long long)compare:(id)arg1;
- (id)description;

@end

