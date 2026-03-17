//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebImageView;

@interface MMFinderLiveShareAvatarImageView : NSObject
{
    MMWebImageView *_webImageView;
}

@property(retain, nonatomic) MMWebImageView *webImageView; // @synthesize webImageView=_webImageView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 shareItem:(id)arg2;

@end

