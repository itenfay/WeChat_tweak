//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CPushContact, MMUIViewController;

@protocol SayHelloDataLogicDelegate <NSObject>
- (void)OnSayHelloDataChange;
- (MMUIViewController *)getViewController;

@optional
- (void)OnSayHelloDataSendVerifyMsg:(CPushContact *)arg1;
- (void)OnSayHelloDataVerifyContactOK:(CPushContact *)arg1;
- (void)OnSayHelloDataUnReadCountChange;
@end

