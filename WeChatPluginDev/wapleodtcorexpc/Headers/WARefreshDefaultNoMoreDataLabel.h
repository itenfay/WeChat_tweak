//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel;

@interface WARefreshDefaultNoMoreDataLabel : UIView
{
    int _lineWordsInterval;
    UIView *_lineLeftView;
    UIView *_lineRightView;
    MMUILabel *_noMoreTipsLabel;
}

- (void).cxx_destruct;
@property(nonatomic) int lineWordsInterval; // @synthesize lineWordsInterval=_lineWordsInterval;
@property(retain, nonatomic) MMUILabel *noMoreTipsLabel; // @synthesize noMoreTipsLabel=_noMoreTipsLabel;
@property(retain, nonatomic) UIView *lineRightView; // @synthesize lineRightView=_lineRightView;
@property(retain, nonatomic) UIView *lineLeftView; // @synthesize lineLeftView=_lineLeftView;
- (void)sizeToFit;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateWords:(id)arg1;
- (void)configureLayout;
- (void)layoutSubviews;
- (id)init;

@end

