//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIImageView.h>

@class NSString, SightDraft, SightIconView, WCAssetStateView;

@interface WCPostSightImageView : UIImageView
{
    _Bool _shownError;
    _Bool _canReselect;
    SightDraft *_sightDraft;
    SightIconView *_playIconView;
    WCAssetStateView *_stateView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAssetStateView *stateView; // @synthesize stateView=_stateView;
@property(retain, nonatomic) SightIconView *playIconView; // @synthesize playIconView=_playIconView;
@property(readonly, nonatomic) _Bool canReselect; // @synthesize canReselect=_canReselect;
@property(readonly, nonatomic) _Bool shownError; // @synthesize shownError=_shownError;
@property(retain, nonatomic) SightDraft *sightDraft; // @synthesize sightDraft=_sightDraft;
- (void)sightDraftProcessTask:(id)arg1 didFailToProcessSightDraft:(id)arg2;
- (void)sightDraftProcessTask:(id)arg1 didFinishProcessingSightDraft:(id)arg2;
- (void)updateStateView;
- (void)updatePlayIconView;
- (id)thumbImageFromSightDraft:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

