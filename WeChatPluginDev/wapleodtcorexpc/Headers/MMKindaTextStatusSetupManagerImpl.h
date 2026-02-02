//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUIViewController, MMVoidBoolStringCallback, NSString, TextStateBrandLogic;

@interface MMKindaTextStatusSetupManagerImpl : NSObject
{
    MMVoidBoolStringCallback *_callback;
    TextStateBrandLogic *_brandLogic;
    MMUIViewController *_currentViewController;
    NSString *_transId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *transId; // @synthesize transId=_transId;
@property(nonatomic) __weak MMUIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(retain, nonatomic) TextStateBrandLogic *brandLogic; // @synthesize brandLogic=_brandLogic;
@property(retain, nonatomic) MMVoidBoolStringCallback *callback; // @synthesize callback=_callback;
- (void)textStatusDataReportWithScene:(int)arg1;
- (void)onTextStatePublishedWithIconId:(id)arg1 iconDescription:(id)arg2;
- (void)onTextStatePublishCancelled;
- (void)setupTextStatusImpl:(id)arg1 transId:(id)arg2 mktSign:(id)arg3 payscene:(int)arg4 finishCallback:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

