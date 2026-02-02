//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface GameAppStoreReportInfo : NSObject
{
    int _uiarea;
    NSString *_appId;
    NSString *_msgId;
    NSString *_noticeId;
}

+ (id)reportInfoFromDict:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) int uiarea; // @synthesize uiarea=_uiarea;
@property(retain, nonatomic) NSString *noticeId; // @synthesize noticeId=_noticeId;
@property(retain, nonatomic) NSString *msgId; // @synthesize msgId=_msgId;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)description;

@end

