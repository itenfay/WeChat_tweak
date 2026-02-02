//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMCPUtil : NSObject
{
}

+ (_Bool)isSVGDataUnsafe:(id)arg1;
+ (id)cpKeyForSVGData:(id)arg1;
+ (_Bool)isAnimateEmojiUnsafe:(id)arg1;
+ (id)cpKeyForAnimateEmoji:(id)arg1;
+ (id)cpKeyForEmoticonMd5:(id)arg1;
+ (_Bool)isWebviewURLUnsafe:(id)arg1;
+ (id)cpKeyForWebviewURL:(id)arg1;
+ (_Bool)isChatRoomUnsafe:(id)arg1;
+ (_Bool)isChatRoomDisplayNameUnsafe:(id)arg1 userName:(id)arg2;
+ (id)cpKeyForChatRoomDisplayName:(id)arg1 userName:(id)arg2;
+ (_Bool)isHelloMsgUnsafe:(id)arg1 content:(id)arg2;
+ (id)cpKeyForHelloMsg:(id)arg1 content:(id)arg2;
+ (_Bool)isSignatureUnsafe:(id)arg1;
+ (id)cpKeyForSignature:(id)arg1;
+ (_Bool)isHeadImageUnsafe:(id)arg1;
+ (id)cpKeyForHeadImage:(id)arg1;
+ (id)cpKeyForOpenIMDesc:(id)arg1;
+ (void)clearCrashCountWithKey:(id)arg1;
+ (void)decreaseCrashCountWithKey:(id)arg1;
+ (void)increaseCrashCountWithKey:(id)arg1;
+ (_Bool)isUnsafeWithKey:(id)arg1;
+ (_Bool)isCurrentVersionUnsafeWithIdentifier:(id)arg1;
+ (id)cpKeyForCurrentVersionWithIdentifier:(id)arg1;
+ (id)cpKeyForTingImageUrl:(id)arg1;
+ (id)cpKeyForTingImageClientId:(id)arg1;
+ (_Bool)isImageScanCodeOCRReportUnsafe:(id)arg1;
+ (id)cpKeyForImageScanCodeOCRReport:(id)arg1;
+ (_Bool)isImageScanQRCodeUnsafe:(id)arg1;
+ (id)cpKeyForImageScanQRCode:(id)arg1;
+ (_Bool)isCameraScanCombineLogicUnsafe;
+ (id)cpKeyForCameraScanCombineLogic;
+ (id)cpKeyForClientCheckCgiReportCalculateMd5;
+ (id)cpKeyForClientCheckKvReportCalculateMd5;
+ (_Bool)isWXPicConvertUnsafe:(id)arg1;
+ (id)cpKeyForWXPicConvert:(id)arg1;
+ (_Bool)isWCTimeLineCommentUnsafe:(id)arg1;
+ (id)cpKeyForWCTimeLineComment:(id)arg1;
+ (_Bool)isWCTimeLineLikeUsersUnsafe:(id)arg1;
+ (id)cpKeyForWCTimeLineLikeUsers:(id)arg1;
+ (_Bool)isWCTimeLineContentUnsafe:(id)arg1;
+ (id)cpKeyForWCTimeLineContent:(id)arg1;
+ (_Bool)isMessageWrapUnsafe:(id)arg1;
+ (id)cpKeyForMessageWrap:(id)arg1;
+ (_Bool)isNicknameUnsafe:(id)arg1;
+ (id)cpKeyForNickname:(id)arg1;

@end

