//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface SettingQuickReplyViewController
{
    _Bool _isSelectionChanged;
    CDUnknownBlockType _selectionHandler;
    long long _selectedIndex;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSelectionChanged; // @synthesize isSelectionChanged=_isSelectionChanged;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(copy, nonatomic) CDUnknownBlockType selectionHandler; // @synthesize selectionHandler=_selectionHandler;
- (long long)indexToSetting:(long long)arg1;
- (id)genCellWithTitle:(id)arg1 index:(long long)arg2 viewId:(id)arg3;
- (void)onSelectAtCell:(id)arg1;
- (void)reloadTableData;
- (void)viewDidLoad;
- (id)initWithSelectionHandler:(CDUnknownBlockType)arg1;

@end

