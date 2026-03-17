//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class GetEmotionListResponse;

@protocol StoreEmotionGetEmotionListCgiDelegate <NSObject>

@optional
- (void)onGetEmotionListFinishedWithReqType:(unsigned int)arg1 Response:(GetEmotionListResponse *)arg2;
@end

