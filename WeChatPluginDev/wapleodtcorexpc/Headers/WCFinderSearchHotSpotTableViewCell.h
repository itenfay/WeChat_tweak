//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class NSString, RichTextView, UILabel, UIView;

@interface WCFinderSearchHotSpotTableViewCell : UITableViewCell
{
    UIView *_containerView;
    unsigned long long _cellType;
    RichTextView *_titleLabel;
    UIView *_lineView;
    UILabel *_reasonLabel;
    unsigned long long _rowCount;
}

+ (id)cellID;
+ (double)cellHWithHotWord:(id)arg1 cellW:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long rowCount; // @synthesize rowCount=_rowCount;
@property(nonatomic) __weak UILabel *reasonLabel; // @synthesize reasonLabel=_reasonLabel;
@property(nonatomic) __weak UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) __weak RichTextView *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) unsigned long long cellType; // @synthesize cellType=_cellType;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
- (double)lineWidthAtY:(double)arg1 lineIndex:(long long)arg2 richTextView:(id)arg3;
- (void)layoutSubviews;
- (void)updateUIWithHotWord:(id)arg1 type:(unsigned long long)arg2 width:(double)arg3;
- (void)setup;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

