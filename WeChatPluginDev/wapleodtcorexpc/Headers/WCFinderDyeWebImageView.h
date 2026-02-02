//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIImageView.h>

@class NSURL, UIColor;

@interface WCFinderDyeWebImageView : UIImageView
{
    NSURL *_url;
    NSURL *_darkURL;
    UIColor *_color;
    NSURL *_displayUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *displayUrl; // @synthesize displayUrl=_displayUrl;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) NSURL *darkURL; // @synthesize darkURL=_darkURL;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)traitCollectionDidChange:(id)arg1;
- (id)urlAppendColor:(id)arg1 color:(id)arg2;
- (id)currentDisplayColor;
- (id)currentFormatUrl;
- (id)currentUrl;
- (struct CGSize)dyeSizeForImage:(id)arg1;
- (id)dyeImage:(id)arg1 color:(id)arg2;
- (void)setupImage:(id)arg1 withUrl:(id)arg2;
- (void)reloadImage;
- (void)setLightImageURL:(id)arg1 darkImageURL:(id)arg2 color:(id)arg3;

@end

