//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCFinderDataItem;

@interface MMFinderLiveInfoRegisteredItem : NSObject
{
    WCFinderDataItem *_finderDataItem;
    unsigned long long _registeredCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long registeredCount; // @synthesize registeredCount=_registeredCount;
@property(retain, nonatomic) WCFinderDataItem *finderDataItem; // @synthesize finderDataItem=_finderDataItem;

@end

