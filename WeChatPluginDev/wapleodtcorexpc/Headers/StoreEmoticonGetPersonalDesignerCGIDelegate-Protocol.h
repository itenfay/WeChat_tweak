//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class GetPersonalDesignerResponse;

@protocol StoreEmoticonGetPersonalDesignerCGIDelegate <NSObject>

@optional
- (void)onGetPersonalDesignerFailed;
- (void)onGotPersonalDesignerResponse:(GetPersonalDesignerResponse *)arg1;
@end

