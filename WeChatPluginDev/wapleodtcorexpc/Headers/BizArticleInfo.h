//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface BizArticleInfo : NSObject
{
    NSNumber *_msgId;
    NSNumber *_svrId;
    NSNumber *_pos;
    NSNumber *_posInCard;
    NSNumber *_openScene;
    NSNumber *_subScene;
    NSString *_url;
    NSNumber *_itemShowType;
    NSString *_userName;
    NSString *_nickName;
    NSString *_title;
    NSString *_coverUrl;
    NSNumber *_bizFinderEnterId;
    NSString *_rankSessionId;
    NSNumber *_msgLocalId;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithMsgId:(id)arg1 svrId:(id)arg2 pos:(id)arg3 posInCard:(id)arg4 openScene:(id)arg5 subScene:(id)arg6 url:(id)arg7 itemShowType:(id)arg8 userName:(id)arg9 nickName:(id)arg10 title:(id)arg11 coverUrl:(id)arg12 bizFinderEnterId:(id)arg13 rankSessionId:(id)arg14 msgLocalId:(id)arg15;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *msgLocalId; // @synthesize msgLocalId=_msgLocalId;
@property(copy, nonatomic) NSString *rankSessionId; // @synthesize rankSessionId=_rankSessionId;
@property(retain, nonatomic) NSNumber *bizFinderEnterId; // @synthesize bizFinderEnterId=_bizFinderEnterId;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSNumber *itemShowType; // @synthesize itemShowType=_itemShowType;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSNumber *subScene; // @synthesize subScene=_subScene;
@property(retain, nonatomic) NSNumber *openScene; // @synthesize openScene=_openScene;
@property(retain, nonatomic) NSNumber *posInCard; // @synthesize posInCard=_posInCard;
@property(retain, nonatomic) NSNumber *pos; // @synthesize pos=_pos;
@property(retain, nonatomic) NSNumber *svrId; // @synthesize svrId=_svrId;
@property(retain, nonatomic) NSNumber *msgId; // @synthesize msgId=_msgId;
- (id)toList;

@end

