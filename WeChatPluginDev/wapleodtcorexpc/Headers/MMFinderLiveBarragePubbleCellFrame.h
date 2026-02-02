//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveBarrageDataItem, MMFinderLiveBarragePubbleCellFrameResult, NSMutableArray, NSString, UIFont;

@interface MMFinderLiveBarragePubbleCellFrame : NSObject
{
    int _lastExposeIndex;
    MMFinderLiveBarrageDataItem *_barrageDataItem;
    MMFinderLiveBarragePubbleCellFrameResult *_layoutResult;
    unsigned long long _currLayoutStyle;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long currLayoutStyle; // @synthesize currLayoutStyle=_currLayoutStyle;
@property(retain, nonatomic) MMFinderLiveBarragePubbleCellFrameResult *layoutResult; // @synthesize layoutResult=_layoutResult;
@property(nonatomic) int lastExposeIndex; // @synthesize lastExposeIndex=_lastExposeIndex;
@property(retain, nonatomic) MMFinderLiveBarrageDataItem *barrageDataItem; // @synthesize barrageDataItem=_barrageDataItem;
- (double)getLastLineMaxY:(id)arg1;
- (long long)getCurrentLines:(id)arg1;
- (void)calculateSizeWithBarrageDataItem:(id)arg1;
@property(readonly, nonatomic) NSString *displayStr;
@property(readonly, nonatomic) double firstLineOriginX;
@property(readonly, nonatomic) NSMutableArray *arrStyles;
@property(readonly, nonatomic) struct CGSize contentSize;
@property(readonly, nonatomic) struct CGSize cellSize;
@property(readonly, nonatomic) _Bool isContentMultiline;
@property(readonly, nonatomic) UIFont *labelFont;
@property(readonly, nonatomic) double startIconContentDis;
@property(readonly, nonatomic) struct CGSize startIconSize;
@property(readonly, nonatomic) double startIconTop;
@property(readonly, nonatomic) double startIconLeft;
@property(readonly, nonatomic) double contentTop;
@property(readonly, nonatomic) double contentLeft;
@property(readonly, nonatomic) unsigned long long contentMaxLineNum;
- (_Bool)isSingleLine;
@property(readonly, nonatomic) _Bool isInBrightStyle;
- (void)updateLayoutStyle:(int)arg1;
- (void)calculate;
- (id)initWithBarrageDataItem:(id)arg1 inBrightStyle:(_Bool)arg2;

@end

