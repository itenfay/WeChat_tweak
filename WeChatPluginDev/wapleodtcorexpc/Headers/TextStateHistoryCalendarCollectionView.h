//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionView.h>

@class NSString, TextStateCollectionViewLayoutHistoryCalendar, TextStateHistoryCalendar, UITapGestureRecognizer;
@protocol TextStateHistoryCalendarCollectionViewDelegate;

@interface TextStateHistoryCalendarCollectionView : UICollectionView
{
    TextStateHistoryCalendar *_calendar;
    UITapGestureRecognizer *_tapGesture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) TextStateHistoryCalendar *calendar; // @synthesize calendar=_calendar;
- (_Bool)shouldShowYearForSection:(unsigned long long)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)onTap:(id)arg1;
- (id)itemReuseIdentifierWithInfoCount:(unsigned long long)arg1;
@property(nonatomic) _Bool showStoryEntry; // @dynamic showStoryEntry;
@property(readonly, nonatomic) TextStateCollectionViewLayoutHistoryCalendar *calendarLayout;
- (void)configure;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(nonatomic) __weak id <TextStateHistoryCalendarCollectionViewDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

