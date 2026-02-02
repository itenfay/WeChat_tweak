//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, TXCDashboardFloatingBall, TXCDashboardLayoutView;

@interface TXCDashboardiOS : NSObject
{
    NSMutableDictionary *_dashboardInfo;
    TXCDashboardFloatingBall *_floatingBall;
    TXCDashboardLayoutView *_dashboardLayoutView;
}

+ (void)destoryContainerInMainThread:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) TXCDashboardLayoutView *dashboardLayoutView; // @synthesize dashboardLayoutView=_dashboardLayoutView;
@property(retain, nonatomic) TXCDashboardFloatingBall *floatingBall; // @synthesize floatingBall=_floatingBall;
@property(retain, nonatomic) NSMutableDictionary *dashboardInfo; // @synthesize dashboardInfo=_dashboardInfo;
- (void)destoryContainer:(id)arg1;
- (void)dealloc;
- (void)printLog:(id)arg1;
- (void)runInMainThread:(CDUnknownBlockType)arg1;
- (void)onClickFloatingBall;
- (void)createDashboardLayoutView;
- (void)createFloatingBall;
- (int)appendDashboard:(id)arg1 log:(id)arg2;
- (int)setDashboard:(id)arg1 status:(id)arg2;
- (int)removeAllDashboard;
- (int)removeDashboard:(id)arg1;
- (int)addDashboard:(id)arg1;
- (int)showDashboard:(_Bool)arg1;
- (id)init;

@end

