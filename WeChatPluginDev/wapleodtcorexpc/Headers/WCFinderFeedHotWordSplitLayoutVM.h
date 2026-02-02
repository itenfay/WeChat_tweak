//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCFinderSearchHotWord;

@interface WCFinderFeedHotWordSplitLayoutVM
{
    _Bool _ignoreUpdateCell;
    WCFinderSearchHotWord *_preHotword;
    WCFinderSearchHotWord *_nextHotword;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool ignoreUpdateCell; // @synthesize ignoreUpdateCell=_ignoreUpdateCell;
@property(retain, nonatomic) WCFinderSearchHotWord *nextHotword; // @synthesize nextHotword=_nextHotword;
@property(retain, nonatomic) WCFinderSearchHotWord *preHotword; // @synthesize preHotword=_preHotword;
- (id)initWithPreHotWord:(id)arg1 nextHotword:(id)arg2;

@end

