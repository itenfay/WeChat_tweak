//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol _TtP6WeChat38MMFinderLiveChooseFunctionCellDelegate_;

@interface _TtC6WeChat35MMFinderLiveChooseFunctionViewModel : NSObject
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *hasFirstDisable;
    MISSING_TYPE *dataArray;
    MISSING_TYPE *chooseFunctionPanel;
}

- (void).cxx_destruct;
- (id)init;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)hideLiveChooseFunctionWithAnimated:(_Bool)arg1;
- (void)updateContentViewHeightWithContentViewHeight:(double)arg1;
- (void)liveChooseFunctionDetailDidSelectWithIndexPath:(id)arg1 item:(id)arg2;
- (void)liveChooseFunctionCellDidSelectWithIndexPath:(id)arg1 item:(id)arg2 isActionButton:(_Bool)arg3;
- (id)getChooseFunctionPanel;
- (void)updateChooseFunctionPanelWithDataArray:(id)arg1;
- (void)showChooseFunctionPanelWithDataArray:(id)arg1 superView:(id)arg2;
@property(nonatomic) _Bool hasFirstDisable; // @synthesize hasFirstDisable;
@property(nonatomic) __weak id <_TtP6WeChat38MMFinderLiveChooseFunctionCellDelegate_> delegate; // @synthesize delegate;

@end

