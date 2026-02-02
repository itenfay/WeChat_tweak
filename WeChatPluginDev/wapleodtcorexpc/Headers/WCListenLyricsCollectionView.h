//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@interface WCListenLyricsCollectionView
{
    CDUnknownBlockType _reloadDataCompletionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType reloadDataCompletionBlock; // @synthesize reloadDataCompletionBlock=_reloadDataCompletionBlock;
- (void)layoutSubviews;
- (void)reloadDataWithCompletionBlock:(CDUnknownBlockType)arg1;

@end
