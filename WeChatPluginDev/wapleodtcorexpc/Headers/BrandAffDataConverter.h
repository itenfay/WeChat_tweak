//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface BrandAffDataConverter : NSObject
{
}

+ (struct BizMsgItem)convertReaderWrapToMsgItem:(id)arg1;
+ (id)convertTLResortEndInfo:(id)arg1;
+ (id)convertTLResortStartInfo:(id)arg1;
+ (struct BizMsgResortV2Context_SessionBox)convertSessionInfoToSessionBox:(id)arg1;
+ (BizMsgInfo_f097391f)convertMsgWrapToAffMsgInfo:(id)arg1 isNewMsg:(_Bool)arg2 isRedDotMsg:(_Bool)arg3;
+ (id)convertAffMsgInfoDataListToMsgWrapList:(id)arg1;
+ (id)convertAffMsgInfoToMsgWrap:(BizMsgInfo_f097391f)arg1;
+ (id)convertAffMsgInfoDataToMsgWrap:(id)arg1;

@end

