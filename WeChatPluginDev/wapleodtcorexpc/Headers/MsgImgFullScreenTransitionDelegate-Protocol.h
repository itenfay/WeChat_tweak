//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap;
@protocol MsgImgFullScreenTransitionComponent;

@protocol MsgImgFullScreenTransitionDelegate <NSObject>
- (id <MsgImgFullScreenTransitionComponent>)transitionComponentForMsg:(CMessageWrap *)arg1;
@end

