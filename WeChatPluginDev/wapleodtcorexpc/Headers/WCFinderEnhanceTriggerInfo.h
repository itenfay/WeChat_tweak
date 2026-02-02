//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, WCFinderDataItem;

@interface WCFinderEnhanceTriggerInfo : NSObject
{
    int _lastTriggerType;
    NSNumber *_lastTriggerEvent;
    WCFinderDataItem *_enhancedByThisItem;
    NSArray *_enhancingTidList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *enhancingTidList; // @synthesize enhancingTidList=_enhancingTidList;
@property(retain, nonatomic) WCFinderDataItem *enhancedByThisItem; // @synthesize enhancedByThisItem=_enhancedByThisItem;
@property(retain, nonatomic) NSNumber *lastTriggerEvent; // @synthesize lastTriggerEvent=_lastTriggerEvent;
@property(nonatomic) int lastTriggerType; // @synthesize lastTriggerType=_lastTriggerType;

@end

