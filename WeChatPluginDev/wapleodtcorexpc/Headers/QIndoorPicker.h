//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, QIndicatorLayer, QIndoorBuilding, UILabel, UITableView;
@protocol QIndoorPickerDelegate;

@interface QIndoorPicker : UIView
{
    _Bool _isDarkStyle;
    int _indoorPickerMaxLevels;
    id <QIndoorPickerDelegate> _delegate;
    NSString *_fontName;
    UITableView *_tableView;
    UILabel *_head;
    QIndoorBuilding *_indoorBuilding;
    QIndicatorLayer *_indicator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QIndicatorLayer *indicator; // @synthesize indicator=_indicator;
@property(retain, nonatomic) QIndoorBuilding *indoorBuilding; // @synthesize indoorBuilding=_indoorBuilding;
@property(retain, nonatomic) UILabel *head; // @synthesize head=_head;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool isDarkStyle; // @synthesize isDarkStyle=_isDarkStyle;
@property(nonatomic) int indoorPickerMaxLevels; // @synthesize indoorPickerMaxLevels=_indoorPickerMaxLevels;
@property(copy, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property(nonatomic) __weak id <QIndoorPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithIndoorBuilding:(id)arg1 levelIndex:(unsigned long long)arg2;
- (struct CGRect)adjustTableViewRect:(struct CGRect)arg1;
- (struct CGRect)getDynamicPickerRect:(long long)arg1;
- (void)setupTableView;
- (void)setupTopUI;
- (void)setupBackBorder;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingFooterView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 didEndDisplayingHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateInicator:(id)arg1;
- (void)reloadWithIndoorBuilding:(id)arg1 levelIndex:(unsigned long long)arg2;
- (void)selectLevelIndex:(unsigned long long)arg1;
- (void)callDelegateDidSelectLevelIndex:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

