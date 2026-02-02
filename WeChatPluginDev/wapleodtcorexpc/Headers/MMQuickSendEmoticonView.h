//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMTimer, NSArray, NSString, UICollectionView, UICollectionViewFlowLayout;
@protocol MMQuickSendEmoticonViewDelegate;

@interface MMQuickSendEmoticonView : UIView
{
    UICollectionView *m_collectionView;
    UICollectionViewFlowLayout *m_collectionLayout;
    NSArray *m_wrapList;
    NSString *m_desc;
    MMTimer *m_timer;
    double m_timeInterval;
    int m_viewCount;
    unsigned long long m_startTime;
    _Bool _didReportSearchExposure;
    id <MMQuickSendEmoticonViewDelegate> _delegate;
    NSString *_sessionId;
    double _bottomX;
    unsigned long long _startShowTimestamp;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool didReportSearchExposure; // @synthesize didReportSearchExposure=_didReportSearchExposure;
@property(nonatomic) unsigned long long startShowTimestamp; // @synthesize startShowTimestamp=_startShowTimestamp;
@property(nonatomic) double bottomX; // @synthesize bottomX=_bottomX;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) __weak id <MMQuickSendEmoticonViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)hideQuickSendEmoticonView;
- (void)checkNeedHide;
- (void)showQuickSendEmoticonView;
- (void)configCollectionView;
- (void)hide;
- (unsigned long long)emoticonWrapCount;
- (void)setEmoticonWrapList:(id)arg1 desc:(id)arg2;
@property(readonly, nonatomic) NSString *curShowingDesc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

