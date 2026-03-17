//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap, CaptureVideoInfo, ImageInfo, MMAsset, NSArray, NSData, NSMutableArray, NSString, UIImage;

@protocol MsgDelegate <NSObject>

@optional
- (void)ClearUnRead:(NSString *)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (unsigned int)GetUnReadCount:(NSString *)arg1;
- (void)DelMsg:(NSString *)arg1 MsgList:(NSArray *)arg2 DelAll:(_Bool)arg3;
- (NSMutableArray *)GetDownMsg:(NSString *)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (NSMutableArray *)getMsgFromLocalId:(unsigned int)arg1;
- (NSMutableArray *)GetMsg:(NSString *)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (void)AdjustMsgFromToUserWithChatName:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2;
- (void)AdjustMsgBeforeSendWithChatName:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2;
- (void)ResendMsg:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2;
- (void)ModMsg:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2;
- (void)AddVideoMsg:(NSString *)arg1 ToUsr:(NSString *)arg2 VideoInfo:(CaptureVideoInfo *)arg3;
- (void)AddMsg:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2;
- (void)preAddMsg:(NSString *)arg1 msgWrap:(CMessageWrap *)arg2;
- (CMessageWrap *)formImageMsgByMMAsset:(MMAsset *)arg1 toUserName:(NSString *)arg2;
- (CMessageWrap *)FormImageMsg:(NSString *)arg1 withImage:(UIImage *)arg2 withData:(NSData *)arg3 withImageInfo:(ImageInfo *)arg4;
- (CMessageWrap *)FormImageMsg:(NSString *)arg1 withImage:(UIImage *)arg2 withData:(NSData *)arg3;
- (CMessageWrap *)FormImageMsg:(NSString *)arg1 withImage:(UIImage *)arg2;
- (CMessageWrap *)FormTextMsg:(NSString *)arg1 withText:(NSString *)arg2 withMsgSource:(NSString *)arg3;
- (CMessageWrap *)FormTextMsg:(NSString *)arg1 withText:(NSString *)arg2;
@end

