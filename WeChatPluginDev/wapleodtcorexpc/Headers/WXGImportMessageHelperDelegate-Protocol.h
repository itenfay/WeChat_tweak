//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap, NSString;

@protocol WXGImportMessageHelperDelegate <NSObject>

@optional
- (_Bool)filterMsgBeforeAddToDB:(CMessageWrap *)arg1;
- (void)onImportOneMsgItem:(NSString *)arg1;
@end

