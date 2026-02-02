//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface BTCanvasMsgSectionData
{
    NSString *_canvasId;
}

+ (_Bool)canCreateSectionDataWithMsgWrap:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *canvasId; // @synthesize canvasId=_canvasId;
- (void)onAdCanvasViewTouchEnd:(id)arg1;
- (void)onCanvasItemClick:(id)arg1;
- (void)onCanvasHeightChange:(id)arg1;
- (_Bool)isMsgViewControllerInForground;
- (id)getCurrentWebviewViewController;
- (double)heightForRowInSection:(unsigned long long)arg1;
- (long long)numberOfRowsInSection;
- (unsigned long long)sectionType;
- (void)initItemViewModelArr;
- (id)initWithMsgWrap:(id)arg1 sectionWidth:(double)arg2 displayMode:(unsigned int)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

