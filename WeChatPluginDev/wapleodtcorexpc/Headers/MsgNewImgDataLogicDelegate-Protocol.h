//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap, NSArray, NSString;

@protocol MsgNewImgDataLogicDelegate <NSObject>
- (_Bool)onMsgNewImgLogicDataMatch:(CMessageWrap *)arg1;

@optional
- (_Bool)isOnlyMatchMsgFtsContent:(CMessageWrap *)arg1;
- (_Bool)isMatchMsg:(CMessageWrap *)arg1 SearchText:(NSString *)arg2;
- (void)onMsgNewImgDataLogicLoadOKWithLast:(NSArray *)arg1 Next:(NSArray *)arg2;
@end

