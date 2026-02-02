//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableDictionary, UIColor;

@interface WCFinderLimitCheckPanelView : UIView
{
    NSMutableDictionary *_arrangeViewsDic;
    UIColor *_lineColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property(retain, nonatomic) NSMutableDictionary *arrangeViewsDic; // @synthesize arrangeViewsDic=_arrangeViewsDic;
- (void)layoutAddedSubviews;
- (void)addArrangedSubview:(id)arg1 priority:(long long)arg2;
- (void)removeAllArrangeSubviews;
- (void)setupLineColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

