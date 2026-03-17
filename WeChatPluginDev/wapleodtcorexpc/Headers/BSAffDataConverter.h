//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface BSAffDataConverter : NSObject
{
}

+ (struct BizLiveXmlObject)covertFinderLiveData:(id)arg1;
+ (struct BizMsgItem)convertReaderWrapToMsgItem:(id)arg1;
+ (BizMsgInfo_6130975d)convertMsgWrapToAffMsgInfo:(id)arg1 isNewMsg:(_Bool)arg2 isRedDotMsg:(_Bool)arg3;
+ (id)convertAffMsgInfoDataListToMsgWrapList:(id)arg1;
+ (id)convertAffMsgInfoToMsgWrap:(BizMsgInfo_6130975d)arg1;
+ (id)convertAffMainSessionBoxInfo2BESessionBoxInfo:(struct BizMainSessionBoxRedDotInfo)arg1;
+ (struct BizMainSessionBoxRedDotInfo)convertBoxRedDotInfoDataToBizRedDotInfo:(id)arg1;
+ (id)convertAffMsgInfoDataToMsgWrap:(id)arg1;

@end

