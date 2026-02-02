//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableView.h>

@class NSArray, NSString;
@protocol MMLimitedModeConfigListViewDelegate><MMLimitedModeBizCellDelegate;

@interface MMLimitedModeConfigListView : UITableView
{
    id <MMLimitedModeConfigListViewDelegate><MMLimitedModeBizCellDelegate> _limitedDelegate;
    NSArray *_bizTypes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *bizTypes; // @synthesize bizTypes=_bizTypes;
@property(nonatomic) __weak id <MMLimitedModeConfigListViewDelegate><MMLimitedModeBizCellDelegate> limitedDelegate; // @synthesize limitedDelegate=_limitedDelegate;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)listViewHeight;
- (_Bool)canShowLiveConfig;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

