//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMKCountPickerViewOnSelectCallback, NSString, WCPaySelectCountItem;

@interface KindaCountPickerView
{
    WCPaySelectCountItem *_countItem;
    MMKCountPickerViewOnSelectCallback *_callback;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMKCountPickerViewOnSelectCallback *callback; // @synthesize callback=_callback;
@property(retain, nonatomic) WCPaySelectCountItem *countItem; // @synthesize countItem=_countItem;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)setDefaultCount:(int)arg1;
- (void)setOnSelectCallback:(id)arg1;
- (id)getValue;
- (void)setValue:(id)arg1;
- (_Bool)getFocus;
- (void)setFocus:(_Bool)arg1;
- (id)getView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

