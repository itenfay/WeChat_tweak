//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMViewLayoutComponentItem;

@interface UIView (MMViewLayoutManagerExtPrivate)
@property(retain, nonatomic) MMViewLayoutComponentItem *mm_bindedItem;
@property(copy, nonatomic) CDUnknownBlockType mm_onDependentViewInit;
@end

