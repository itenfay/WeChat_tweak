//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UILabel, WCPayWebImageView;

@interface WCPaySecuritySettingTipsBack : UIView
{
    NSString *_imageUrl;
    NSString *_desc;
    WCPayWebImageView *_imageView;
    UILabel *_label;
}

- (void).cxx_destruct;
@property(retain) UILabel *label; // @synthesize label=_label;
@property(retain) WCPayWebImageView *imageView; // @synthesize imageView=_imageView;
@property(retain) NSString *desc; // @synthesize desc=_desc;
@property(retain) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
- (void)updateDesc;
- (void)updateImage;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 imageUrl:(id)arg2 desc:(id)arg3;

@end

