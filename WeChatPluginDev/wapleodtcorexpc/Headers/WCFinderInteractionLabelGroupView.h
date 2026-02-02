//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray;

@interface WCFinderInteractionLabelGroupView : UIView
{
    double _fWidth;
    NSArray *_labels;
    NSMutableArray *_labelViews;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *labelViews; // @synthesize labelViews=_labelViews;
@property(retain, nonatomic) NSArray *labels; // @synthesize labels=_labels;
@property(nonatomic) double fWidth; // @synthesize fWidth=_fWidth;
- (struct CGSize)intrinsicContentSize;
- (void)updateSize:(struct CGSize)arg1;
- (void)layoutUI;
- (id)createInteractionTagTextView;
- (void)handleLastImageStyle:(id)arg1;
- (void)prepareLabelViews;
- (void)updateWithInteractionLabels:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

