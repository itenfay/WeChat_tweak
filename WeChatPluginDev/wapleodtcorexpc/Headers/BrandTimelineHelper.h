//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface BrandTimelineHelper : NSObject
{
}

+ (id)getHeaderImgUrl:(id)arg1 contact:(id)arg2;
+ (void)asyncNotifyEnterChat:(id)arg1;
+ (void)openRecoFlowAggregationMsgWithBTRecoFlowMsgOpenParams:(id)arg1 fromVC:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (void)openRecoFlowMsgWithSectionData:(id)arg1 withIndexPath:(id)arg2 fromVC:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
+ (void)openRecommendMsgWithViewModel:(id)arg1 fromVC:(id)arg2 enterScene:(unsigned int)arg3 enterSubscene:(unsigned int)arg4 completionBlock:(CDUnknownBlockType)arg5;
+ (void)openRecommendMsgWithViewModel:(id)arg1 fromVC:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (id)webViewExtraInfoWithRecMsgWithStyle:(unsigned int)arg1 accountData:(id)arg2 appMsg:(id)arg3;
+ (id)webViewExtraInfoWithReaderWrap:(id)arg1 msgWrap:(id)arg2 vcType:(unsigned int)arg3;
+ (id)getWebViewController:(id)arg1 url:(id)arg2 forPeek:(_Bool)arg3 fromMsgWrap:(id)arg4 vcType:(unsigned int)arg5;
+ (void)openMPArticleWithInfo:(id)arg1 enterSource:(unsigned long long)arg2 fromVC:(id)arg3;
+ (void)showReader:(id)arg1 fromMsgWrap:(id)arg2 viewModel:(id)arg3 fromVC:(id)arg4 videoExtInfo:(id)arg5 enterSource:(unsigned long long)arg6 completionBlock:(CDUnknownBlockType)arg7;
+ (_Bool)shouldGoToEmoticonDetail:(id)arg1 fromUsername:(id)arg2 fromVC:(id)arg3;
+ (void)jumpWeappOpWrap:(id)arg1 fromMsgWrap:(id)arg2 fromVC:(id)arg3;
+ (void)unsubscribeContact:(id)arg1;
+ (void)openContactSession:(id)arg1 fromOftenRead:(_Bool)arg2 fromVC:(id)arg3;

@end

