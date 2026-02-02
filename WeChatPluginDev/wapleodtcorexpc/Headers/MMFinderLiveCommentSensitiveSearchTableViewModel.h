//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMTableView, NSMutableArray, NSString;
@protocol MMFinderLiveCommentSensitiveSearchTableDelegate;

@interface MMFinderLiveCommentSensitiveSearchTableViewModel : NSObject
{
    id <MMFinderLiveCommentSensitiveSearchTableDelegate> _delegate;
    MMTableView *_tableView;
    NSMutableArray *_sensitiveResultDataItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *sensitiveResultDataItems; // @synthesize sensitiveResultDataItems=_sensitiveResultDataItems;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <MMFinderLiveCommentSensitiveSearchTableDelegate> delegate; // @synthesize delegate=_delegate;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)deleteSensitiveDataItemAtIndex:(unsigned long long)arg1;
- (void)updateSensitiveDataItems:(id)arg1;
- (id)initWithTableView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

