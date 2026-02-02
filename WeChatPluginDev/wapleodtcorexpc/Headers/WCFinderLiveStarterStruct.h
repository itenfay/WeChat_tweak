//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderWxAppInfo, NSString;

@interface WCFinderLiveStarterStruct : NSObject
{
    _Bool _isPrivateAccount;
    NSString *_sessionId;
    NSString *_finderUsername;
    FinderWxAppInfo *_wxAppInfo;
}

+ (id)replaceCommaToSemicolon:(id)arg1;
+ (id)checkToGetStruct;
- (void).cxx_destruct;
@property(nonatomic) _Bool isPrivateAccount; // @synthesize isPrivateAccount=_isPrivateAccount;
@property(retain, nonatomic) FinderWxAppInfo *wxAppInfo; // @synthesize wxAppInfo=_wxAppInfo;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (id)toReport;

@end

