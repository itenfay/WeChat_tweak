//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMEasterEggNativeWeAppActivityInfo, NSDictionary, NSString, WCCgiBlockHelper;
@protocol MMEasterEggActivityDelegate;

@interface MMEasterEggNativeWeAppActivity : NSObject
{
    unsigned int _probability;
    NSString *_activityId;
    id <MMEasterEggActivityDelegate> _delegate;
    MMEasterEggNativeWeAppActivityInfo *_activityInfo;
    WCCgiBlockHelper *_cgiBlockHelper;
    NSDictionary *_prizeDict;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int probability; // @synthesize probability=_probability;
@property(retain, nonatomic) NSDictionary *prizeDict; // @synthesize prizeDict=_prizeDict;
@property(retain, nonatomic) WCCgiBlockHelper *cgiBlockHelper; // @synthesize cgiBlockHelper=_cgiBlockHelper;
@property(retain, nonatomic) MMEasterEggNativeWeAppActivityInfo *activityInfo; // @synthesize activityInfo=_activityInfo;
@property(nonatomic) __weak id <MMEasterEggActivityDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(readonly, copy) NSString *description;
- (void)easterEggEnd;
- (void)easterEggTapInteractiveUIWithReportString:(id *)arg1;
- (void)easterEggStartWithKeyword:(id)arg1 reportString:(id *)arg2;
- (void)showNewYearBag;
- (id)initWithActivityInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

