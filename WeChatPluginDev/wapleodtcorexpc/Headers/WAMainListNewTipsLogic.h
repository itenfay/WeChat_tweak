//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WAMainListNewTipsLogicDelegate;

@interface WAMainListNewTipsLogic
{
    id <WAMainListNewTipsLogicDelegate> _delegate;
}

+ (id)GenerateRedDotInfoParamStringForSimulatedNativeMainList;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WAMainListNewTipsLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTipsShowInfoChangeWithPathKey:(id)arg1;
- (void)disposeNewTipsWithPathKey:(id)arg1;
- (id)getShowInfoWithPathKey:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

