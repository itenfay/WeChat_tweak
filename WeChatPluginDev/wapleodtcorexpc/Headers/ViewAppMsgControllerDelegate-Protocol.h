//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap;

@protocol ViewAppMsgControllerDelegate <NSObject>

@optional
- (_Bool)isShouldShowNavigationBarInViewAppMsg:(CMessageWrap *)arg1;
- (void)previewImage:(CMessageWrap *)arg1 originFrame:(struct CGRect)arg2;
@end

