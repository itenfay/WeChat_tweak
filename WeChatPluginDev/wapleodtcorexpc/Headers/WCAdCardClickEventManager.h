//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCAdCardClickEventManager
{
}

+ (id)getInstance;
- (void)reportClick:(id)arg1;
- (id)createClickPageWrapWithActionInfo:(id)arg1 dataItem:(id)arg2 contentItemScene:(unsigned long long)arg3 clickPos:(long long)arg4 clickIndex:(int)arg5 clickActionType:(long long)arg6;
- (id)createClickPageWrap:(id)arg1 contentItemScene:(unsigned long long)arg2 clickPos:(long long)arg3 clickIndex:(int)arg4 clickActionType:(long long)arg5;
- (void)reportClickWithActionInfo:(id)arg1 dataItem:(id)arg2 contentItemScene:(unsigned long long)arg3 clickPos:(long long)arg4 clickIndex:(int)arg5 clickActionType:(long long)arg6;
- (void)reportClick:(id)arg1 contentItemScene:(unsigned long long)arg2 clickPos:(long long)arg3 clickIndex:(int)arg4 clickActionType:(long long)arg5;
- (id)getAdActionLinkWithActionInfo:(id)arg1 adInfo:(id)arg2;
- (void)handleCustomerServiceContactWithResult:(_Bool)arg1 contact:(id)arg2 jumpParams:(id)arg3;
- (void)jumpToCustomerServiceWithActionInfo:(id)arg1 dataItem:(id)arg2 contentItemScene:(unsigned long long)arg3 clickIndex:(int)arg4 originView:(id)arg5;
- (_Bool)canJumpToGestureCanvasWithAdInfo:(id)arg1;
- (_Bool)canJumpToCanvasWithAdInfo:(id)arg1;
- (_Bool)onClickEventFiredWithActionInfo:(id)arg1 dataItem:(id)arg2 cardType:(long long)arg3 contentItemScene:(unsigned long long)arg4 clickPos:(long long)arg5 clickIndex:(int)arg6 originView:(id)arg7 needReportClick:(_Bool)arg8 customCanvasScene:(int)arg9 outPlaybackTime:(double)arg10;
- (_Bool)onClickEventFiredWithActionInfo:(id)arg1 dataItem:(id)arg2 cardType:(long long)arg3 contentItemScene:(unsigned long long)arg4 clickPos:(long long)arg5 clickIndex:(int)arg6 originView:(id)arg7;
- (_Bool)onClickEventFiredWithActionInfo:(id)arg1 dataItem:(id)arg2 cardType:(long long)arg3 contentItemScene:(unsigned long long)arg4 clickPos:(long long)arg5 originView:(id)arg6;

@end

