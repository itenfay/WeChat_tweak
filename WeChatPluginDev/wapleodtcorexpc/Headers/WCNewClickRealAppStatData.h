//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCNewClickRealAppStatData : NSObject
{
    unsigned int _realSwitchCount;
    int _realInterval;
    int _realBackgroundInterval;
    unsigned int _realFirstEnterTS;
    unsigned int _realLastQuitTS;
}

+ (void)initialize;
+ (void)PBArrayAdd_realLastQuitTS;
+ (void)PBArrayAdd_realFirstEnterTS;
+ (void)PBArrayAdd_realSwitchCount;
+ (void)PBArrayAdd_realBackgroundInterval;
+ (void)PBArrayAdd_realInterval;
@property(nonatomic) unsigned int realLastQuitTS; // @synthesize realLastQuitTS=_realLastQuitTS;
@property(nonatomic) unsigned int realFirstEnterTS; // @synthesize realFirstEnterTS=_realFirstEnterTS;
@property(nonatomic) int realBackgroundInterval; // @synthesize realBackgroundInterval=_realBackgroundInterval;
@property(nonatomic) int realInterval; // @synthesize realInterval=_realInterval;
@property(nonatomic) unsigned int realSwitchCount; // @synthesize realSwitchCount=_realSwitchCount;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

