//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCPayFaceHBItem;

@protocol WCPayFaceHBGetViewDelegate <NSObject>
- (void)OnFaceHBGetOpenHB:(WCPayFaceHBItem *)arg1;
- (void)OnFaceHBGetCancel;
@end

