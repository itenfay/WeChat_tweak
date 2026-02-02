//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMVoidStringCallback, NSString;

@protocol MMKHoneyPayService <NSObject>
- (void)jumpToBankcardList;
- (void)stopSelectSingleContact;
- (void)selectSingeContactImpl:(NSString *)arg1 resultCallback:(MMVoidStringCallback *)arg2;
- (void)handleOfflineThings:(int)arg1 bindSerial:(NSString *)arg2;
- (void)updateBubbleMsg:(NSString *)arg1 msgContent:(NSString *)arg2 username:(NSString *)arg3;
@end

