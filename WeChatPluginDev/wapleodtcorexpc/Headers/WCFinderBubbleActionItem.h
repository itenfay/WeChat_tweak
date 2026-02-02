//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCFinderBubbleReadyRequirements;

@interface WCFinderBubbleActionItem : NSObject
{
    CDUnknownBlockType _availableCheckBlock;
    CDUnknownBlockType _prepareAnimationBlock;
    CDUnknownBlockType _showAnimationBlock;
    CDUnknownBlockType _dismissAnimationBlock;
    unsigned long long _itemType;
    WCFinderBubbleReadyRequirements *_requirements;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderBubbleReadyRequirements *requirements; // @synthesize requirements=_requirements;
@property(nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;
@property(copy, nonatomic) CDUnknownBlockType dismissAnimationBlock; // @synthesize dismissAnimationBlock=_dismissAnimationBlock;
@property(copy, nonatomic) CDUnknownBlockType showAnimationBlock; // @synthesize showAnimationBlock=_showAnimationBlock;
@property(copy, nonatomic) CDUnknownBlockType prepareAnimationBlock; // @synthesize prepareAnimationBlock=_prepareAnimationBlock;
@property(copy, nonatomic) CDUnknownBlockType availableCheckBlock; // @synthesize availableCheckBlock=_availableCheckBlock;

@end

