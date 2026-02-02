//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface MassSendCardMsg : NSObject
{
    NSString *_userName;
    NSString *_nickName;
    NSNumber *_orderId;
    NSNumber *_msgId;
    NSNumber *_svrId;
    NSNumber *_isExposed;
    NSNumber *_isValidExposed;
    NSNumber *_isExpand;
    NSNumber *_isPlaceTop;
    NSNumber *_createTime;
    NSString *_rankSessionId;
    NSNumber *_isBigPic;
    NSArray *_items;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithUserName:(id)arg1 nickName:(id)arg2 orderId:(id)arg3 msgId:(id)arg4 svrId:(id)arg5 isExposed:(id)arg6 isValidExposed:(id)arg7 isExpand:(id)arg8 isPlaceTop:(id)arg9 createTime:(id)arg10 rankSessionId:(id)arg11 isBigPic:(id)arg12 items:(id)arg13;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSNumber *isBigPic; // @synthesize isBigPic=_isBigPic;
@property(copy, nonatomic) NSString *rankSessionId; // @synthesize rankSessionId=_rankSessionId;
@property(retain, nonatomic) NSNumber *createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSNumber *isPlaceTop; // @synthesize isPlaceTop=_isPlaceTop;
@property(retain, nonatomic) NSNumber *isExpand; // @synthesize isExpand=_isExpand;
@property(retain, nonatomic) NSNumber *isValidExposed; // @synthesize isValidExposed=_isValidExposed;
@property(retain, nonatomic) NSNumber *isExposed; // @synthesize isExposed=_isExposed;
@property(retain, nonatomic) NSNumber *svrId; // @synthesize svrId=_svrId;
@property(retain, nonatomic) NSNumber *msgId; // @synthesize msgId=_msgId;
@property(retain, nonatomic) NSNumber *orderId; // @synthesize orderId=_orderId;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (id)toList;

@end

