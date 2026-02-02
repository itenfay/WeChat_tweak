//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, WeToast, ZZFLEXAngel;

@interface WASMPageSheetListView
{
    MMTableView *_tableView;
    ZZFLEXAngel *_angel;
    WeToast *_weakCurrentToast;
}

+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak WeToast *weakCurrentToast; // @synthesize weakCurrentToast=_weakCurrentToast;
@property(retain, nonatomic) ZZFLEXAngel *angel; // @synthesize angel=_angel;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setViewDataModel:(id)arg1;

@end

