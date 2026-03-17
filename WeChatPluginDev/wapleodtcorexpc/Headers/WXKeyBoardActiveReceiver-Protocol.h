//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, CMessageWrap, MMUIViewController, NSArray;

@protocol WXKeyBoardActiveReceiver <NSObject>
- (CContact *)getContact;
- (MMUIViewController *)getViewController;
- (void)sendMessage:(CMessageWrap *)arg1;
- (NSArray *)supportMessageTypes;
@end

