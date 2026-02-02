//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WCAudioModuleList : NSObject
{
    unsigned int _type;
    unsigned int _unitCapacity;
    NSMutableArray *_unitArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *unitArray; // @synthesize unitArray=_unitArray;
@property(nonatomic) unsigned int unitCapacity; // @synthesize unitCapacity=_unitCapacity;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (void)asyncNotifyRemoveModule:(id)arg1;
- (void)asyncNotifyRemoveModules:(id)arg1;
- (id)description;
- (_Bool)containsModule:(id)arg1;
- (unsigned int)unitCount;
- (unsigned int)moduleCount;
- (id)getUnitModulesAtIndex:(unsigned int)arg1;
- (id)getLastUnitModules;
- (id)getFirstUnitModules;
- (id)getAllModules;
- (void)removeModulesWithScene:(int)arg1 notify:(_Bool)arg2;
- (void)removeModules:(id)arg1 notify:(_Bool)arg2;
- (void)removeModule:(id)arg1 notify:(_Bool)arg2;
- (void)addModules:(id)arg1 newUnit:(_Bool)arg2 notify:(_Bool)arg3;
- (void)addModule:(id)arg1 newUnit:(_Bool)arg2 notify:(_Bool)arg3;
- (id)initWithType:(unsigned int)arg1 unitCapacity:(unsigned int)arg2;

@end

