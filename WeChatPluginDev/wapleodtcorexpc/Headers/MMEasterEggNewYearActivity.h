//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMEasterEggNewYearActivityInfo, NSString, WCCgiBlockHelper;
@protocol MMEasterEggActivityDelegate;

@interface MMEasterEggNewYearActivity : NSObject
{
    NSString *_activityId;
    id <MMEasterEggActivityDelegate> _delegate;
    MMEasterEggNewYearActivityInfo *_activityInfo;
    NSString *_keyword;
    NSString *_traceId;
    WCCgiBlockHelper *_prepareCgiBlockHelper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCCgiBlockHelper *prepareCgiBlockHelper; // @synthesize prepareCgiBlockHelper=_prepareCgiBlockHelper;
@property(retain, nonatomic) NSString *traceId; // @synthesize traceId=_traceId;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(retain, nonatomic) MMEasterEggNewYearActivityInfo *activityInfo; // @synthesize activityInfo=_activityInfo;
@property(nonatomic) __weak id <MMEasterEggActivityDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
- (id)getTraceId;
@property(readonly, copy) NSString *description;
- (double)materialCgiTotalTimeout;
- (void)easterEggEnd;
- (void)easterEggTapInteractiveUIWithReportString:(id *)arg1;
- (void)easterEggStartWithKeyword:(id)arg1 reportString:(id *)arg2;
- (void)showLuckyBag;
- (id)initWithActivityInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

