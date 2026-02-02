//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NewLifeShareCoverImageViewModel, WCFinderShareToMomentsItem;

@interface NewLifeShareMessageViewModel
{
    WCFinderShareToMomentsItem *_item;
    NewLifeShareCoverImageViewModel *_innerViewModel;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NewLifeShareCoverImageViewModel *innerViewModel; // @synthesize innerViewModel=_innerViewModel;
@property(retain, nonatomic) WCFinderShareToMomentsItem *item; // @synthesize item=_item;
- (id)cellViewClassName;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (void)preloadEngineGroup;
- (void)exposeReport;
- (struct CGSize)estimateSize;

@end

