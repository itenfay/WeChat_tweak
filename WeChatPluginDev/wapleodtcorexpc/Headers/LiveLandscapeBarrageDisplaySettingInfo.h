//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface LiveLandscapeBarrageDisplaySettingInfo : NSObject
{
    _Bool _enableDisplayBarrageStyle;
    double _barrageDisplayRange;
    double _barrageDisplayAlpha;
}

+ (void)initialize;
+ (void)PBArrayAdd_barrageDisplayAlpha;
+ (void)PBArrayAdd_barrageDisplayRange;
+ (void)PBArrayAdd_enableDisplayBarrageStyle;
@property(nonatomic) double barrageDisplayAlpha; // @synthesize barrageDisplayAlpha=_barrageDisplayAlpha;
@property(nonatomic) double barrageDisplayRange; // @synthesize barrageDisplayRange=_barrageDisplayRange;
@property(nonatomic) _Bool enableDisplayBarrageStyle; // @synthesize enableDisplayBarrageStyle=_enableDisplayBarrageStyle;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

