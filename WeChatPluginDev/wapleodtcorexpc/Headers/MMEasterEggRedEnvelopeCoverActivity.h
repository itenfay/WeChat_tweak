//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMEasterEggRedEnvelopeCoverActivityInfo, NSString, WCCgiBlockHelper;
@protocol MMEasterEggActivityDelegate;

@interface MMEasterEggRedEnvelopeCoverActivity : NSObject
{
    NSString *_activityId;
    id <MMEasterEggActivityDelegate> _delegate;
    MMEasterEggRedEnvelopeCoverActivityInfo *_activityInfo;
    WCCgiBlockHelper *_cgiBlockHelper;
    NSString *_URLString;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *URLString; // @synthesize URLString=_URLString;
@property(retain, nonatomic) WCCgiBlockHelper *cgiBlockHelper; // @synthesize cgiBlockHelper=_cgiBlockHelper;
@property(retain, nonatomic) MMEasterEggRedEnvelopeCoverActivityInfo *activityInfo; // @synthesize activityInfo=_activityInfo;
@property(nonatomic) __weak id <MMEasterEggActivityDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(readonly, copy) NSString *description;
- (double)triggerProbability;
- (_Bool)shouldTriggerRequest;
- (void)showRedEnvelopeCoverBag;
- (void)easterEggEnd;
- (void)easterEggTapInteractiveUIWithReportString:(id *)arg1;
- (void)easterEggStartWithKeyword:(id)arg1 reportString:(id *)arg2;
- (id)initWithActivityInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

