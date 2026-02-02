//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMKDatePickerViewOnSelectCallback, NSString, WCPaySelectDateItem;

@interface KindaDatePickerView
{
    long long m_type;
    MMKDatePickerViewOnSelectCallback *m_onSelectCallback;
    WCPaySelectDateItem *_dateItem;
}

- (void).cxx_destruct;
@property(retain) WCPaySelectDateItem *dateItem; // @synthesize dateItem=_dateItem;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (id)currentDate;
- (long long)timeForDate:(id)arg1;
- (int)yearOfNow;
- (_Bool)getCanBeLongTerm;
- (void)setCanBeLongTerm:(_Bool)arg1;
- (id)getEndDate;
- (id)getStartDate;
- (id)getSelectedDate;
- (void)setEndDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setHint:(id)arg1;
- (void)setOriginDate:(int)arg1 month:(int)arg2 day:(int)arg3;
- (void)setStartYear:(long long)arg1 endYear:(long long)arg2 beginYear:(long long)arg3;
- (long long)nowYear;
- (long long)getType;
- (void)setType:(long long)arg1;
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

