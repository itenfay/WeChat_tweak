//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface BizShareInfo : NSObject
{
    NSString *_url;
    NSString *_title;
    NSString *_imgUrl;
    NSString *_desc;
    NSNumber *_itemShowType;
    NSString *_srcUsername;
    NSString *_displayUsername;
    NSString *_msgSvrId;
    NSString *_msgId;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithUrl:(id)arg1 title:(id)arg2 imgUrl:(id)arg3 desc:(id)arg4 itemShowType:(id)arg5 srcUsername:(id)arg6 displayUsername:(id)arg7 msgSvrId:(id)arg8 msgId:(id)arg9;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *msgId; // @synthesize msgId=_msgId;
@property(copy, nonatomic) NSString *msgSvrId; // @synthesize msgSvrId=_msgSvrId;
@property(copy, nonatomic) NSString *displayUsername; // @synthesize displayUsername=_displayUsername;
@property(copy, nonatomic) NSString *srcUsername; // @synthesize srcUsername=_srcUsername;
@property(retain, nonatomic) NSNumber *itemShowType; // @synthesize itemShowType=_itemShowType;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (id)toList;

@end

