//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FeedRecord, NSArray;

@interface WCFinderModifyHistoryLogPannel
{
    FeedRecord *_initialInfo;
    NSArray *_historyArray;
}

+ (id)buildWithFeedInitialInfo:(id)arg1 historyArray:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *historyArray; // @synthesize historyArray=_historyArray;
@property(retain, nonatomic) FeedRecord *initialInfo; // @synthesize initialInfo=_initialInfo;
- (void)displayOnView:(id)arg1;

@end

