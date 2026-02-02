//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderFeedFlowView;

@protocol WCFinderFeedFlowViewLayoutDelegate <NSObject>

@optional
- (double)finderFeedFlowViewFlowSectionBottomFooterInset:(WCFinderFeedFlowView *)arg1;
- (struct CGSize)finderFeedFlowView:(WCFinderFeedFlowView *)arg1 cellSpaceAtSection:(unsigned long long)arg2;
- (struct UIEdgeInsets)finderFeedFlowView:(WCFinderFeedFlowView *)arg1 edgeInsetsAtSection:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowView:(WCFinderFeedFlowView *)arg1 columnCountAtSection:(unsigned long long)arg2;
@end

