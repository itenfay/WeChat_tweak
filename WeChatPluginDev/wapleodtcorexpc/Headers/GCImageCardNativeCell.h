//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, MMWebImageView, UIImageView, UIView;

@interface GCImageCardNativeCell
{
    UIView *_containerView;
    MMWebImageView *_coverImageView;
    MMUILabel *_descLabel;
    UIImageView *_playIcon;
}

+ (struct CGSize)innerContentSizeForImageCard:(id)arg1;
+ (void)onCalculatLayoutInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *playIcon; // @synthesize playIcon=_playIcon;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMWebImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void)configureWithCellModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

