//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableView.h>

@class NSMutableDictionary, NSString, WADebugSkylineOptions;

@interface WADebugSkylineView : UITableView
{
    WADebugSkylineOptions *_options;
    NSMutableDictionary *_oldOptions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *oldOptions; // @synthesize oldOptions=_oldOptions;
@property(retain, nonatomic) WADebugSkylineOptions *options; // @synthesize options=_options;
- (_Bool)optionChanged;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)configTableView;
- (id)initWithAppId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

