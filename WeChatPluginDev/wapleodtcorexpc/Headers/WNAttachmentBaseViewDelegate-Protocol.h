//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap, FavoritesItem, FavoritesItemDataField, MMUIViewController, NSArray, NSDictionary, NSString, RTEAttributeNode, SimpleImgInfo, UIView, WNAttachmentBaseView, WNTextAttachment;

@protocol WNAttachmentBaseViewDelegate <NSObject>
- (UIView *)getOriginAttachmentViewWith:(SimpleImgInfo *)arg1;
- (_Bool)hasRotated;
- (NSDictionary *)getTranslatedAttachmentInfoWith:(NSString *)arg1;
- (RTEAttributeNode *)getHighliteOrderListNode;
- (void)showMenuOnOrderListAttachmentView:(WNAttachmentBaseView *)arg1;
- (void)attachmentDidAddToSuperview:(WNAttachmentBaseView *)arg1;
- (unsigned int)enterNoteScene;
- (void)onOpenAttachmentWith:(FavoritesItemDataField *)arg1;
- (_Bool)isVideoNeedLazyDownload:(NSString *)arg1;
- (void)tryToDownloadLargeFileWith:(NSString *)arg1;
- (_Bool)canOpenAttachmentAttribute:(WNTextAttachment *)arg1;
- (void)onAttachmentAttributeNeedReload:(RTEAttributeNode *)arg1;
- (void)onAttachmentAttributeEndEdit:(RTEAttributeNode *)arg1;
- (void)onAttachmentAttributeStartEdit:(RTEAttributeNode *)arg1;
- (_Bool)isForceLoadImage;
- (_Bool)canEditNote;
- (NSArray *)getAllAttachmentImgInfo;
- (MMUIViewController *)getCurrentViewController;
- (CMessageWrap *)messageWrap;
- (FavoritesItem *)favItem;

@optional
- (void)onUnknownAttachmentViewAppearWith:(RTEAttributeNode *)arg1;
@end

