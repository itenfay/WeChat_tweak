//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class ModTextStatusDataItem, StatusCommentDataItem, StatusDeleteDataItem, StatusModelXmlResponse, TextStatusLikeDataItem;

@protocol TextStateNewXMLLogicDelegate <NSObject>
- (unsigned int)activeMessageChannel;
- (void)onParseAffModTextStatueFinish:(StatusModelXmlResponse *)arg1;
- (void)onGetStatusDeleteDataItem:(StatusDeleteDataItem *)arg1;
- (void)onShouldRefreshIconConfig;
- (void)onGetTextStatusCommentDataItem:(StatusCommentDataItem *)arg1;
- (void)onGetTextStatusLikeDataItem:(TextStatusLikeDataItem *)arg1;
- (void)onGetModTextStatusDataItem:(ModTextStatusDataItem *)arg1 checkSeqence:(_Bool)arg2;
@end

