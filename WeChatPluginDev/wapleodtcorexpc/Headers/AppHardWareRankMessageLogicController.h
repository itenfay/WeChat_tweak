//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AppHardWareRankMessageViewModel, MMUIViewController, NSString;

@interface AppHardWareRankMessageLogicController : NSObject
{
    MMUIViewController *_viewController;
    NSString *_stateIconId;
    NSString *_stateDesc;
    long long _step;
    unsigned long long _cgiStartTime;
    AppHardWareRankMessageViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AppHardWareRankMessageViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) unsigned long long cgiStartTime; // @synthesize cgiStartTime=_cgiStartTime;
@property(nonatomic) long long step; // @synthesize step=_step;
@property(retain, nonatomic) NSString *stateDesc; // @synthesize stateDesc=_stateDesc;
@property(retain, nonatomic) NSString *stateIconId; // @synthesize stateIconId=_stateIconId;
@property(nonatomic) __weak MMUIViewController *viewController; // @synthesize viewController=_viewController;
- (void)jumpToState:(id)arg1;
- (void)onClickStateBtn:(id)arg1 onViewContrller:(id)arg2;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

