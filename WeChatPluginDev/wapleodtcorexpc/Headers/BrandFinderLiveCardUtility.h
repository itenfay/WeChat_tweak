//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface BrandFinderLiveCardUtility : NSObject
{
}

+ (id)buildBrandFinderMsgReportExtraDataDictWithBizUserName:(id)arg1 url:(id)arg2;
+ (id)parseReaderMsgToLiveMsgWrap:(id)arg1;
+ (id)convertReaderMessageWrapToLiveMsg:(id)arg1 readerWrapIndex:(long long)arg2;

@end

