//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol WCFinderLiveChooseLiveModeViewModelDelegate;

@interface WCFinderLiveChooseLiveModeViewModel : NSObject
{
    NSMutableArray *_dataArray;
    id <WCFinderLiveChooseLiveModeViewModelDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCFinderLiveChooseLiveModeViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSMutableArray *dataArray;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onRedDotExposed;
- (void)appendData:(id)arg1;
- (void)appendClarityMethodData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

