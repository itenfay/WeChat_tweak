//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCDeepCleanDBVacuum : NSObject
{
    NSArray *m_vacuumInfos;
    _Bool bCleanning;
    _Bool bStop;
    float progressLevel;
    unsigned long long _freeSize;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long freeSize; // @synthesize freeSize=_freeSize;
@property(nonatomic) _Bool bStop; // @synthesize bStop;
@property(nonatomic) _Bool bCleanning; // @synthesize bCleanning;
@property(nonatomic) float progressLevel; // @synthesize progressLevel;
- (void)cleanData;
- (unsigned long long)getClassSize;
- (void)stop;
- (unsigned long long)getOtherDataDBVacuumSize;
- (unsigned long long)getChatLogDBVacuumSize;
@property(readonly, nonatomic) NSArray *vaccumInfos;
- (void)refreshState;
- (id)initWithFreeSize:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

