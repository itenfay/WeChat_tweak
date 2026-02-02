//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveSensitiveDataItem;

@interface MMFinderLiveSensitiveActionItem : NSObject
{
    unsigned long long _actionType;
    MMFinderLiveSensitiveDataItem *_sensitiveItem;
    unsigned long long _actionId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long actionId; // @synthesize actionId=_actionId;
@property(retain, nonatomic) MMFinderLiveSensitiveDataItem *sensitiveItem; // @synthesize sensitiveItem=_sensitiveItem;
@property(nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
- (id)description;

@end

