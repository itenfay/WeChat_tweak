//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, WCVideoRender;

@protocol MultiTalkContactCellDelegate <NSObject>
- (int)getIfneedShowContactInviteInfo;
- (void)setMultitalkCollectionViewDoingAnimatioin:(_Bool)arg1;
- (_Bool)getMultitalkCollectionViewDoingAnimatioin;
- (void)onClickMultiTalkContactCellBigview;
- (void)onClickMultiTalkContactCellWithContact:(CContact *)arg1 render:(WCVideoRender *)arg2;
@end

