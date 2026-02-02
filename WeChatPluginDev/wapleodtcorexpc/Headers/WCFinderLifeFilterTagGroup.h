//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCFinderLifeFilterTagGroup : NSObject
{
    NSString *_groupName;
    NSArray *_subTags;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *subTags; // @synthesize subTags=_subTags;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;

@end

