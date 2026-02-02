//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAJSContextPlugin_NativeViews
{
    _Bool _dragging;
}

@property(nonatomic) _Bool dragging; // @synthesize dragging=_dragging;
- (void)scrollViewDidScroll:(id)arg1;
- (id)decodeBase64String:(id)arg1;
- (id)getFileData:(id)arg1;
- (void)getFileData:(id)arg1 referrerPolicyType:(unsigned long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)sendJSEventWithEventName:(id)arg1 param:(id)arg2 baseView:(id)arg3;
- (void)onTouchCancel:(id)arg1 canvas:(id)arg2;
- (void)onTouchEnd:(id)arg1 canvas:(id)arg2;
- (void)onTouchMove:(id)arg1 canvas:(id)arg2;
- (void)onTouchBegin:(id)arg1 canvas:(id)arg2;
- (void)sendDragEventForViewForView:(id)arg1 touches:(id)arg2 stage:(id)arg3;
- (void)onDragCancel:(id)arg1 canvas:(id)arg2;
- (void)onDragEnd:(id)arg1 canvas:(id)arg2;
- (void)onDragMove:(id)arg1 canvas:(id)arg2;
- (void)onDragBegin:(id)arg1 canvas:(id)arg2;
- (void)onButtonClick:(id)arg1;
- (id)rootViewsForDest:(long long)arg1;
- (id)rootViewsForIndependent;
- (id)rootViewsForDic:(id)arg1;
- (void)animateCoverViewWithParam:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)updateScrollView:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)insertScrollView:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)removeBaseView:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)updateBaseView:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)insertBaseView:(id)arg1 block:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

