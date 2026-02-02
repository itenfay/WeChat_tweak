//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIColor;

@interface WNImagePreviewView : UIView
{
    UIView *_headerView;
    UIView *_bottomView;
    UIView *_wnTextView;
    UIColor *_bkgColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *bkgColor; // @synthesize bkgColor=_bkgColor;
@property(retain, nonatomic) UIView *wnTextView; // @synthesize wnTextView=_wnTextView;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
- (id)initViewWithHeaderView:(id)arg1 andBottomView:(id)arg2 andWNTextView:(id)arg3 andBackgroundColor:(id)arg4 andSize:(struct CGSize)arg5;

@end

