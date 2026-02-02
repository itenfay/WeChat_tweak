//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveFrontEndPreviewView, NSString;

@interface WAFinderLiveView
{
    MMFinderLiveFrontEndPreviewView *_liveView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveFrontEndPreviewView *liveView; // @synthesize liveView=_liveView;
- (void)layoutSubviews;
- (void)sendEvent:(id)arg1 data:(id)arg2;
- (id)onRemoveWithParam:(id)arg1;
- (id)onUpdateWithParam:(id)arg1;
- (id)onInsertWithParam:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

