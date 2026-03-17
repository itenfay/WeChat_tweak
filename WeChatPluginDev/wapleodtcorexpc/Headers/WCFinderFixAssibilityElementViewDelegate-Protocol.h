//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, UIView, WCFinderFixAssibilityElementView;

@protocol WCFinderFixAssibilityElementViewDelegate <NSObject>

@optional
- (UIView *)fixAssibilityElementInsertToHeadForView:(WCFinderFixAssibilityElementView *)arg1;
- (NSArray *)fixAssibilityElementsForView:(WCFinderFixAssibilityElementView *)arg1;
@end

