//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WSHotListContainerView;

@interface WSHotListTemplateService
{
    WSHotListContainerView *_hotListView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WSHotListContainerView *hotListView; // @synthesize hotListView=_hotListView;
- (void)onSearchConfigDataUpdated;
- (unsigned long long)entranceExptValue;
- (_Bool)shouldShowEntry;
- (unsigned long long)localJSBizType;
- (unsigned int)packageResouceType;
- (id)templateResouceRootPath;
- (id)defaultTemplateZipPath;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

