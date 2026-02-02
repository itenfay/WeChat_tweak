//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface GameCenterMsgListNoticeTabViewController
{
}

- (void)gameVideoEditController:(id)arg1 didFailedWithError:(id)arg2;
- (void)openPublishViewControllerWithVideoInfo:(id)arg1 appid:(id)arg2;
- (void)gameVideoEditController:(id)arg1 didFinishWithFilePath:(id)arg2 withExtra:(id)arg3;
- (void)gameAlbumVideoDidChoose:(id)arg1 extraInfo:(id)arg2;
- (void)videoAlbumControllerDidSkip;
- (void)videoAlbumControllerDidExit;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)msgListName;
- (id)cellReuseIdentifier;
- (Class)cellClassType;
- (unsigned int)showType;
- (void)viewDidLoad;

@end

