//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderContact;

@protocol WCFinderPatCollectionReusableViewDelegate <NSObject>

@optional
- (void)onPatMusicViewClickAuthorAction:(WCFinderContact *)arg1;
- (_Bool)onPatMusicViewClickPlayView:(_Bool)arg1;
- (_Bool)onPatMusicViewMeidaIsValid:(_Bool)arg1;
- (void)onPatMusicViewClickPostAction;
@end

