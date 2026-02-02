//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSIndexPath, WCFinderNeayByStreamLayout;

@protocol WCFinderNeayByStreamLayoutDelegate <NSObject>
- (_Bool)isNeedSetupDecorationView:(unsigned long long)arg1;
- (_Bool)isNeedSetupFooterView:(unsigned long long)arg1;
- (_Bool)isNeedSetupHeaderView:(unsigned long long)arg1;
- (double)streamLayout:(WCFinderNeayByStreamLayout *)arg1 heightForItemAtIndex:(NSIndexPath *)arg2 itemWidth:(double)arg3;
- (struct UIEdgeInsets)edgeInsetdInStreamLayout:(WCFinderNeayByStreamLayout *)arg1 atSection:(unsigned long long)arg2;
- (double)rowMarginInStreamLayout:(WCFinderNeayByStreamLayout *)arg1 atSection:(unsigned long long)arg2;
- (double)columnMarginInStreamLayout:(WCFinderNeayByStreamLayout *)arg1 atSection:(unsigned long long)arg2;
- (unsigned long long)columnCountInStreamLayout:(WCFinderNeayByStreamLayout *)arg1 atSection:(unsigned long long)arg2;
- (unsigned long long)numberOfStreamLayoutSections;

@optional
- (void)headerViewWillNotBeHovered;
- (void)headerViewWillBeHovered;
- (double)headerOffset;
- (double)hoverTopOffset;
- (_Bool)isNeedHoverHeaderView:(unsigned long long)arg1;
- (double)streamLayoutHerderTopOffset:(WCFinderNeayByStreamLayout *)arg1 atSection:(unsigned long long)arg2;
- (double)streamLayoutDecorationViewTop;
- (double)streamLayoutDecorationViewHeight:(WCFinderNeayByStreamLayout *)arg1 atSection:(unsigned long long)arg2;
- (double)streamLayoutFooterHeight:(WCFinderNeayByStreamLayout *)arg1 atSection:(unsigned long long)arg2;
- (double)streamLayoutHeaderHeight:(WCFinderNeayByStreamLayout *)arg1 atSection:(unsigned long long)arg2;
@end

