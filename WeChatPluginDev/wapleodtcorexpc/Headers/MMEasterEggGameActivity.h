//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMEasterEggGameActivityInfo, NSString;
@protocol MMEasterEggActivityDelegate;

@interface MMEasterEggGameActivity : NSObject
{
    NSString *_activityId;
    id <MMEasterEggActivityDelegate> _delegate;
    MMEasterEggGameActivityInfo *_activityInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMEasterEggGameActivityInfo *activityInfo; // @synthesize activityInfo=_activityInfo;
@property(nonatomic) __weak id <MMEasterEggActivityDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(readonly, copy) NSString *description;
- (void)easterEggEnd;
- (void)easterEggTapInteractiveUIWithReportString:(id *)arg1;
- (void)easterEggStartWithKeyword:(id)arg1 reportString:(id *)arg2;
- (void)showGameBag;
- (id)initWithActivityInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

