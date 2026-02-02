//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class RichTextView;

@interface WCFinderPersonalCenterSectionFooterView : UICollectionReusableView
{
    RichTextView *_descTextView;
    CDUnknownBlockType _clickActionBlock;
}

+ (double)footerViewHeightWithWidth:(double)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType clickActionBlock; // @synthesize clickActionBlock=_clickActionBlock;
@property(retain, nonatomic) RichTextView *descTextView; // @synthesize descTextView=_descTextView;
- (void)layoutSubviews;
- (void)clickAction;
- (void)setupSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

