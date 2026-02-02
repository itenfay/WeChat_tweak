//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSTimer;

@interface MatrixTester : NSObject
{
    NSTimer *_runloopTimer;
    NSTimer *_runloop2Timer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *runloop2Timer; // @synthesize runloop2Timer=_runloop2Timer;
@property(retain, nonatomic) NSTimer *runloopTimer; // @synthesize runloopTimer=_runloopTimer;
- (void)readMassData;
- (void)writeMassData;
- (void)costCPUALot;
- (void)runloop2Selector;
- (void)runloop1Selector;
- (void)testSpecialSceneOfLag;
- (void)generateMainThreadBlockToBeKilledLog;
- (void)generateMainThreadLagLog;
- (void)fooo:(char *)arg1;
- (void)foo;
- (void)overflowCrash;
- (void)childNsexceptionCrash;
- (void)cppToNsExceptionCrash;
- (void)cppexceptionCrash;
- (void)nsexceptionCrash;
- (void)deadSignalCrash;
- (void)wrongFormatCrash;
- (void)notFoundSelectorCrash;
- (void)pureSwiftCrash;
- (void)swiftCrash;

@end

