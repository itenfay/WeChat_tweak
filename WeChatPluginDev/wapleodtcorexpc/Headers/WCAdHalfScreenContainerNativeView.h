//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMPageSheetBaseView, MMUILabel, NSString, WCAdURLImageView;

@interface WCAdHalfScreenContainerNativeView
{
    MMPageSheetBaseView *_sheetView;
    WCAdURLImageView *_head;
    MMUILabel *_title;
    MMUILabel *_desc;
    MMUILabel *_tips;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) MMUILabel *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) MMUILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) WCAdURLImageView *head; // @synthesize head=_head;
@property(retain, nonatomic) MMPageSheetBaseView *sheetView; // @synthesize sheetView=_sheetView;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)showWithAnimated:(_Bool)arg1;
- (void)initContainerUI;
- (void)initCommonUI;
- (void)initSubview;
- (id)initWithContainerInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

