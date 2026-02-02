//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMWebImageView, UIScrollView;
@protocol WCLabSettingDetailImagesCellDelegate;

@interface WCLabSettingDetailImagesCell : UITableViewCell
{
    UIScrollView *_scrollView;
    MMWebImageView *_webImageView;
    MMWebImageView *_webImageView2;
    MMWebImageView *_webImageView3;
    id <WCLabSettingDetailImagesCellDelegate> _delegate;
}

+ (double)height;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WCLabSettingDetailImagesCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)initImages;
- (void)onClickImage:(id)arg1;
- (void)configureWithLabItem:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

