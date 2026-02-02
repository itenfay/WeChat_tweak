//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class NSString, UIButton;
@protocol WCResourceHeaderViewDelegate;

@interface WCResourceCollectionResuableView : UICollectionReusableView
{
    NSString *_viewTitle;
    id <WCResourceHeaderViewDelegate> _delegate;
    UIButton *_selectButton;
    unsigned long long _sectionIndex;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(retain, nonatomic) UIButton *selectButton; // @synthesize selectButton=_selectButton;
@property(nonatomic) __weak id <WCResourceHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *viewTitle; // @synthesize viewTitle=_viewTitle;
- (void)onClickButton;
- (void)updateWithViewTitle:(id)arg1 withSize:(struct CGSize)arg2;
- (void)layoutSubviews;

@end

