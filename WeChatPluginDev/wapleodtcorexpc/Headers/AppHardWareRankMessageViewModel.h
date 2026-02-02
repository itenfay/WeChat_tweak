//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class HardWareRankMessageEntryButtonInfo;

@interface AppHardWareRankMessageViewModel
{
    HardWareRankMessageEntryButtonInfo *_entryButtonInfo;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
- (void)onClickOlympic2024Button;
- (_Bool)canShowOlympic2024Entry;
- (_Bool)canShowTextStateEntry;
- (id)getChampionText:(double)arg1 font:(id)arg2;
- (id)additionalAccessibilityDescription;
@property(readonly, nonatomic) HardWareRankMessageEntryButtonInfo *entryButtonInfo; // @synthesize entryButtonInfo=_entryButtonInfo;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;

@end

