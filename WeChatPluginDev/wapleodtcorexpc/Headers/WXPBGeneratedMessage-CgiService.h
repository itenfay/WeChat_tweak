//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class GamePbRequestMsgInfo;

@class WXPBGeneratedMessage;

@interface WXPBGeneratedMessage (CgiService)
- (_Bool)isRespSuccess;
@property(retain, nonatomic) GamePbRequestMsgInfo *pbRequestMsgInfo;
- (id)getAndCreateMsgInfoIfNeed;
- (id)gcToJsonStr;
@end

