//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AppPatMessageRefreshContext, NSArray, PatMessageWrap;

@interface AppPatMessageViewModel
{
    _Bool _needFold;
    NSArray *_patStylesArray;
    NSArray *_patBackgroundSizes;
    AppPatMessageRefreshContext *_refreshContext;
    struct CGSize _expandButtonSize;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) AppPatMessageRefreshContext *refreshContext; // @synthesize refreshContext=_refreshContext;
@property(nonatomic) struct CGSize expandButtonSize; // @synthesize expandButtonSize=_expandButtonSize;
@property(retain, nonatomic) NSArray *patBackgroundSizes; // @synthesize patBackgroundSizes=_patBackgroundSizes;
@property(retain, nonatomic) NSArray *patStylesArray; // @synthesize patStylesArray=_patStylesArray;
@property(nonatomic) _Bool needFold; // @synthesize needFold=_needFold;
@property(readonly, nonatomic) PatMessageWrap *patMessageWrap;
@property(readonly, nonatomic) unsigned long long parserType;
@property(readonly, nonatomic) double textFontSize;
- (double)getTimeOffsetForContentId:(id)arg1;
- (void)updateTimeOffset:(double)arg1 forContentId:(id)arg2;
- (void)markCleanRefreshed;
- (_Bool)needCleanRefresh;
- (_Bool)isRead;
- (void)setReadFromIndexes:(id)arg1 cellView:(id)arg2;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (id)cellViewClassName;

@end

