//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@interface WAWebViewPlugin_Favorite : NSObject
{
}

- (id)snapshotWebView;
- (void)getImageDataFromUrl:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addFavorItemWithInfo:(id)arg1;
- (void)notifyToAddFavItem:(id)arg1;

@end
