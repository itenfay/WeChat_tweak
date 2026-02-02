//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIImageView.h>

@class NSString, WCFinderDataItem;

@interface MMFinderLiveActivityView : UIImageView
{
    _Bool _hasRegisteredFetchLiveActivity;
    WCFinderDataItem *_finderDataItem;
    unsigned long long _activityType;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasRegisteredFetchLiveActivity; // @synthesize hasRegisteredFetchLiveActivity=_hasRegisteredFetchLiveActivity;
@property(nonatomic) unsigned long long activityType; // @synthesize activityType=_activityType;
@property(retain, nonatomic) WCFinderDataItem *finderDataItem; // @synthesize finderDataItem=_finderDataItem;
- (void)onFinderLiveActivityType:(unsigned long long)arg1 tid:(id)arg2;
- (void)clearAndHide;
- (void)updateFinderDataItem:(id)arg1;
- (void)checkAndUnregisterFetchLiveActivity;
- (void)registerFetchLiveActivity;
- (void)willMoveToWindow:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

