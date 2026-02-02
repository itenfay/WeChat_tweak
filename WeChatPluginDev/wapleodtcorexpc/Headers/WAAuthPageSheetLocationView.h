//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, ZZFLEXAngel;

@interface WAAuthPageSheetLocationView
{
    MMTableView *_tableView;
    ZZFLEXAngel *_angel;
}

+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) ZZFLEXAngel *angel; // @synthesize angel=_angel;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)reloadList;
- (void)setViewDataModel:(id)arg1;

@end

