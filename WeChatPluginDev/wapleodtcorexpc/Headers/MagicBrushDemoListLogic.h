//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UITableView, UIView, ZZFLEXAngel;

@interface MagicBrushDemoListLogic
{
    UITableView *_tableView;
    ZZFLEXAngel *_angel;
    UIView *_pendingView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *pendingView; // @synthesize pendingView=_pendingView;
@property(retain, nonatomic) ZZFLEXAngel *angel; // @synthesize angel=_angel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)onMainScriptInjected:(id)arg1;
- (void)onCanvasViewCreated:(unsigned int)arg1 view:(id)arg2;
- (void)start;

@end

