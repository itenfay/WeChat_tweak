//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray;

@interface MMProfileMomentsCellView : UIView
{
    NSArray *_displayedMediaItems;
    NSArray *_displayedImageViews;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *displayedImageViews; // @synthesize displayedImageViews=_displayedImageViews;
@property(copy, nonatomic) NSArray *displayedMediaItems; // @synthesize displayedMediaItems=_displayedMediaItems;
- (void)removeDisplayedImageViews;
- (void)updateWithDataItems:(id)arg1;

@end

