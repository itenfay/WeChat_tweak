//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CBaseContact, CalendarWeeklyView, CalendarYearMonthDate, MMCommonActionSheetPicker, MMListYearMonthFlowView, MMTableViewInfo, NSArray, NSCalendar, NSDate, NSDateComponents, NSString, UIButton, UIImage;
@protocol MMUIViewControllerDelegate;

@interface ChatMsgCalendarViewController
{
    CBaseContact *m_oContact;
    MMTableViewInfo *m_tableViewInfo;
    NSCalendar *m_gregorian;
    NSCalendar *m_chinese;
    UIImage *m_backImg;
    UIImage *m_normalImg;
    NSDate *m_lastDatePreMonth;
    NSDateComponents *m_firstMsgDateComponents;
    NSDateComponents *m_lastMsgDateComponents;
    NSDateComponents *m_currentMsgDateComponents;
    CalendarYearMonthDate *m_selectYearMonth;
    _Bool m_bEnd;
    UIButton *m_lastSelectItem;
    _Bool m_bToday;
    _Bool m_bNewYearsEve;
    CalendarWeeklyView *m_weekView;
    id <MMUIViewControllerDelegate> _m_delegate;
    MMListYearMonthFlowView *_yearMonthFlowView;
    MMCommonActionSheetPicker *_yearMonthPickerView;
    NSArray *_yearsData;
    NSArray *_monthsDatas;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *monthsDatas; // @synthesize monthsDatas=_monthsDatas;
@property(retain, nonatomic) NSArray *yearsData; // @synthesize yearsData=_yearsData;
@property(retain, nonatomic) MMCommonActionSheetPicker *yearMonthPickerView; // @synthesize yearMonthPickerView=_yearMonthPickerView;
@property(retain, nonatomic) MMListYearMonthFlowView *yearMonthFlowView; // @synthesize yearMonthFlowView=_yearMonthFlowView;
@property(nonatomic) __weak id <MMUIViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)onPickerViewDidSelectRow:(long long)arg1 inComponent:(long long)arg2 PickItem:(id)arg3;
- (void)commonPickerConfirm:(id)arg1;
- (void)listYearMonthFlowViewDidClickLabel:(id)arg1;
- (void)calcYearMonthPickerViewData;
- (void)tryCalcYearMonthPickerViewData;
- (void)updateYearMonthPicker:(id)arg1 month:(id)arg2;
- (void)handleDidClickYearMonthFlowLabel:(id)arg1 month:(id)arg2;
- (void)initDateComponents;
- (void)updateYearMonthFlowViewTitle:(long long)arg1 month:(long long)arg2;
- (void)updateYearMonthFlowView;
- (id)getFirstVisibleCellIndexPath;
- (void)initYearFloatView;
- (double)getSesessionTopInTable:(unsigned int)arg1;
- (id)getFirstSectionHeaderView;
- (void)resetTableViewContentInset;
- (void)scrollToSessionWithIndex:(id)arg1;
- (void)scrollToSessionWithYear:(long long)arg1 month:(long long)arg2;
- (id)genDateComponentsWithDate:(id)arg1;
- (void)getNextDateComponents;
- (_Bool)hasMsgDay:(long long)arg1 Month:(long long)arg2 Year:(long long)arg3;
- (_Bool)accessibilityScroll:(long long)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)loadNextMonthIfNeeded:(id)arg1;
- (_Bool)shouldLoadNextMonth;
- (id)makeWeeklyLineView:(long long *)arg1 WeekDay:(long long)arg2 thisMonthComponent:(id)arg3;
- (id)getDetailForDay:(long long)arg1 Month:(long long)arg2 Year:(long long)arg3;
- (void)onSelectDate:(id)arg1;
- (id)getViewController;
- (void)makeMonthlyViewWithDate:(id)arg1 isNeedReloadData:(_Bool)arg2;
- (void)makeMonthlyViewWithDate:(id)arg1;
- (id)getDateFromEra:(long long)arg1 year:(long long)arg2 month:(long long)arg3 day:(long long)arg4;
- (void)makeWeeklyLineCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeWeekView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)onBackButtonClicked:(id)arg1;
- (id)initWithChat:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

