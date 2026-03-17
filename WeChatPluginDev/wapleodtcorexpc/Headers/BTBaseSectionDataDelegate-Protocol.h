//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class BTBaseSectionData, BTCanvasMsgSectionData, BTMsgSectionData, BrandFinderLiveInfo, MMUIViewController, MPPageRelatedInfo, NSString, ReaderWrap;
@protocol BTItemCellViewModelVideoPlayProtocol, WXCustomWebViewControllerProtocol;

@protocol BTBaseSectionDataDelegate <NSObject>

@optional
- (_Bool)isTitleUp;
- (void)onCanvasMsgSectionClick:(BTCanvasMsgSectionData *)arg1;
- (_Bool)isLiveInfoHasClick:(BrandFinderLiveInfo *)arg1;
- (_Bool)canCanvasItemCellPlayVideo:(id <BTItemCellViewModelVideoPlayProtocol>)arg1;
- (_Bool)onGetMsgTopRightUseRecReasonOpen;
- (_Bool)isMsgViewControllerInForground;
- (MMUIViewController<WXCustomWebViewControllerProtocol> *)getCurrentWebviewViewController;
- (unsigned long long)indexForMsgSectionData:(BTMsgSectionData *)arg1;
- (MPPageRelatedInfo *)onMsgSectionGetRelatedInfoForReaderWrap:(ReaderWrap *)arg1;
- (NSString *)onMsgSectionGetPageIdentifierForReaderWrap:(ReaderWrap *)arg1;
- (void)onMsgSectionHeightChange:(BTMsgSectionData *)arg1;
- (void)onBaseSectionHeightChange:(BTBaseSectionData *)arg1;
@end

