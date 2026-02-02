//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, WCFinderRedDotThreadSafeSet;

@interface WCFinderTipsPathInfo : NSObject
{
    _Bool _optimizeTipsUuidSetSafeThreadSwitch;
    _Bool _optimizeContainerUseGCDSafeThreadStrategy;
    NSString *_nsPathKey;
    NSMutableSet *_tipsUuidSet;
    WCFinderRedDotThreadSafeSet *_gcdSafeUuidSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderRedDotThreadSafeSet *gcdSafeUuidSet; // @synthesize gcdSafeUuidSet=_gcdSafeUuidSet;
@property(retain, nonatomic) NSMutableSet *tipsUuidSet; // @synthesize tipsUuidSet=_tipsUuidSet;
@property(nonatomic) _Bool optimizeContainerUseGCDSafeThreadStrategy; // @synthesize optimizeContainerUseGCDSafeThreadStrategy=_optimizeContainerUseGCDSafeThreadStrategy;
@property(nonatomic) _Bool optimizeTipsUuidSetSafeThreadSwitch; // @synthesize optimizeTipsUuidSetSafeThreadSwitch=_optimizeTipsUuidSetSafeThreadSwitch;
@property(retain, nonatomic) NSString *nsPathKey; // @synthesize nsPathKey=_nsPathKey;
- (id)_synchronizedMutableCopyTipsUuidSet;
- (void)_synchronizedRemoveObjectToTipsUuidSet:(id)arg1;
- (void)_synchronizedAddObjectToTipsUuidSet:(id)arg1;
- (void)uuidContainerEnumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)uuidContainerCount;
- (id)uuidContainerMutableCopy;
- (void)uuidContainerRemoveObject:(id)arg1;
- (void)uuidContainerAddObject:(id)arg1;
- (id)init;

@end

