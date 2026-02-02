//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol GWHaowanAlbumBadNetViewDelegate;

@interface GWHaowanAlbumBadNetView
{
    id <GWHaowanAlbumBadNetViewDelegate> _delegate;
    NSString *_badNetTip;
    NSString *_reloadDesc;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *reloadDesc; // @synthesize reloadDesc=_reloadDesc;
@property(copy, nonatomic) NSString *badNetTip; // @synthesize badNetTip=_badNetTip;
@property(nonatomic) __weak id <GWHaowanAlbumBadNetViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tapReloadAction;
- (id)initWithFrame:(struct CGRect)arg1;

@end

