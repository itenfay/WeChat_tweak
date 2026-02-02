//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface MMImageGridView : UIView
{
    struct CGRect m_startRect;
    double m_stepX;
    double m_stepY;
    long long m_columnCount;
    NSMutableArray *m_arrOfViews;
}

+ (double)getLayoutHeightForViews:(long long)arg1 columms:(long long)arg2 unitHeight:(double)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *m_arrOfViews; // @synthesize m_arrOfViews;
@property(nonatomic) long long m_columnCount; // @synthesize m_columnCount;
@property(nonatomic) double m_stepY; // @synthesize m_stepY;
@property(nonatomic) double m_stepX; // @synthesize m_stepX;
@property(nonatomic) struct CGRect m_startRect; // @synthesize m_startRect;
- (struct CGSize)getLayoutSizeEx:(_Bool)arg1;
- (struct CGSize)getLayoutSizeWithRefresh;
- (struct CGSize)getLayoutSize;
- (void)layoutSubviews;
- (void)dealloc;
- (id)init;

@end

