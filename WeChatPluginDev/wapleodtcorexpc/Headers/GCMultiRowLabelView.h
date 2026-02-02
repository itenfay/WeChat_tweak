//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface GCMultiRowLabelView : UIView
{
    int _rowCnt;
    NSMutableArray *_labelArray;
}

- (void).cxx_destruct;
@property(nonatomic) int rowCnt; // @synthesize rowCnt=_rowCnt;
@property(retain, nonatomic) NSMutableArray *labelArray; // @synthesize labelArray=_labelArray;
- (void)layoutSubviews;
- (void)configureWithLabelArray:(id)arg1;
- (void)configureRowCnt:(int)arg1 labelConfig:(id)arg2;

@end

