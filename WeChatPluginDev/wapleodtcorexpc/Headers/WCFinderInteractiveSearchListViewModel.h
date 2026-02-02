//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, WCFinderInteractiveSearchStore;
@protocol WCFinderInteractiveSearchViewModelDelegate;

@interface WCFinderInteractiveSearchListViewModel : NSObject
{
    NSMutableArray *_contentVMS;
    id <WCFinderInteractiveSearchViewModelDelegate> _delegate;
    NSString *_dataScene;
    WCFinderInteractiveSearchStore *_store;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderInteractiveSearchStore *store; // @synthesize store=_store;
@property(retain, nonatomic) NSString *dataScene; // @synthesize dataScene=_dataScene;
@property(nonatomic) __weak id <WCFinderInteractiveSearchViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *contentVMS; // @synthesize contentVMS=_contentVMS;
- (void)insertDataItems:(id)arg1;
- (void)onStoeAppendData:(struct _NSRange)arg1;
- (long long)contentIndexOfTid:(id)arg1;
- (void)delContentVM:(id)arg1;
- (void)requestNextPage;
- (_Bool)isError;
- (_Bool)hasMore;
- (_Bool)isLoading;
@property(readonly, nonatomic) int commentScene;
- (id)initWithStore:(id)arg1 dataScene:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

