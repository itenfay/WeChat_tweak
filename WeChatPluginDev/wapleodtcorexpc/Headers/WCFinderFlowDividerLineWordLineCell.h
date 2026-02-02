//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class NSString, UILabel, UIView;

@interface WCFinderFlowDividerLineWordLineCell : UICollectionReusableView
{
    UIView *_leftLine;
    UIView *_rightLine;
    UILabel *_wordingLabel;
    struct UIEdgeInsets _contentInsets;
}

+ (struct CGSize)dispalySize:(struct CGSize)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *wordingLabel; // @synthesize wordingLabel=_wordingLabel;
@property(retain, nonatomic) UIView *rightLine; // @synthesize rightLine=_rightLine;
@property(retain, nonatomic) UIView *leftLine; // @synthesize leftLine=_leftLine;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (void)_doLayout;
@property(retain, nonatomic) NSString *wording;
- (id)initWithFrame:(struct CGRect)arg1;

@end

