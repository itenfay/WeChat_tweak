//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCAdURLImageView;

@interface WCCanvasFullScreenImageComponent
{
    WCAdURLImageView *_imageView;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdURLImageView *imageView; // @synthesize imageView=_imageView;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

