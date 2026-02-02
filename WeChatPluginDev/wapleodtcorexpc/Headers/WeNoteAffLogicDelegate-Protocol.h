//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap, FavoritesItem, FavoritesItemDataField, MMUIViewController, NSArray, NSString, SimpleImgInfo, WCDataItem, WeNoteFlutterInstance, WeNoteReportLogic;

@protocol WeNoteAffLogicDelegate <NSObject>
- (_Bool)checkCompressImageForFavData:(FavoritesItemDataField *)arg1;
- (NSString *)genAttachmentId;
- (unsigned long long)getMaxFileSize;
- (void)holdOnAudio;
- (void)insertText:(NSString *)arg1;
- (void)insertDatas:(NSArray *)arg1;
- (void)setPopGestureEnable:(_Bool)arg1;
- (void)onClickMoreBtn;
- (_Bool)isVideoNeedLazyDownload:(NSString *)arg1;
- (void)tryToDownloadVideoWith:(SimpleImgInfo *)arg1;
- (WeNoteFlutterInstance *)wnFlutterInstance;
- (WeNoteReportLogic *)reportLogic;
- (int)enterNoteScene;
- (MMUIViewController *)viewController;
- (_Bool)bEditable;
- (unsigned long long)scene;
- (WCDataItem *)wcDataItem;
- (CMessageWrap *)messageWrap;
- (FavoritesItem *)favItem;
@end

