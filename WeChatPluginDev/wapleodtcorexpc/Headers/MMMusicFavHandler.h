//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMMusicVideoImageDownloader;
@protocol MMMusicFavHandlerDataSource, MMMusicFavHandlerDelegate;

@interface MMMusicFavHandler
{
    _Bool _isFromShake;
    id <MMMusicFavHandlerDataSource> _dataSource;
    id <MMMusicFavHandlerDelegate> _delegate;
    MMMusicVideoImageDownloader *_imageDownLoader;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMMusicVideoImageDownloader *imageDownLoader; // @synthesize imageDownLoader=_imageDownLoader;
@property(nonatomic) _Bool isFromShake; // @synthesize isFromShake=_isFromShake;
@property(nonatomic) __weak id <MMMusicFavHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MMMusicFavHandlerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)genLogMusicInfo:(id)arg1;
- (void)addToFavouritesWithMusicInfo:(id)arg1 mvModel:(id)arg2 favSourceType:(int)arg3;

@end

