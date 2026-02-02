//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, WCFinderCustomCGI, WCFinderInteractiveSearchSection, WCFinderInteractiveSearchStore;
@protocol WCFinderInteractiveSearchViewModelDelegate;

@interface WCFinderInteractiveSearchViewModel : NSObject
{
    id <WCFinderInteractiveSearchViewModelDelegate> _delegate;
    NSArray *_sections;
    WCFinderInteractiveSearchStore *_store;
    WCFinderInteractiveSearchSection *_feedSection;
    NSString *_lastKeyword;
    WCFinderCustomCGI *_lastCGI;
    NSString *_dataScene;
    long long _tabType;
}

- (void).cxx_destruct;
@property(nonatomic) long long tabType; // @synthesize tabType=_tabType;
@property(retain, nonatomic) NSString *dataScene; // @synthesize dataScene=_dataScene;
@property(retain, nonatomic) WCFinderCustomCGI *lastCGI; // @synthesize lastCGI=_lastCGI;
@property(retain, nonatomic) NSString *lastKeyword; // @synthesize lastKeyword=_lastKeyword;
@property(retain, nonatomic) WCFinderInteractiveSearchSection *feedSection; // @synthesize feedSection=_feedSection;
@property(retain, nonatomic) WCFinderInteractiveSearchStore *store; // @synthesize store=_store;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) __weak id <WCFinderInteractiveSearchViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onStoeAppendData:(struct _NSRange)arg1;
- (id)listViewModelDataScene:(id)arg1;
- (void)notifyChanged;
- (void)requestNextPage;
- (void)search:(id)arg1;
- (void)delFeedByContentVMTid:(id)arg1;
- (void)onFinderDataItemCancelFav:(id)arg1;
@property(readonly, nonatomic) unsigned long long loadState;
@property(readonly, nonatomic) int commentScene;
- (id)init;
- (id)initWithDataScene:(id)arg1 tabType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

