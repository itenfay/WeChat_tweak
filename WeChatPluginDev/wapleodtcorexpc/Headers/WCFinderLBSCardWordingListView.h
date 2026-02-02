//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, WCFinderLBSCardWordingListStyle;

@interface WCFinderLBSCardWordingListView : UIView
{
    NSArray *_wordings;
    NSMutableArray *_wordingLabels;
    unsigned long long _lineNumber;
    double _layoutWidth;
    WCFinderLBSCardWordingListStyle *_style;
}

+ (double)heightWithWordings:(id)arg1 lineNumber:(unsigned long long)arg2 width:(double)arg3;
+ (id)layoutPropertiesWithWordings:(id)arg1 lineNumber:(unsigned long long)arg2 width:(double)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLBSCardWordingListStyle *style; // @synthesize style=_style;
@property(nonatomic) double layoutWidth; // @synthesize layoutWidth=_layoutWidth;
@property(nonatomic) unsigned long long lineNumber; // @synthesize lineNumber=_lineNumber;
@property(retain, nonatomic) NSMutableArray *wordingLabels; // @synthesize wordingLabels=_wordingLabels;
@property(copy, nonatomic) NSArray *wordings; // @synthesize wordings=_wordings;
- (id)createDescWordingLabel;
- (void)ensureWordingLabels;
- (void)updateUI;
- (void)updateWithWordings:(id)arg1 lineNumber:(unsigned long long)arg2;
- (void)layoutSubviews;
- (void)updateStyle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

