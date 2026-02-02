//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView;
@protocol MJShootAlbumEntryViewDelegate;

@interface MJShootAlbumEntryView : UIView
{
    id <MJShootAlbumEntryViewDelegate> _delegate;
    UIImageView *_thumbnailView;
    unsigned long long _sizeMode;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long sizeMode; // @synthesize sizeMode=_sizeMode;
@property(retain, nonatomic) UIImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(nonatomic) __weak id <MJShootAlbumEntryViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)placeholderImage;
- (void)fetchLatestAssetThumbnail;
- (void)addAssetsButtonTouchupInside:(id)arg1;
- (void)commonInit;
- (id)initWithSizeMode:(unsigned long long)arg1;

@end

