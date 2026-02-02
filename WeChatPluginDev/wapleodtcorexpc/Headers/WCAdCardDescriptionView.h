//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray;

@interface WCAdCardDescriptionView : UIView
{
    _Bool _isAnimating;
    NSArray *_descriptionItems;
    long long _buttonStyle;
    NSMutableArray *_descriptionViews;
}

+ (_Bool)hasDescriptionIconForItems:(id)arg1;
+ (double)getHeightForItems:(id)arg1 maxWidth:(double)arg2 buttonStyle:(long long)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) NSMutableArray *descriptionViews; // @synthesize descriptionViews=_descriptionViews;
@property(nonatomic) long long buttonStyle; // @synthesize buttonStyle=_buttonStyle;
@property(retain, nonatomic) NSArray *descriptionItems; // @synthesize descriptionItems=_descriptionItems;
- (void)switchToIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (_Bool)hasDescriptionIcon;
- (void)generateItemViews;
- (id)initWithFrame:(struct CGRect)arg1 descriptionItems:(id)arg2 buttonStyle:(long long)arg3;

@end

