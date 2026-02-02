//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface BTMissedSubsReaderItemViewModel
{
    NSMutableArray *_titleArrStyles;
}

+ (_Bool)canCreateViewModelWithSectionData:(id)arg1 accountIndex:(unsigned int)arg2 appMsgIndex:(unsigned int)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *titleArrStyles; // @synthesize titleArrStyles=_titleArrStyles;
- (_Bool)isShowLargeCover;
- (id)coverUrl;
@property(readonly, nonatomic) NSString *contentUrl;
@property(readonly, nonatomic) unsigned long long titleLimitLineNum;
@property(readonly, nonatomic) double titleLimitWidth;
@property(readonly, nonatomic) NSString *title;
- (id)itemViewClassName;

@end

