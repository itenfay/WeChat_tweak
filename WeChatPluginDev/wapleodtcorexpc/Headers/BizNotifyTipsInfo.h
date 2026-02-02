//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface BizNotifyTipsInfo : NSObject
{
    NSNumber *_msgCount;
    NSNumber *_msgId;
    NSString *_userName;
    NSString *_content;
    NSNumber *_isBizContact;
    NSString *_coverUrl;
    NSNumber *_forceRoundHeader;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithMsgCount:(id)arg1 msgId:(id)arg2 userName:(id)arg3 content:(id)arg4 isBizContact:(id)arg5 coverUrl:(id)arg6 forceRoundHeader:(id)arg7;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *forceRoundHeader; // @synthesize forceRoundHeader=_forceRoundHeader;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(retain, nonatomic) NSNumber *isBizContact; // @synthesize isBizContact=_isBizContact;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSNumber *msgId; // @synthesize msgId=_msgId;
@property(retain, nonatomic) NSNumber *msgCount; // @synthesize msgCount=_msgCount;
- (id)toList;

@end

