//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCLanDeviceServiceUtil : NSObject
{
}

+ (id)fileExtInPath:(id)arg1;
+ (id)hashNameForString:(id)arg1;
+ (id)videoKissMsgFromTimeLineItem:(id)arg1 isNeedFileDetail:(_Bool)arg2;
+ (id)imageKissMsgFromImageTimeLineItem:(id)arg1;
+ (id)imagePathFromImageTimeLineItem:(id)arg1;
+ (id)videoKissMsgFromMsgWrap:(id)arg1 isNeedFileDetail:(_Bool)arg2;
+ (id)fileKissMsgFromMsgWrap:(id)arg1 isNeedFileDetail:(_Bool)arg2;
+ (id)filePathFromMsgWrap:(id)arg1;
+ (id)imageKissMsgFromMsgWrap:(id)arg1;
+ (id)imagePathFromImageMsgWrap:(id)arg1;
+ (id)HDImagePathFromImageMsgWrap:(id)arg1 inScene:(unsigned long long)arg2;
+ (id)kissLogicForLanDeviceData:(id)arg1 delegate:(id)arg2;
+ (_Bool)canApplyLanDeviceData:(id)arg1 withDevice:(id)arg2;
+ (unsigned long long)kissTypeForDevice:(id)arg1;
+ (unsigned long long)deviceSceneForTimeLineItem:(id)arg1;
+ (unsigned long long)deviceSceneForMsgWrap:(id)arg1;

@end

